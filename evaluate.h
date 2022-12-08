#ifndef EVALUATE_H
#define EVALUATE_H

#include "board.h"

const int posValTableCenter[120] = {
    0,   0, 0, 0, 0, 0, 0, 0, 0,   0,
    0,   0, 0, 0, 0, 0, 0, 0, 0,   0,
    0,   0, 0, 0, 0, 0, 0, 0, 0,   0,
    0,   0, 0, 0, 0, 0, 0, 0, 0,   0,
    0,   0, 0, 2, 2, 2, 2, 0, 0,   0,
    0,   0, 0, 2, 3, 3, 2, 0, 0,   0,
    0,   0, 0, 2, 3, 3, 2, 0, 0,   0,
    0,   0, 0, 2, 2, 2, 2, 0, 0,   0,
    0,   0, 0, 0, 0, 0, 0, 0, 0,   0,
    0,   0, 0, 0, 0, 0, 0, 0, 0,   0,
};

#define POS_VAL_PROMOTION       (VAL_PAWN / 2)

class Evaluate
{
    public:
        Evaluate(Board& inBoard, Board& outBoard, Move move, int depth);
};

#endif // EVALUATE_H
