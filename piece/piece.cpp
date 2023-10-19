
#include "piece.h"
#include "../ai/movegen.h"

Piece::Piece(int t)
{
    type = t;
}

int Piece::getType()
{
    return type;
}

int Piece::movePiece(MoveGen *m, int relative)
{
    int to = m->position + relative;

    if (m->board.getPieceType(to) == OUTSIDE_OF_BOARD)
        return 0;

    if (m->board.getPieceType(to) != EMPTY_POSITION && (m->board.getPieceType(to) >> 7) == (m->board.getPieceType(m->position) >> 7))
        return 0;       // we can't hit our own piece

    m->movesv.push_back(Move(m->position, to, (m->board.getPieceType(to) != EMPTY_POSITION) ? CHESS_FLAG_HIT : 0, 0));

    return 1;
}

void Piece::moveMultipleIn4Directions(MoveGen *m, const int *directions)
{
    for (int i = 0; i < 4; i++)
    {
        for (int k = 1; k < 8; k++)
        {
            if (movePiece(m, k * directions[i]) == 0)
                k = 8;
            else if ((m->movesv.back().flags & CHESS_FLAG_HIT) != 0)
                k = 8;
        }
    }
}

void Piece::setBlack()
{
    type |= 0x80;
}


