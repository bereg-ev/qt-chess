#include "ai.h"

#include "movegen.h"
#include "evaluate.h"
#include "config.h"

#include <QDateTime>

int Ai::evaluateRepeatedTablesAsPossibleDrawEndResults(Board b)
{
    for (auto game = boards.begin(); game != boards.end(); game++)
        if (game->board == b)
            return 1;

    return 0;
}

int Ai::checkIfMate(Board b)
{
    Board fake = b;
    fake.nextPlayer ^= 1;       // let's move again and check if we can hit the King

    MoveGen m = MoveGen(fake, NO_DEBUG, 0);

    for (int i = 0; i < m.moveNum; i++)
        if ((fake.table[m.moves[i].to] & 0x7f) == PIECE_KING)
            return 1;

    return 0;
}

int Ai::minimax(Board b, int depth, int maxDepth, int alpha, int beta, int flags)
{
    int val[250];
    int ret;
    int alphaNext = alpha;
    int betaNext = beta;
    int isTop = (flags & MINIMAX_FLAG_TOP) != 0;

    Move bestMove, tmp;
    int bestVal;

    if (aiDebug)
    {
        printf("----- MINIMAX depth=%d, alpha=%d, beta=%d -------\n", depth, alpha, beta);
        b.print();
    }

    MoveGen m(b, isTop ? CHECK_VALIDITY : NO_DEBUG, depth);

    if (aiSortMoves)
    {
        int moveFromBeginning = 0;

        if (aiIterations && pvPrev.isUtilized[0][depth] && depth == 0)
        {
            int id = m.getMoveId(pvPrev.moves[0][depth]);

            if (id > 0 && m.moveNum > 1 && id < m.moveNum)
            {
//                printf("AAA ");
//                m.moves[id].println();

                tmp = m.moves[moveFromBeginning];
                m.moves[moveFromBeginning] = m.moves[id];
                m.moves[id] = tmp;
                moveFromBeginning++;
            }
        }

        for (int i = moveFromBeginning + 1; i < m.moveNum - 1; i++)
        {
            if ((m.moves[i].flags & (CHESS_FLAG_PROMOTION)) != 0)
            {
                tmp = m.moves[moveFromBeginning];
                m.moves[moveFromBeginning] = m.moves[i];
                m.moves[i] = tmp;
                moveFromBeginning++;
            }
        }

        for (int i = moveFromBeginning + 1; i < m.moveNum - 1; i++)
        {
            if ((m.moves[i].flags & (CHESS_FLAG_HIT)) != 0)
            {
                tmp = m.moves[moveFromBeginning];
                m.moves[moveFromBeginning] = m.moves[i];
                m.moves[i] = tmp;
                moveFromBeginning++;
            }
        }

    }

    int actualMoves = m.moveNum;

    pv.initDeeperLevel(maxDepth);
    int nextFlag = 0;

    for (int i = 0; i < m.moveNum; i++)
    {
        Board outBoard;
        Evaluate e(b, outBoard, m.moves[i], depth);
        moveCnt++;

        if (aiDebug)
        {
            printf("-> MOVE: ");
            m.moves[i].println();
        }

        pv.addPath(depth, m.moves[i]);
/*
        if (depth == 0 && m.moves[i] == Move("h6h7"))
        {
            printf("!!! h6h7\n");
            nextFlag = MINIMAX_FLAG_DBG;
        }
        else if ((flags & MINIMAX_FLAG_DBG) != 0 && depth == 1 && m.moves[i] == Move("a8b7"))
        {
            printf("!!! a8b7\n");
            nextFlag = MINIMAX_FLAG_DBG;
        }
        else if ((flags & MINIMAX_FLAG_DBG) != 0 && depth == 2 && m.moves[i] == Move("h7h82"))
        {
            printf("!!! h7h82\n");
            nextFlag = MINIMAX_FLAG_DBG;
        }
*/
// ??? tmpMoves[depth - 1] = m.moves[i];

//printf("try: depth=%d, move=", depth);
//moves[i].println();

        if (outBoard.val == VAL_MIN)                // don't continue without a King
            return VAL_MIN + depth;
        else if (outBoard.val == VAL_MAX)
            return VAL_MAX - depth;

        if (isTop && aiRepeatedTables && evaluateRepeatedTablesAsPossibleDrawEndResults(outBoard))
            outBoard.val = val[i] = 0;
        else
        {
            int isMateOrDraw = 0;

            if (isTop)
            {
                MoveGen mIfDraw = MoveGen(outBoard, CHECK_VALIDITY, depth);

                if (mIfDraw.moveNum == 0)
                {
                    isMateOrDraw = 1;
                    val[i] = checkIfMate(outBoard) ? (b.nextPlayer ? VAL_MIN : VAL_MAX) : 0;
                }
            }

            if (isMateOrDraw == 0)
                val[i] = (depth >= maxDepth - 1) ? outBoard.val : minimax(outBoard, depth + 1, maxDepth, alphaNext, betaNext, nextFlag);
        }

        if (aiAlphaBeta)
            if ((val[i] < alpha && b.nextPlayer == 1) || (val[i] > beta && b.nextPlayer == 0))                    // cutoff
                return val[i];

        if (outBoard.nextPlayer == 0 && val[i] < betaNext)
            betaNext = val[i];

        if (outBoard.nextPlayer == 1 && val[i] > alphaNext)
            alphaNext = val[i];
    }

    if (b.nextPlayer == 0)      // WHITE moves -> maximize
    {
        int max = VAL_MIN;

        for (int i = 0; i < m.moveNum; i++)
        {
            if (val[i] >= max)
            {
               max = val[i];
               bestMove = m.moves[i];
               bestVal = max;
            }
        }

        if (pv.checkIfBestMove(depth, bestMove, max))
        {
//            for (int i = 1; i < 3; i++)
//                tmpMoves[i].print();
        }

        ret = max;
    }
    else                        // BLACK moves -> minimize
    {
        int min = VAL_MAX;

        for (int i = 0; i < m.moveNum; i++)
        {
            if (val[i] <= min)
            {
               min = val[i];
               bestMove = m.moves[i];
               bestVal = min;
            }
        }

        if (pv.checkIfBestMove(depth, bestMove, min))
        {
//            for (int i = 1; i < 3; i++)
//                tmpMoves[i].print();
        }

        ret = min;
    }

    if (isTop)
    {
        for (int i = 0; i < m.moveNum; i++)
        {
            aiMoves[i] = m.moves[i];
            aiVal[i] = val[i];
        }

        aiMoveNum = m.moveNum;
        aiBestMove = bestMove;
        aiBestVal = bestVal;
    }

    if (aiDebug)
        bestMove.println();

    if ((flags & MINIMAX_FLAG_DBG) != 0)
    {
        printf("---------------- depth = %d\n", depth);
        b.print();

        for (int i = 0; i < m.moveNum; i++)
        {
            printf("move %2d: val = %5d  ", i + 1, val[i]);
            m.moves[i].println();
        }

        printf("BEST MOVE:  ");
        bestMove.print();
        printf(", val = %d\n", ret);
    }

    if (ret <= VAL_MIN + 30 || ret >= VAL_MAX - 30)
    {
        MoveGen mIfDraw = MoveGen(b, CHECK_VALIDITY, depth);

        if (mIfDraw.moveNum == 0)
        {
            if (!checkIfMate(b))
                return 0;
        }
    }

    return ret;
}

void Ai::print()
{
    board.print();

    for (int i = 0; i < aiMoveNum; i++)
    {
        printf("move %2d: val = %5d  ", i + 1, aiVal[i]);
        aiMoves[i].println();
    }

    printf("BEST MOVE:  ");
    aiBestMove.print();
    printf(" val = %d, moveNum = %d, time = %llu msec\n", aiBestVal, moveCnt, timeOfFinish - timeOfStart);
}

int Ai::getMoveValue(Move m)
{
    for (int i = 0; i < aiMoveNum; i++)
        if (m == aiMoves[i])
            return aiVal[i];

    return 0;
}

void Ai::ainit(Board& board, int depth, int flags)
{
    timeOfStart = QDateTime::currentMSecsSinceEpoch();

    this->board = board;
    this->aiDepth = depth;
    aiDebug = (flags & AI_FLAG_DEBUG) != 0;
    aiAlphaBeta = (flags & AI_FLAG_ALPHA_BETA) != 0;
    aiSortMoves = (flags & AI_FLAG_SORT_MOVES) != 0;
    aiIterations = (flags & AI_FLAG_ITERATIONS) != 0;
    aiRepeatedTables = (flags & AI_FLAG_AVOID_REPEATED_TABLES) != 0;

    moveCnt = 0;
    pvPrev.init(depth, 0);

    for (int iteration = (aiIterations ? 1 : depth); iteration <= depth; iteration++)
    {
//        timeOfStart = QDateTime::currentMSecsSinceEpoch();

        pv.init(iteration, board.nextPlayer);

        Board b = board;
        result = minimax(b, 0, iteration, VAL_MIN, VAL_MAX, MINIMAX_FLAG_TOP);
        pvPrev = pv;
        iterationResults[iteration] = aiBestMove;
        iterationEnabled[iteration] = 1;
/*
        timeOfFinish = QDateTime::currentMSecsSinceEpoch();

        if (aiMoveNum != 0)
        {
            printf("BEST MOVE:  ");
            aiBestMove.print();
            printf(", val=%d, %d moves in %llu msec\n", aiBestVal, moveCnt, timeOfFinish - timeOfStart);
            pv.print();
        }
*/
    }

    timeOfFinish = QDateTime::currentMSecsSinceEpoch();

    if (aiMoveNum != 0)
    {
        printf("BEST MOVE:  ");
        aiBestMove.print();
        printf(", val=%d, %d moves in %llu msec\n", aiBestVal, moveCnt, timeOfFinish - timeOfStart);
        pv.print();
    }

    fflush(0);
}

Ai::Ai(Board& board, int depth, int flags) : board(board)
{
    ainit(board, depth, flags);
}

Ai::Ai(Board& board, int depth, int flags, std::list<Game>& boards) : board(board)
{
    this->boards = boards;
    ainit(board, depth, flags | AI_FLAG_AVOID_REPEATED_TABLES);
}


