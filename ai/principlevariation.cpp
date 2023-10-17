#include "principlevariation.h"
#include "board.h"

//#define DBG

void PrincipleVariation::init(int depth, int nextPlayerIsWhite)
{
    if (depth == 0)
        return;

    maxDepth = depth;
    this->nextPlayerIsWhite = nextPlayerIsWhite;

    for (int i = 0; i < MAX_DEPTH; i++)
    {
        for (int j = 0; j < MAX_DEPTH; j++)
            val[i][j] = isUtilized[i][j] = 0;

        bestVal[i] = ((i % 2) != nextPlayerIsWhite) ? VAL_MIN : VAL_MAX;
#ifdef DBG
//        printf("bestVal[%d] = %d\n", i, bestVal[i]);
#endif
    }
}

void PrincipleVariation::initDeeperLevel(int depth)
{
    if (depth < maxDepth - 1)
        isUtilized[depth + 1][depth + 1] = 0;
}

int PrincipleVariation::checkIfBestMove(int depth, Move bestMove, int val)
{
    int ret = 0;

    moves[depth][depth] = bestMove;
//    bestVal[depth] = val;
    isUtilized[depth][depth] = 1;

    if (((depth % 2) != nextPlayerIsWhite && val > bestVal[depth]) ||
            ((depth % 2) == nextPlayerIsWhite && val < bestVal[depth]))
    {
        bestVal[depth] = val;
        ret = 1;

#ifdef DBG
        printf("*** better: depth=%d, val=%d, move=", depth, val);
        bestMove.println();
        printf("*** path: ");

        for (int i = 0; i <= depth; i++)
        {
            path[i].print();

            if (i != depth)
                printf(", ");
        }

        printf("\n");
#endif

        if (depth != maxDepth - 1)
        {
            for (int i = depth + 1; i < maxDepth; i++)
            {
                moves[depth][i] = moves[depth + 1][i];
                isUtilized[depth][i] = 1;
            }
        }

#ifdef DBG
        for (int i = 0; i < maxDepth; i++)
        {
            printf("+ val[%d] = ", bestVal[i]);

            for (int j = 0; j < maxDepth; j++)
            {
                if (isUtilized[i][j])
                {
                    moves[i][j].print();
                    printf(" ");
                }
                else
                    printf(" XXX ");
            }

            printf("\n");
        }
#endif

    }

    return ret;
}

void PrincipleVariation::print()
{
    printf("Principle Variation = ");

    for (int i = 0; i < maxDepth; i++)
    {
        if (isUtilized[0][i] != 0)
        {
            moves[0][i].print();

            if (i != maxDepth - 1)
                printf(", ");
        }
        else
            printf("XXX ");
    }

    printf("\n");
}

void PrincipleVariation::addPath(int depth, Move m)
{
    path[depth] = m;
}

PrincipleVariation::PrincipleVariation()
{
    init(0, 0);
}
