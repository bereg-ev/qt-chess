#ifndef PAWN_H
#define PAWN_H

#include "piece.h"

class Pawn: public Piece
{
    public:
        Pawn();
        bool isEpmtyPlace();
        bool isOutOfTable();
};

#endif // PAWN_H
