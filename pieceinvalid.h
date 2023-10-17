#ifndef PIECEINVALID_H
#define PIECEINVALID_H

#include "piece.h"

class PieceInvalid: public Piece
{
    public:
        PieceInvalid();
        bool isEpmtyPlace();
        bool isOutOfTable();
};

#endif // PIECEINVALID_H
