
#include <vector>

#include "movegen.h"
#include "evaluate.h"

#include "piece/piece.h"

int MoveGen::getMoveId(Move move)
{
    int i = 0;

    for (auto it = movesv.begin(); it != movesv.end(); it++, i++)
        if (move == *it)
            return i;

//    for (int i = 0; i < moveNum; i++)
//        if (move == moves[i])
//            return i;

    return -1;
}

int MoveGen::checkIfMoveIsValid(Move move)
{
    if (debug)
    {
        printf("ORIG: ");
        move.print();
    }

    for (auto it = movesv.begin(); it != movesv.end(); it++)
//    for (int i = 0; i < moveNum; i++)
    {
        if (debug)
        {
            printf("  ? ");
            it->print();
        }

        if (move == *it)
            return 1;
    }

    return 0;
}

void MoveGen::checkValidity()
{
    // ha sakkban van, el kell haritania
    // sakkba ne lephessen
    // kiralyt ne uthessen

    for (auto oldIt = movesv.begin(); oldIt != movesv.end();)
    {
        Board newBoard;

        Evaluate e = Evaluate(board, newBoard, *oldIt, depth);
        MoveGen m = MoveGen(newBoard, NO_DEBUG, depth + 1);

        int ok = 1;

        for (auto newIt = m.movesv.begin(); newIt != m.movesv.end(); newIt++)
            if ((newBoard.getPieceType(newIt->to) & 0x7f) == PIECE_KING)
                ok = 0;

        if ((board.getPieceType(oldIt->to) & 0x7f) == PIECE_KING)
            ok = 0;

        if (ok)
            oldIt++;
        else
            oldIt = movesv.erase(oldIt);
    }

//    for (int i = 0; i < newMoveNum; i++)
//        moves[i] = newMoves[i];

//    moveNum = newMoveNum;
}

MoveGen::MoveGen(Board& board, int flags, int depth) : board(board)
{
    this->board = board;
    this->debug = (flags & DEBUG) != 0;
    this->flags = flags;
    this->depth = depth;

    Knight kn = Knight();
    King ki = King();
    Bishop bi = Bishop();
    Rook ro = Rook();
    Queen qu = Queen();
    Pawn pa = Pawn();

//    printf("------------moveGen(next = %d, flags = %d), board = \n", board.nextPlayer, flags);
//    board.print();

    for (position = 21; position < 99; position++)
    {
        if (board.getPieceType(position) == OUTSIDE_OF_BOARD || board.getPieceType(position) == EMPTY_POSITION)
            continue;

        piece = board.getPieceType(position) & 0x7f;
        color = (board.getPieceType(position) & 0x80) != 0;

        if (color != board.nextPlayer)
            continue;

        if (debug && piece != EMPTY_POSITION && piece != OUTSIDE_OF_BOARD)
            printf("MoveGen piece %d at %d\n", piece, position);

//        board.table[position].moveGen(this);

        switch(piece)
        {
            case PIECE_PAWN:
                pa.moveGen(this);
//                board.table[position].moveGen(this);
                break;

            case PIECE_KNIGHT:
                kn.moveGen(this);
//                board.table[position].moveGen(this);
                break;
            case PIECE_BISHOP:  bi.moveGen(this); break;
            case PIECE_ROOK:    ro.moveGen(this); break;
            case PIECE_QUEEN:   qu.moveGen(this); break;
            case PIECE_KING:    ki.moveGen(this); break;
        }

    }

//    for (auto it = movesv.begin(); it != movesv.end(); it++)
//        moves[moveNum++] = *it;

    if ((flags & CHECK_VALIDITY) != 0)
        checkValidity();
}
