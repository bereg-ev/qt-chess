#ifndef BOARD_H
#define BOARD_H

#include "move.h"
#include <string>

#define MAX_MOVEMENTS_PER_POSITION      256         // hard to find above 110 in real games

#define PIECE_KING		1
#define PIECE_QUEEN		2
#define PIECE_ROOK		3
#define PIECE_KNIGHT	4
#define PIECE_BISHOP	5
#define PIECE_PAWN		6

#define OUTSIDE_OF_BOARD    0xff
#define EMPTY_POSITION     0

#define VAL_KING		10000
#define VAL_QUEEN		900		// 900
#define VAL_ROOK		500		// 500
#define VAL_KNIGHT		325		// 325
#define VAL_BISHOP		325		// 325
#define VAL_PAWN		100		// 100

#define VAL_MAX			16000
#define VAL_MIN			-16000

#define TABLE_FIRST		21
#define TABLE_LAST		98

#define CASTLING_SHORT		1
#define CASTLING_LONG		2

#define CHESS_FLAG_HIT			1
#define CHESS_FLAG_PROMOTION		2

#define CHESS_OK                            1
#define CHESS_ERR_TOO_MUCH_MOVEMENTS        -1

#include <cstring>

#include "piece/piece.h"

const std::string pieceChr = "kqrbnpKQRBNP.";

class Board
{
    private:
        void initWithHumanReadableString(std::string newTable, std::string flags);
        Move move;
        Piece table[120];

    public:
        unsigned char castlingProhibited[2];		// bit0: short castling, bit1: long castling
        unsigned char enPassantTargetPosition;
        unsigned char nextPlayer;
        int pieceValue[2];
        int posValue[2];
        int val;

        Board();
        Board(std::string table, std::string flags);
        bool operator== (Board& b);
        char getPieceByScreenCoordinates(int x, int y);
        void print0(int mode);
        void print();
        void println();
        unsigned char getPieceType(int i);
        Piece getPiece(int i);
        void setPiece(int i, unsigned char type);
};


#endif // BOARD_H
