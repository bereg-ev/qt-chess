#ifndef MOVEGEN_H
#define MOVEGEN_H

#include "board.h"
#include "move.h"

#define NO_DEBUG            0
#define DEBUG               1
#define NO_CASTLE_CHECK     2
#define CHECK_VALIDITY      4
#define ONLY_HITS           8

class MoveGen
{

    private:
        int piece;
        int depth;


        void movePawn();
        void moveKnight();
        void moveKing();

        void moveMultipleIn4Directions(const int *directions);
        int movePiece(int relativePos);
        int checkIfKingIsHitable(int pos);

        void checkValidity();

    public:
//        int moveNum;
        int position;
//        Move moves[250];
        std::vector<Move> movesv;
        Board& board;
        int flags;
        int debug;
        int color;

        MoveGen(Board& board, int flags, int depth);
        int checkIfMoveIsValid(Move move);
        int getMoveId(Move move);
};

#endif // MOVEGEN_H
