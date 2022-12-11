#ifndef PRINCIPLEVARIATION_H
#define PRINCIPLEVARIATION_H

#include "config.h"
#include "move.h"

class PrincipleVariation
{
    private:
        Move path[MAX_DEPTH];
        int val[MAX_DEPTH][MAX_DEPTH];
        int bestVal[MAX_DEPTH];
        int maxDepth;
        int nextPlayerIsWhite;

    public:
        Move moves[MAX_DEPTH][MAX_DEPTH];
        int isUtilized[MAX_DEPTH][MAX_DEPTH];

        PrincipleVariation();
        void init(int depth, int nextPlayerIsWhite);
        void initDeeperLevel(int depth);
        void addPath(int depth, Move m);
        int checkIfBestMove(int depth, Move bestMove, int val);
        void print();


};

#endif // PRINCIPLEVARIATION_H
