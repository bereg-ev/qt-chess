#ifndef AI_H
#define AI_H

#include <list>
#include "board.h"
#include "game.h"
#include "principlevariation.h"
#include "movegen.h"

#define AI_FLAG_NONE                        0
#define AI_FLAG_DEBUG                       1
#define AI_FLAG_ALPHA_BETA                  2
#define AI_FLAG_SORT_MOVES                  4
#define AI_FLAG_HASH                        8
#define AI_FLAG_POSITION_VAL                16
#define AI_FLAG_ITERATIONS                  32
#define AI_FLAG_AVOID_REPEATED_TABLES       64

#define MINIMAX_FLAG_TOP                    1
#define MINIMAX_FLAG_DBG                    2


#define AI_FLAG_ALL             (0xffff - AI_FLAG_DEBUG - AI_FLAG_AVOID_REPEATED_TABLES)

class Ai
{
    private:
        Board& board;
        int aiDepth;
        int aiDebug;
        int aiAlphaBeta;
        int aiSortMoves;
        int aiIterations;
        int aiRepeatedTables;

        std::list<Game> boards;

        int alpha;
        int beta;


        int moveCnt;

        unsigned long long int timeOfStart;
        unsigned long long int timeOfFinish;

        Move iterationResults[64];
        int iterationEnabled[64] = {0};
        PrincipleVariation pv, pvPrev;

        int minimax(Board b, int depth, int maxDepth, int alpha, int beta, int flags);
        void ainit(Board& board, int depth, int flags);
        int evaluateRepeatedTablesAsPossibleDrawEndResults(Board b);
        int checkIfMate(Board b);
        void aiDbg(Board b);
        void printMoves(MoveGen m, char *s);

        Move tmpMoves[MAX_DEPTH];

    public:
        Ai(Board& board, int depth, int flags);
        Ai(Board& board, int depth, int flags, std::list<Game> &boards);
        void print();
        int getMoveValue(Move m);
        void sortMoves();

        int result;
        int aiMoveNum;
        int aiVal[250];
        Move aiMoves[250];
        Move aiBestMove;
        int aiBestVal;
};

#endif // AI_H
