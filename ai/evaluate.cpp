
#include <cassert>
#include "evaluate.h"

#include "board.h"

#include "piece/piece.h"

Evaluate::Evaluate(Board& inBoard, Board& outBoard, Move move, int depth)
{
    Knight kn = Knight();
    King ki = King();
    Bishop bi = Bishop();
    Rook ro = Rook();
    Queen qu = Queen();
    Pawn pa = Pawn();

    unsigned char coloredPiece = inBoard.getPieceType(move.from);
    int piece = coloredPiece & 0x7f;
    int isEnPassant = (piece == PIECE_PAWN && move.to == inBoard.enPassantTargetPosition);

    outBoard = inBoard;
    outBoard.enPassantTargetPosition = 0;
    char hitPiece = isEnPassant ? outBoard.getPieceType(inBoard.enPassantTargetPosition + ((coloredPiece & 0x80) == 0 ? 10 : -10)) : outBoard.getPieceType(move.to);

    if (hitPiece != EMPTY_POSITION)
    {
        assert((!isEnPassant && (outBoard.getPiece(move.to) >> 7) != outBoard.nextPlayer) || isEnPassant);          // can't hit your own piece
        outBoard.pieceValue[outBoard.nextPlayer ^ 1] -= piecesToValues[hitPiece & 0x7f];
        outBoard.posValue[outBoard.nextPlayer ^ 1] -= posValTableCenter[move.to];
    }

    outBoard.posValue[outBoard.nextPlayer] -= posValTableCenter[move.from];
    outBoard.posValue[outBoard.nextPlayer] += posValTableCenter[move.to];

    outBoard.setPiece(move.to, inBoard.getPieceType(move.from));
    outBoard.setPiece(move.from, EMPTY_POSITION);

    if (isEnPassant)
        outBoard.setPiece(inBoard.enPassantTargetPosition + ((coloredPiece & 0x80) == 0 ? 10 : -10), EMPTY_POSITION);

    switch (piece)
    {
        case PIECE_PAWN:    pa.eval(inBoard, outBoard, move, depth); break;
        case PIECE_KING:    ki.eval(inBoard, outBoard, move, depth); break;
        case PIECE_ROOK:    ro.eval(inBoard, outBoard, move, depth); break;
    }

    if (outBoard.pieceValue[0] < VAL_KING)
        outBoard.val = VAL_MIN; // + 1;
    else if (outBoard.pieceValue[1] < VAL_KING)
        outBoard.val = VAL_MAX; // - 1;
    else
        outBoard.val = (outBoard.pieceValue[0] + outBoard.posValue[0]) - (outBoard.pieceValue[1] + outBoard.posValue[1]);

    outBoard.nextPlayer ^= 1;
}
