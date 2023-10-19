#ifndef PIECE_H
#define PIECE_H

#include <vector>
#include "../ai/move.h"

class Board;
class MoveGen;

const int moveBishop[] = {-11, -9, 9, 11};
const int moveRook[] = {-10, -1, 1, 10};

class Piece
{
    protected:
        int type;

    public:
        Piece() : type(0) {};
        Piece(int t);
        int getType();
        void moveMultipleIn4Directions(MoveGen *movegen, const int *directions);
        int movePiece(MoveGen *movegen, int relative);
        void setBlack();

        virtual void moveGen(MoveGen *movegen) { };
        virtual void eval(Board& inBoard, Board& outBoard, Move move, int depth) { };
        virtual int getClass() { return 0; };
};

#include "king.h"
#include "queen.h"
#include "bishop.h"
#include "rook.h"
#include "pawn.h"
#include "knight.h"

#endif // PIECE_H
