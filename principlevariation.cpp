#include "principlevariation.h"
#include "board.h"

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

        bestVal[i] = ((i % 2) == nextPlayerIsWhite) ? VAL_MIN : VAL_MAX;
//        printf("bestVal[%d] = %d\n", i, bestVal[i]);
    }
}

void PrincipleVariation::initDeeperLevel(int depth)
{
    if (depth != 1)
        isUtilized[depth - 2][depth - 2] = 0;
}

int PrincipleVariation::checkIfBestMove(int depth, Move bestMove, int val)
{
    int ret = 0;

    if (((depth % 2) == nextPlayerIsWhite && val < bestVal[depth - 1]) ||
            ((depth % 2) != nextPlayerIsWhite && val > bestVal[depth - 1]))
    {
        ret = 1;
/*
        printf("*** better: depth=%d, val=%d, move=", depth, val);
        bestMove.println();
*/
        moves[depth - 1][depth - 1] = bestMove;
        bestVal[depth - 1] = val;
        isUtilized[depth - 1][depth - 1] = 1;

        if (depth != 1)
        {
            for (int i = 1; i < maxDepth; i++)
            {
                moves[depth - 1 - i][depth - 1] = moves[depth - 1 - i][depth - 2];
                isUtilized[depth - 1 - i][depth - 1] = 1;
            }
        }
/*
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
*/
    }

    return ret;
}

void PrincipleVariation::print()
{
    printf("Principle Variation = ");

    for (int i = 0; i < maxDepth; i++)
    {
        if (isUtilized[i][maxDepth - 1] != 0)
        {
            moves[i][maxDepth - 1].print();

            if (i != maxDepth - 1)
                printf(" ,");
        }
        else
            printf("XXX ");
    }

    printf("\n");
}

PrincipleVariation::PrincipleVariation()
{
    init(0, 0);
}
