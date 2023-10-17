#ifndef PIECEKING_H
#define PIECEKING_H

#include <vector>

#include "piece.h"

class Board;
class MoveGen;

class King: public Piece
{
    public:
        King();
        int checkIfKingIsHitable(int pos, Board &board);

        virtual void moveGen(MoveGen *m);
        virtual void eval(Board& inBoard, Board& outBoard, Move move, int depth);
};

#endif // PIECEKING_H
