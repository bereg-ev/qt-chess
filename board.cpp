#include "board.h"

#include <cassert>
#include <iostream>

#include "evaluate.h"

using namespace std;

char Board::getPieceByScreenCoordinates(int x, int y)
{
    int piece = table[10 * (y + 2) + 1 + x];

    return piece == 0 ? ' ' : (piece < 7 ? pieceChr[piece - 1] : pieceChr[((piece - 1) & 0x7f) + 6]);
}

void Board::initWithHumanReadableString(std::string newTable, std::string flags)
{
    const unsigned char pieces[13] = {PIECE_KING, PIECE_QUEEN, PIECE_ROOK, PIECE_BISHOP, PIECE_KNIGHT, PIECE_PAWN,
                       0x80 + PIECE_KING, 0x80 + PIECE_QUEEN, 0x80 + PIECE_ROOK, 0x80 + PIECE_BISHOP, 0x80 + PIECE_KNIGHT, 0x80 + PIECE_PAWN, 0};
    const int piecesToValues[6] = {VAL_KING, VAL_QUEEN, VAL_ROOK, VAL_BISHOP, VAL_KNIGHT, VAL_PAWN};
    assert(flags.length() == 3);
    assert(((newTable.length() == 64) || (newTable.length() == 71)));         // lines separated with spaces

    memset(&table[0], OUTSIDE_OF_BOARD, sizeof(table));
    pieceValue[0] = pieceValue[1] = posValue[0] = posValue[1] = 0;

    for (int line = 0; line < 8; line++)
    {
        for (int col = 0; col < 8; col++)
        {
            char piece = newTable[line * (newTable.length() == 64 ? 8 : 9) + col];
//            char piece = newTable[line * 8 + col];

            int hit = 0;

            for (int i = 0; i < 13; i++)
            {
                if (piece == pieceChr[i])
                {
                    table[10 * (line + 2) + col + 1] = pieces[i];
                    hit = 1;

                    if (i < 6)
                    {
                        pieceValue[0] += piecesToValues[i];
                        posValue[0] += posValTableCenter[i];
                    }
                    else if (i < 12)
                    {
                        pieceValue[1] += piecesToValues[i - 6];
                        posValue[1] += posValTableCenter[i];
                    }
                }
            }

//            if (!hit)
//                cout << "piece: " << piece << "\n";

            assert(hit);
        }
    }

    assert(flags[0] >= '0' && flags[0] <= '1');
    assert(flags[1] >= '0' && flags[1] <= '3');
    assert(flags[2] >= '0' && flags[2] <= '3');

    nextPlayer = flags[0] != '0';
    castlingProhibited[0] = flags[1] - '0';
    castlingProhibited[1] = flags[2] - '0';
    enPassantTargetPosition = 0;
}

Board::Board()
{
    initWithHumanReadableString("RNBQKBNRPPPPPPPP................................pppppppprnbqkbnr", "000");
}

Board::Board(std::string newTable, std::string flags)
{
    initWithHumanReadableString(newTable, flags);
}

bool Board::operator== (const Board& b)
{
    return (memcmp(this->table, b.table, sizeof(table)) == 0 && this->nextPlayer == b.nextPlayer && this->castlingProhibited[0] == b.castlingProhibited[0] && this->castlingProhibited[1] == b.castlingProhibited[1]) ;
}
/*
void Board::operator= (const Board& b)
{
    memcpy(table, b.table, sizeof(table));

    for (int i = 0; i < 2; i++)
    {
        castlingProhibited[i] = b.castlingProhibited[i];
        pieceValue[i] = b.pieceValue[i];
        posValue[i] = b.posValue[i];
    }

    nextPlayer = b.nextPlayer;
    enPassantTargetPosition = b.enPassantTargetPosition;
    val = b.val;
}
*/
void Board::print0(int mode)
{
    const char whitePiece[] = {'.', 'k', 'q', 'r', 'n', 'b', 'p'};
    const char blackPiece[] = {'.', 'K', 'Q', 'R', 'N', 'B', 'P'};

    if (mode == 1)
        printf("Board(\"");

    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            unsigned char piece = table[(row + 2) * 10 + 1 + col];

            if ((piece & 0x7f) <= 6)
                printf("%c", piece >= 0x80 ? blackPiece[piece & 0x7f] : whitePiece[piece & 0x7f]);
        }

        printf(mode ? (row == 7 ? "" : " ") : "\n");
    }

    if (mode == 1)
        printf("\", \"%d%d%d\");\n", nextPlayer, castlingProhibited[0], castlingProhibited[1]);
}

void Board::print()
{
    print0(0);
}

void Board::println()
{
    print0(1);
}
