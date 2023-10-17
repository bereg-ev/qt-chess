
#include <cassert>

#include "../ai/evaluate.h"
#include "pawn.h"
#include "../ai/movegen.h"

const int pawnPromotions[] = {PIECE_KNIGHT, PIECE_BISHOP, PIECE_ROOK, PIECE_QUEEN};

Pawn::Pawn()
{
    type = PIECE_PAWN;
}

void Pawn::pawnMovePiece(MoveGen *m, int relative)
{
    int to = m->position + relative;

    if (to / 10 == pawnFinalLine[m->color])
    {
        for (int i = 0; i < 4; i++)
        {
            movePiece(m, relative);
            m->movesv.back().flags |= CHESS_FLAG_PROMOTION;
            m->movesv.back().promotion = pawnPromotions[i];
        }
    }
    else
        movePiece(m, relative);
}

void Pawn::moveGen(MoveGen *m)
{
    if (m->debug)
        printf("movePawn at %d\n", m->position);

    if (m->board.table[m->position + moveOneForward[m->color]] == EMPTY_POSITION)
    {
        pawnMovePiece(m, moveOneForward[m->color]);

        if (m->position / 10 == startLine[m->color] && m->board.table[m->position + moveTwoForward[m->color]] == EMPTY_POSITION)
            pawnMovePiece(m, moveTwoForward[m->color]);
    }

    if (m->board.table[m->position + hitLeft[m->color]] != EMPTY_POSITION && (m->board.table[m->position + hitLeft[m->color]] >> 7) != m->color)
        pawnMovePiece(m, hitLeft[m->color]);

    if (m->board.table[m->position + hitRight[m->color]] != EMPTY_POSITION && (m->board.table[m->position + hitRight[m->color]] >> 7) != m->color)
        pawnMovePiece(m, hitRight[m->color]);

    if (m->position + hitLeft[m->color] == m->board.enPassantTargetPosition)
        pawnMovePiece(m, hitLeft[m->color]);
    else if (m->position + hitRight[m->color] == m->board.enPassantTargetPosition)
        pawnMovePiece(m, hitRight[m->color]);

};

void Pawn::eval(Board& inBoard, Board& outBoard, Move move, int depth)
{
    if ((move.flags & CHESS_FLAG_PROMOTION) != 0)
    {
        assert(move.promotion > 0 && move.promotion < 7);
        outBoard.table[move.to] = move.promotion + (outBoard.nextPlayer ? 0x80 : 0);
        outBoard.pieceValue[outBoard.nextPlayer] += (piecesToValues[move.promotion] - VAL_PAWN);

        if (depth == 0)
            outBoard.posValue[outBoard.nextPlayer] += POS_VAL_PROMOTION;
    }
    else
    {
        if (move.from - move.to == 20 || move.from - move.to == -20)
            outBoard.enPassantTargetPosition = (move.from + move.to) / 2;

        outBoard.posValue[outBoard.nextPlayer] += 4;        // go to promotion !!!
    }
}

