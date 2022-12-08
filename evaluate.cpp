
#include <cassert>
#include "evaluate.h"

#include "board.h"

Evaluate::Evaluate(Board& inBoard, Board& outBoard, Move move, int depth)
{
    const int piecesToValues[7] = {0, VAL_KING, VAL_QUEEN, VAL_ROOK, VAL_BISHOP, VAL_KNIGHT, VAL_PAWN};


    unsigned char coloredPiece = inBoard.table[move.from];
    int piece = coloredPiece & 0x7f;
    int isEnPassant = (piece == PIECE_PAWN && move.to == inBoard.enPassantTargetPosition);

    outBoard = inBoard;
    outBoard.enPassantTargetPosition = 0;
    char hitPiece = isEnPassant ? outBoard.table[inBoard.enPassantTargetPosition + ((coloredPiece & 0x80) == 0 ? 10 : -10)] : outBoard.table[move.to];

    if (hitPiece != EMPTY_POSITION)
    {
        assert((!isEnPassant && (outBoard.table[move.to] >> 7) != outBoard.nextPlayer) || isEnPassant);          // can't hit your own piece
        outBoard.pieceValue[outBoard.nextPlayer ^ 1] -= piecesToValues[hitPiece & 0x7f];
        outBoard.posValue[outBoard.nextPlayer ^ 1] -= posValTableCenter[move.to];
    }

    outBoard.posValue[outBoard.nextPlayer] -= posValTableCenter[move.from];
    outBoard.posValue[outBoard.nextPlayer] += posValTableCenter[move.to];

    outBoard.table[move.to] = inBoard.table[move.from];
    outBoard.table[move.from] = EMPTY_POSITION;

    if (isEnPassant)
        outBoard.table[inBoard.enPassantTargetPosition + ((coloredPiece & 0x80) == 0 ? 10 : -10)] = EMPTY_POSITION;

    switch (piece)
    {
        case PIECE_PAWN:
            if ((move.flags & CHESS_FLAG_PROMOTION) != 0)
            {
                assert(move.promotion > 0 && move.promotion < 7);
                outBoard.table[move.to] = move.promotion + (outBoard.nextPlayer ? 0x80 : 0);
                outBoard.pieceValue[outBoard.nextPlayer] += (piecesToValues[move.promotion] - VAL_PAWN);

                if (depth == 0)
                    outBoard.posValue[outBoard.nextPlayer] += POS_VAL_PROMOTION;
            }
            else if (move.from - move.to == 20 || move.from - move.to == -20)
                outBoard.enPassantTargetPosition = (move.from + move.to) / 2;

            break;

        case PIECE_KING:
            if (inBoard.nextPlayer == 0 && move.from == 95 && move.to == 97)
            {
               outBoard.table[96] = outBoard.table[98];
               outBoard.table[98] = 0;
            }
            else if (inBoard.nextPlayer == 0 && move.from == 95 && move.to == 93)
            {
               outBoard.table[94] = outBoard.table[91];
               outBoard.table[91] = 0;
            }
            else if (inBoard.nextPlayer == 1 && move.from == 25 && move.to == 27)
            {
               outBoard.table[26] = outBoard.table[28];
               outBoard.table[28] = 0;
            }
            else if (inBoard.nextPlayer == 1 && move.from == 25 && move.to == 23)
            {
               outBoard.table[24] = outBoard.table[21];
               outBoard.table[21] = 0;
            }

            outBoard.castlingProhibited[inBoard.nextPlayer] = CASTLING_SHORT | CASTLING_LONG;
            break;

        case PIECE_ROOK:
            if (inBoard.nextPlayer == 0 && move.from == 91)
                outBoard.castlingProhibited[0] |= CASTLING_LONG;
            else if (inBoard.nextPlayer == 0 && move.from == 98)
                outBoard.castlingProhibited[0] |= CASTLING_SHORT;
            else if (inBoard.nextPlayer == 1 && move.from == 21)
                outBoard.castlingProhibited[1] |= CASTLING_LONG;
            else if (inBoard.nextPlayer == 1 && move.from == 28)
                outBoard.castlingProhibited[1] |= CASTLING_SHORT;

            break;
    }

    if (outBoard.pieceValue[0] < VAL_KING)
        outBoard.val = VAL_MIN; // + 1;
    else if (outBoard.pieceValue[1] < VAL_KING)
        outBoard.val = VAL_MAX; // - 1;
    else
        outBoard.val = (outBoard.pieceValue[0] + outBoard.posValue[0]) - (outBoard.pieceValue[1] + outBoard.posValue[1]);

    outBoard.nextPlayer ^= 1;
}
