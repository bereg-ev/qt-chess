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

        void moveGen(MoveGen *m);
        void eval(Board& inBoard, Board& outBoard, Move move, int depth);
        int getClass();
};

#endif // PIECEKING_H
