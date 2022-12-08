#ifndef MOVEGEN_H
#define MOVEGEN_H

#include "board.h"
#include "move.h"

#define NO_DEBUG            0
#define DEBUG               1
#define NO_CASTLE_CHECK     2
#define CHECK_VALIDITY      4

class MoveGen
{
    private:
        int piece;
        int position;
        int color;
        int flags;
        int depth;
        Board& board;

        int debug;

        void movePawn();
        void moveKnight();
        void moveKing();

        void moveMultipleIn4Directions(const int *directions);
        int movePiece(int relativePos);
        int checkIfKingIsHitable(int pos);

        void checkValidity();

    public:
        int moveNum;
        Move moves[250];

        MoveGen(Board& board, int flags, int depth);
        int checkIfMoveIsValid(Move move);
        int getMoveId(Move move);
};

#endif // MOVEGEN_H
