
#include "knight.h"
#include "../ai/movegen.h"
#include "../ai/board.h"

Knight::Knight()
{
    type = PIECE_KNIGHT;
}

void Knight::moveGen(MoveGen *m)
{
    const int moveKnight[] = {-21, -19, -12, -8, 8, 12, 19, 21};

    for (int i = 0; i < sizeof(moveKnight) / sizeof(int); i++)
        movePiece(m, moveKnight[i]);
};
