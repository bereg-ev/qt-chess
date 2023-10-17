#include "queen.h"
#include "../ai/movegen.h"
#include "../ai/board.h"

Queen::Queen()
{
    type = PIECE_QUEEN;
}

void Queen::moveGen(MoveGen *m)
{
    moveMultipleIn4Directions(m, moveBishop);
    moveMultipleIn4Directions(m, moveRook);
};
