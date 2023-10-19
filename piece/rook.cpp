#include "rook.h"
#include "../ai/movegen.h"
#include "../ai/board.h"

Rook::Rook()
{
    type = PIECE_ROOK;
}

void Rook::moveGen(MoveGen *m)
{
    moveMultipleIn4Directions(m, moveRook);
};

void Rook::eval(Board& inBoard, Board& outBoard, Move move, int depth)
{
    if (inBoard.nextPlayer == 0 && move.from == 91)
        outBoard.castlingProhibited[0] |= CASTLING_LONG;
    else if (inBoard.nextPlayer == 0 && move.from == 98)
        outBoard.castlingProhibited[0] |= CASTLING_SHORT;
    else if (inBoard.nextPlayer == 1 && move.from == 21)
        outBoard.castlingProhibited[1] |= CASTLING_LONG;
    else if (inBoard.nextPlayer == 1 && move.from == 28)
        outBoard.castlingProhibited[1] |= CASTLING_SHORT;
}

int Rook::getClass()
{
    return PIECE_ROOK;
}

