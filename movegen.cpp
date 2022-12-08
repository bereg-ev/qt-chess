#include "movegen.h"
#include "evaluate.h"

void MoveGen::movePawn()
{
    const int moveOneForward[] = {-10, 10};
    const int moveTwoForward[] = {-20, 20};
    const int hitLeft[] = {-11, 11};
    const int hitRight[] = {-9, 9};
    const int startLine[] = {8, 3};

    if (debug)
        printf("movePawn at %d\n", position);

    if (board.table[position + moveOneForward[color]] == EMPTY_POSITION)
    {
        movePiece(moveOneForward[color]);

        if (position / 10 == startLine[color] && board.table[position + moveTwoForward[color]] == EMPTY_POSITION)
            movePiece(moveTwoForward[color]);
    }

    if (board.table[position + hitLeft[color]] != EMPTY_POSITION && (board.table[position + hitLeft[color]] >> 7) != color)
        movePiece(hitLeft[color]);

    if (board.table[position + hitRight[color]] != EMPTY_POSITION && (board.table[position + hitRight[color]] >> 7) != color)
        movePiece(hitRight[color]);

    if (position + hitLeft[color] == board.enPassantTargetPosition)
        movePiece(hitLeft[color]);
    else if (position + hitRight[color] == board.enPassantTargetPosition)
        movePiece(hitRight[color]);
}

void MoveGen::moveKnight()
{
    const int moveKnight[] = {-21, -19, -12, -8, 8, 12, 19, 21};

    for (int i = 0; i < sizeof(moveKnight) / sizeof(int); i++)
        movePiece(moveKnight[i]);
}

int MoveGen::checkIfKingIsHitable(int pos)
{
    Board b = board;

//   b.table[95 - board.nextPlayer * 70] = 0;        // remove the existing king so we can have only 1 king if we add one
    b.table[pos] = PIECE_KING + (board.nextPlayer ? 0x80 : 0);
    b.nextPlayer = 1 - b.nextPlayer;
    MoveGen moves = MoveGen(b, NO_CASTLE_CHECK, 0);

    for (int i = 0; i < moves.moveNum; i++)
        if (moves.moves[i].to == pos)
            return 1;

    return 0;
}

void MoveGen::moveKing()
{
    const int moveKing[] = {-11, -10, -9, -1, 1, 9, 10, 11};
    const int shortCastle[] = {95, 96, 97, 25, 26, 27};
    const int longCastle[] = {95, 94, 93, 92, 25, 24, 23, 22};
    int hitable;

//    printf("moveKing, castleCheck = %d\n", ((flags & NO_CASTLE_CHECK) != 0));

    for (int i = 0; i < sizeof(moveKing) / sizeof(int); i++)
        movePiece(moveKing[i]);

    if ((board.castlingProhibited[board.nextPlayer] & CASTLING_SHORT) == 0)
        if (board.table[shortCastle[3 * board.nextPlayer + 1]] == EMPTY_POSITION && board.table[shortCastle[3 * board.nextPlayer + 2]] == EMPTY_POSITION)
        {
            if ((flags & NO_CASTLE_CHECK) != 0)
                hitable = 0;
            else
            {
                hitable = checkIfKingIsHitable(shortCastle[3 * board.nextPlayer]);
                hitable += checkIfKingIsHitable(shortCastle[3 * board.nextPlayer + 1]);
                hitable += checkIfKingIsHitable(shortCastle[3 * board.nextPlayer + 2]);
            }

            if (hitable == 0)
                movePiece(2);
        }

    if ((board.castlingProhibited[board.nextPlayer] & CASTLING_LONG) == 0)
        if (board.table[longCastle[4 * board.nextPlayer + 1]] == EMPTY_POSITION && board.table[longCastle[4 * board.nextPlayer + 2]] == EMPTY_POSITION && board.table[longCastle[4 * board.nextPlayer + 3]] == EMPTY_POSITION)
        {
            if ((flags & NO_CASTLE_CHECK) != 0)
                hitable = 0;
            else
            {
                hitable = checkIfKingIsHitable(longCastle[4 * board.nextPlayer]);
                hitable += checkIfKingIsHitable(longCastle[4 * board.nextPlayer + 1]);
                hitable += checkIfKingIsHitable(longCastle[4 * board.nextPlayer + 2]);
                hitable += checkIfKingIsHitable(longCastle[4 * board.nextPlayer + 3]);
            }

            if (hitable == 0)
                movePiece(-2);
        }
}

int MoveGen::movePiece(int relativePos)
{
    const int pawnFinalLine[] = {2, 9};
    const int pawnPromotions[] = {PIECE_KNIGHT, PIECE_BISHOP, PIECE_ROOK, PIECE_QUEEN};

    int to = position + relativePos;

    if (board.table[to] == OUTSIDE_OF_BOARD)
        return 0;

    if (board.table[to] != EMPTY_POSITION && (board.table[to] >> 7) == (board.table[position] >> 7))             // we can't hit our own piece
        return 0;

    moves[moveNum].from = position;
    moves[moveNum].to = to;
    moves[moveNum].flags = (board.table[to] != EMPTY_POSITION) ? CHESS_FLAG_HIT : 0;
    moves[moveNum].promotion = 0;
    moveNum++;

    if (debug)
        printf("movePiece from %d to %d, flags = %d\n", position, to, moves[moveNum - 1].flags);

    switch (piece)
    {
        case PIECE_PAWN:
            if (to / 10 == pawnFinalLine[color])
            {
                moveNum--;

                for (int i = 1; i < 4; i++)
                {
                    moves[moveNum + i].from = moves[moveNum].from;
                    moves[moveNum + i].to = moves[moveNum].to;
                    moves[moveNum + i].flags = moves[moveNum].flags;
                }

                for (int i = 0; i < 4; i++)
                {
                    moves[moveNum + i].promotion = pawnPromotions[i];
                    moves[moveNum + i].flags |= CHESS_FLAG_PROMOTION;
                }

                moveNum += 4;
            }

            break;
    }

    return 1;
}

void MoveGen::moveMultipleIn4Directions(const int *directions)
{
    for (int i = 0; i < 4; i++)
    {
        for (int k = 1; k < 8; k++)
        {
            if (movePiece(k * directions[i]) == 0)
                k = 8;
            else if ((moves[moveNum - 1].flags & CHESS_FLAG_HIT) != 0)
                k = 8;
        }
    }
}

int MoveGen::getMoveId(Move move)
{
    for (int i = 0; i < moveNum; i++)
        if (move == moves[i])
            return i;

    return -1;
}

int MoveGen::checkIfMoveIsValid(Move move)
{
    if (debug)
    {
        printf("ORIG: ");
        move.print();
    }

    for (int i = 0; i < moveNum; i++)
    {
        if (debug)
        {
            printf("  ? ");
            moves[i].print();
        }

        if (move == moves[i])
            return 1;
    }

    return 0;
}

void MoveGen::checkValidity()
{
    // ha sakkban van, el kell haritania
    // sakkba ne lephessen
    // kiralyt ne uthessen

    Move newMoves[250];
    int newMoveNum = 0;

    for (int i = 0; i < moveNum; i++)
    {
        Board newBoard;

        Evaluate e = Evaluate(board, newBoard, moves[i], depth);
        MoveGen m = MoveGen(newBoard, NO_DEBUG, depth - 1);

        int ok = 1;

        for (int j = 0; j < m.moveNum; j++)
            if ((newBoard.table[m.moves[j].to] & 0x7f) == PIECE_KING)
                ok = 0;

        if ((board.table[moves[i].to] & 0x7f) == PIECE_KING)
            ok = 0;

        if (ok)
            newMoves[newMoveNum++] = moves[i];
    }

    for (int i = 0; i < newMoveNum; i++)
        moves[i] = newMoves[i];

    moveNum = newMoveNum;
}

MoveGen::MoveGen(Board& board, int flags, int depth) : board(board)
{
    const int moveBishop[] = {-11, -9, 9, 11};
    const int moveRook[] = {-10, -1, 1, 10};

    this->board = board;
    this->debug = (flags & DEBUG) != 0;
    this->flags = flags;
    this->depth = depth;
    moveNum = 0;

//    printf("------------moveGen(next = %d, flags = %d), board = \n", board.nextPlayer, flags);
//    board.print();

    for (position = 21; position < 99; position++)
    {
        if (board.table[position] == OUTSIDE_OF_BOARD || board.table[position] == EMPTY_POSITION)
            continue;

        piece = board.table[position] & 0x7f;
        color = (board.table[position] & 0x80) != 0;

        if (color != board.nextPlayer)
            continue;

        if (debug && piece != EMPTY_POSITION && piece != OUTSIDE_OF_BOARD)
            printf("MoveGen piece %d at %d\n", piece, position);

        switch(piece)
        {
            case PIECE_PAWN:
                movePawn(); break;

            case PIECE_KNIGHT:
                moveKnight(); break;

            case PIECE_BISHOP:
                moveMultipleIn4Directions(&moveBishop[0]); break;

            case PIECE_ROOK:
                moveMultipleIn4Directions(&moveRook[0]); break;

            case PIECE_QUEEN:
                moveMultipleIn4Directions(&moveBishop[0]);
                moveMultipleIn4Directions(&moveRook[0]);
                break;

            case PIECE_KING:
                moveKing(); break;
        }
    }

    if ((flags & CHECK_VALIDITY) != 0)
        checkValidity();
}
