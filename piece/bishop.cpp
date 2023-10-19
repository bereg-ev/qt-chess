#include "bishop.h"
#include "../ai/movegen.h"
#include "../ai/board.h"

Bishop::Bishop()
{
    type = PIECE_BISHOP;
}

void Bishop::moveGen(MoveGen *m)
{
    moveMultipleIn4Directions(m, moveBishop);
};

int Bishop::getClass()
{
    return PIECE_BISHOP;
}
