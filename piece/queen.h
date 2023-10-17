#ifndef PIECEQUEEN_H
#define PIECEQUEEN_H

#include <vector>

#include "piece.h"

class Board;
class MoveGen;

class Queen: public Piece
{
    public:
    Queen();
        void moveGen(MoveGen *movegen);
};

#endif // PIECEQUEEN_H
