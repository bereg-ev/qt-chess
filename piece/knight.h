#ifndef PIECEKNIGHT_H
#define PIECEKNIGHT_H

#include <vector>

#include "piece.h"

class Board;
class MoveGen;

class Knight: public Piece
{
    public:
        Knight();
        void moveGen(MoveGen *movegen);
};

#endif // PIECEKNIGHT_H
