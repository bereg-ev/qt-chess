#ifndef PAWN_H
#define PAWN_H

#include <vector>

#include "piece.h"

class Board;
class MoveGen;

const int moveOneForward[] = {-10, 10};
const int moveTwoForward[] = {-20, 20};
const int hitLeft[] = {-11, 11};
const int hitRight[] = {-9, 9};
const int startLine[] = {8, 3};
const int pawnFinalLine[] = {2, 9};

class Pawn: public Piece
{
    public:
        Pawn();
        void pawnMovePiece(MoveGen *m, int relative);

        void moveGen(MoveGen *m);
        void eval(Board& inBoard, Board& outBoard, Move move, int depth);
        int getClass();
};

#endif // PAWN_H
