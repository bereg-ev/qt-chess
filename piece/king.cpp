
#include "../ai/board.h"
#include "../ai/movegen.h"

King::King()
{
    type = PIECE_KING;
}

int King::checkIfKingIsHitable(int pos, Board &board)
{
    Board b = board;

//   b.table[95 - board.nextPlayer * 70] = 0;        // remove the existing king so we can have only 1 king if we add one
    b.setPiece(pos, PIECE_KING + (board.nextPlayer ? 0x80 : 0));
    b.nextPlayer = 1 - b.nextPlayer;
    MoveGen moves = MoveGen(b, NO_CASTLE_CHECK, 0);

    for (auto it = moves.movesv.begin(); it != moves.movesv.end(); it++)
        if (it->to == pos)
            return 1;

    return 0;
}

void King::moveGen(MoveGen *m)
{
    const int moveKing[] = {-11, -10, -9, -1, 1, 9, 10, 11};
    const int shortCastle[] = {95, 96, 97, 25, 26, 27};
    const int longCastle[] = {95, 94, 93, 92, 25, 24, 23, 22};
    int hitable;

//    printf("moveKing, castleCheck = %d\n", ((flags & NO_CASTLE_CHECK) != 0));

    for (int i = 0; i < sizeof(moveKing) / sizeof(int); i++)
    {
//        if ((flags & NO_CASTLE_CHECK) == 0 && checkIfKingIsHitable(moveKing[i]) == 0)
            movePiece(m, moveKing[i]);
    }

    if ((m->board.castlingProhibited[m->board.nextPlayer] & CASTLING_SHORT) == 0)
        if (m->board.getPieceType(shortCastle[3 * m->board.nextPlayer + 1]) == EMPTY_POSITION && m->board.getPieceType(shortCastle[3 * m->board.nextPlayer + 2]) == EMPTY_POSITION)
        {
            if ((m->flags & NO_CASTLE_CHECK) != 0)
                hitable = 0;
            else
            {
                hitable = checkIfKingIsHitable(shortCastle[3 * m->board.nextPlayer], m->board);
                hitable += checkIfKingIsHitable(shortCastle[3 * m->board.nextPlayer + 1], m->board);
                hitable += checkIfKingIsHitable(shortCastle[3 * m->board.nextPlayer + 2], m->board);
            }

            if (hitable == 0)
                movePiece(m, 2);
        }

    if ((m->board.castlingProhibited[m->board.nextPlayer] & CASTLING_LONG) == 0)
        if (m->board.getPieceType(longCastle[4 * m->board.nextPlayer + 1]) == EMPTY_POSITION && m->board.getPieceType(longCastle[4 * m->board.nextPlayer + 2]) == EMPTY_POSITION && m->board.getPieceType(longCastle[4 * m->board.nextPlayer + 3]) == EMPTY_POSITION)
        {
            if ((m->flags & NO_CASTLE_CHECK) != 0)
                hitable = 0;
            else
            {
                hitable = checkIfKingIsHitable(longCastle[4 * m->board.nextPlayer], m->board);
                hitable += checkIfKingIsHitable(longCastle[4 * m->board.nextPlayer + 1], m->board);
                hitable += checkIfKingIsHitable(longCastle[4 * m->board.nextPlayer + 2], m->board);
                hitable += checkIfKingIsHitable(longCastle[4 * m->board.nextPlayer + 3], m->board);
            }

            if (hitable == 0)
                movePiece(m, -2);
        }
};

void King::eval(Board& inBoard, Board& outBoard, Move move, int depth)
{
    if (inBoard.nextPlayer == 0 && move.from == 95 && move.to == 97)
    {
       outBoard.setPiece(96, outBoard.getPieceType(98));
       outBoard.setPiece(98, 0);
    }
    else if (inBoard.nextPlayer == 0 && move.from == 95 && move.to == 93)
    {
       outBoard.setPiece(94, outBoard.getPieceType(91));
       outBoard.setPiece(91, 0);
    }
    else if (inBoard.nextPlayer == 1 && move.from == 25 && move.to == 27)
    {
       outBoard.setPiece(26, outBoard.getPieceType(28));
       outBoard.setPiece(28, 0);
    }
    else if (inBoard.nextPlayer == 1 && move.from == 25 && move.to == 23)
    {
       outBoard.setPiece(24, outBoard.getPieceType(21));
       outBoard.setPiece(21, 0);
    }

    outBoard.castlingProhibited[inBoard.nextPlayer] = CASTLING_SHORT | CASTLING_LONG;
}

int King::getClass()
{
    return PIECE_KING;
}

