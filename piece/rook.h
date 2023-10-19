#ifndef PIECEROOK_H
#define PIECEROOK_H

#include <vector>

#include "piece.h"

class Board;
class MoveGen;

class Rook: public Piece
{
    public:
    Rook();
        void moveGen(MoveGen *movegen);
        void eval(Board& inBoard, Board& outBoard, Move move, int depth);
        int getClass();
};

#endif // PIECEROOK_H
