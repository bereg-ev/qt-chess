#ifndef PIECEBISHOP_H
#define PIECEBISHOP_H

#include <vector>

#include "piece.h"

class Board;
class MoveGen;

class Bishop: public Piece
{
    public:
        Bishop();
        void moveGen(MoveGen *movegen);
        int getClass();
};

#endif // PIECEBISHOP_H
