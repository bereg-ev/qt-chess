#include "test.h"

#include <cassert>
#include <iostream>

#include "board.h"
#include "move.h"
#include "movegen.h"
#include "evaluate.h"
#include "ai.h"

using namespace std;

void Test::myAssert(int id, int b)
{
    if (b == 0)
    {
        printf("!!! --- TEST FAILED: %d --- !!!\n", id);
        exit(1);
    }

    numOfTestsDone++;
}

void Test::testBishop()
{
    Board board1("b...............................................................", "000");            // check WHITE bishop in the corner
    MoveGen moves1 = MoveGen(board1, NO_DEBUG, 1);
    myAssert(100, moves1.moveNum == 7);

    Board board2(".........b......................................................", "000");            // check WHITE bishop at b7
    MoveGen moves2 = MoveGen(board2, NO_DEBUG, 1);
    myAssert(101, moves2.moveNum == 9);

    Board board3("........ .b...... ........ ........ ........ ........ ........ ........", "000");            // check WHITE bishop at b7
    MoveGen moves3 = MoveGen(board3, NO_DEBUG, 1);
    myAssert(102, moves3.moveNum == 9);

    Board board4("........ .b...... ..P..... ........ ........ ........ ........ ........", "000");            // check WHITE bishop at b7
    MoveGen moves4 = MoveGen(board4, NO_DEBUG, 1);
    myAssert(103, moves4.moveNum == 4);

    Board board5("B...............................................................", "100");            // check BLACK bishop in the corner
    MoveGen moves5 = MoveGen(board5, NO_DEBUG, 1);
    myAssert(104, moves5.moveNum == 7);

    Board board6(".........B......................................................", "100");            // check BLACK bishop at b7
    MoveGen moves6 = MoveGen(board6, NO_DEBUG, 1);
    myAssert(105, moves6.moveNum == 9);

    Board board7("........ .B...... ........ ........ ........ ........ ........ ........", "100");            // check BLACK bishop at b7
    MoveGen moves7 = MoveGen(board7, NO_DEBUG, 1);
    myAssert(106, moves7.moveNum == 9);

    Board board8("........ .B...... ..p..... ........ ........ ........ ........ ........", "100");            // check BLACK bishop at b7
    MoveGen moves8 = MoveGen(board8, NO_DEBUG, 1);
    myAssert(107, moves8.moveNum == 4);

}

void Test::testKnight()
{
    Board board1("n...............................................................", "000");            // check WHITE knight in the corner
    MoveGen moves1 = MoveGen(board1, NO_DEBUG, 1);
    myAssert(200, moves1.moveNum == 2);

    Board board2("............................n...................................", "000");            // check WHITE knight in the middle
    MoveGen moves2 = MoveGen(board2, NO_DEBUG, 1);
    myAssert(201, moves2.moveNum == 8);

    Board board3("N...............................................................", "100");            // check BLACK knight in the corner
    MoveGen moves3 = MoveGen(board3, NO_DEBUG, 1);
    myAssert(202, moves3.moveNum == 2);

    Board board4("............................N...................................", "100");            // check BLACK knight in the middle
    MoveGen moves4 = MoveGen(board4, NO_DEBUG, 1);
    myAssert(203, moves4.moveNum == 8);
}

void Test::testPawn()
{
    Board board3("................................................pppppppp........", "000");            // check if all movements of 8 pawns from the base line equals 16
    MoveGen moves3 = MoveGen(board3, NO_DEBUG, 1);
    myAssert(300, moves3.moveNum == 16);

    Board board4("..............................r....n...b...q....pppppppp..k.....", "100");            // check if no movements when nextPlayer is black but we only have white pieces
    MoveGen moves4 = MoveGen(board4, NO_DEBUG, 1);
    myAssert(301, moves4.moveNum == 0);

    Board board5("........................................PPP......p..............", "000");            // check if left hit and right hit works
    MoveGen moves5 = MoveGen(board5, NO_DEBUG, 1);
    myAssert(302, moves5.moveNum == 2);

    Board board6("........................................P........p..............", "000");            // check if left hit and moveOne and moveTwo works
    MoveGen moves6 = MoveGen(board6, NO_DEBUG, 1);
    myAssert(303, moves6.moveNum == 3);

    Board board7(".........p......................................................", "000");            // check if promotion works (4 different moves when a pawn arrives to the final line)
    MoveGen moves7 = MoveGen(board7, NO_DEBUG, 1);
    myAssert(304, moves7.moveNum == 4);

    Board board8("..Q......p......................................................", "000");            // check promotion when pawn gets to the final line through a hit and a normal move
    MoveGen moves8 = MoveGen(board8, NO_DEBUG, 1);
    myAssert(305, moves8.moveNum == 8);

    Board board13("........PPPPPPPP................................................", "100");            // check if all movements of 8 pawns from the base line equals 16
    MoveGen moves13 = MoveGen(board13, NO_DEBUG, 1);
    myAssert(306, moves13.moveNum == 16);

    Board board14("..............................R....N..B...Q.....PPPPPPPP..K.....", "000");            // check if no movements when nextPlayer is black but we only have white pieces
    MoveGen moves14 = MoveGen(board14, NO_DEBUG, 1);
    myAssert(307, moves14.moveNum == 0);

    Board board15("........ ........ ..P..... .qrn.... ........ ........ ........ ........", "100");            // check if left hit and right hit works
    MoveGen moves15 = MoveGen(board15, NO_DEBUG, 1);
    myAssert(308, moves15.moveNum == 2);

    Board board16("........ ...P.... ....b... ........ ........ ........ ........ ........", "100");            // check if left hit and moveOne and moveTwo works
    MoveGen moves16 = MoveGen(board16, NO_DEBUG, 1);
    myAssert(309, moves16.moveNum == 3);

    Board board17("........ ........ ........ ........ ........ ........ .....P.. ........", "100");            // check if promotion works (4 different moves when a pawn arrives to the final line)
    MoveGen moves17 = MoveGen(board17, NO_DEBUG, 1);
    myAssert(310, moves17.moveNum == 4);

    Board board18("........ ........ ........ ........ ........ ........ .....P.. ......q.", "100");            // check promotion when pawn gets to the final line through a hit and a normal move
    MoveGen moves18 = MoveGen(board18, NO_DEBUG, 1);
    myAssert(311, moves18.moveNum == 8);
}

void Test::testRook()
{
    Board board1("r...............................................................", "000");            // check WHITE rook in the corner
    MoveGen moves1 = MoveGen(board1, NO_DEBUG, 1);
    myAssert(400, moves1.moveNum == 14);

    Board board3("........ .r...... ........ ........ ........ ........ ........ ........", "000");            // check WHITE rook at b7
    MoveGen moves3 = MoveGen(board3, NO_DEBUG, 1);
    myAssert(401, moves3.moveNum == 14);

    Board board4("........ .r...... .P...... ........ ........ ........ ........ ........", "000");            // check WHITE rook at b7
    MoveGen moves4 = MoveGen(board4, NO_DEBUG, 1);
    myAssert(402, moves4.moveNum == 9);

    Board board5("R...............................................................", "100");            // check BLACK rook in the corner
    MoveGen moves5 = MoveGen(board5, NO_DEBUG, 1);
    myAssert(403, moves5.moveNum == 14);

    Board board7("........ .R...... ........ ........ ........ ........ ........ ........", "100");            // check BLACK rook at b7
    MoveGen moves7 = MoveGen(board7, NO_DEBUG, 1);
    myAssert(404, moves7.moveNum == 14);

    Board board8("........ .R...... .p...... ........ ........ ........ ........ ........", "100");            // check BLACK rook at b7
    MoveGen moves8 = MoveGen(board8, NO_DEBUG, 1);
    myAssert(405, moves8.moveNum == 9);

}

void Test::testQueen()
{
    Board board1("........ .q...... ........ ........ ........ ........ ........ ........", "000");            // check WHITE queen at b7
    MoveGen moves1 = MoveGen(board1, NO_DEBUG, 1);
    myAssert(500, moves1.moveNum == 23);

    Board board2("........ .Q...... ........ ........ ........ ........ ........ ........", "100");            // check BLACK queen at b7
    MoveGen moves2 = MoveGen(board2, NO_DEBUG, 1);
    myAssert(501, moves2.moveNum == 23);

    Board board3("........ ........ ..PQP... ..Pq.P.. ..PpP... ........ ........ ........", "000");            // check 8 moves of the WHITE queen and 1 hit of the WHITE pawn
    MoveGen moves3 = MoveGen(board3, NO_DEBUG, 1);
    myAssert(502, moves3.moveNum == 9);

    Board board4("........ ........ ..pPp... ..pQ.p.. ..pqp... ........ ........ ........", "100");            // check 8 moves of the BLACK queen and 1 hit of the BLACK pawn
    MoveGen moves4 = MoveGen(board4, NO_DEBUG, 1);
    myAssert(503, moves4.moveNum == 9);
}

void Test::testCastle()
{
    Board outBoard;

    Board board1("......K. ........ ........ ........ ........ ........ ........ ....k..r", "023");            // WHITE short castle
    MoveGen moves1 = MoveGen(board1, NO_DEBUG, 1);
    myAssert(600, moves1.moveNum == 15);
    myAssert(601, moves1.checkIfMoveIsValid(Move("e1g1")));                // check if short castle is a valid move
    Evaluate eval1 = Evaluate(board1, outBoard, Move("e1g1"), 1);
    myAssert(602, outBoard.table[98] == 0 && outBoard.table[96] == PIECE_ROOK);

    Board board2("........ ........ ........ ........ ........ ........ ........ ....k..r", "033");            // WHITE castle prohibited
    MoveGen moves2 = MoveGen(board2, NO_DEBUG, 1);
    myAssert(603, moves2.moveNum == 14);
    myAssert(604, !moves2.checkIfMoveIsValid(Move("e1g1")));                // check if short castle is a valid move

    Board board3("......Q. ........ ........ ........ ........ ........ ........ ....k..r", "000");    // WHITE short castle through Queen attack?
    MoveGen moves3 = MoveGen(board3, NO_DEBUG, 1);
    myAssert(605, !moves3.checkIfMoveIsValid(Move("e1g1")));                // check if short castle is a valid through a Queen attack

    Board board4("....K..R ........ ........ ........ ........ ........ ........ ........", "132");            // BLACK short castle
    MoveGen moves4 = MoveGen(board4, NO_DEBUG, 1);
    myAssert(606, moves4.moveNum == 15);
    myAssert(607, moves4.checkIfMoveIsValid(Move("e8g8")));                // check if short castle is a valid move
    Evaluate eval4 = Evaluate(board4, outBoard, Move("e8g8"), 1);
    myAssert(608, outBoard.table[28] == 0 && outBoard.table[26] == (PIECE_ROOK + 0x80));

    Board board5("....K..R ........ ........ ........ ........ ........ ........ ........", "133");            // BLACK castle prohibited
    MoveGen moves5 = MoveGen(board5, NO_DEBUG, 1);
    myAssert(609, moves5.moveNum == 14);
    myAssert(610, !moves5.checkIfMoveIsValid(Move("e8g8")));                // check if short castle is a valid move

    Board board6("....K..R ........ ........ ........ ........ ........ ........ ......q.", "100");    // BLACK short castle through Queen attack?
    MoveGen moves6 = MoveGen(board6, NO_DEBUG, 1);
    myAssert(611, !moves6.checkIfMoveIsValid(Move("e8g8")));                // check if short castle is a valid through a Queen attack
///
    Board board7("........ ........ ........ ........ ........ ........ ........ r...k...", "013");            // WHITE long castle
    MoveGen moves7 = MoveGen(board7, NO_DEBUG, 1);
    myAssert(612, moves7.moveNum == 16);
    myAssert(613, moves7.checkIfMoveIsValid(Move("e1c1")));                // check if long castle is a valid move
    Evaluate eval7 = Evaluate(board7, outBoard, Move("e1c1"), 1);
    myAssert(614, outBoard.table[91] == 0 && outBoard.table[94] == PIECE_ROOK);

    Board board8("........ ........ ........ ........ ........ ........ ........ r...k...", "033");            // WHITE castle prohibited
    MoveGen moves8 = MoveGen(board8, NO_DEBUG, 1);
    myAssert(615, moves8.moveNum == 15);
    myAssert(616, !moves8.checkIfMoveIsValid(Move("e1c1")));                // check if short castle is a valid move

    Board board9(".Q...... ........ ........ ........ ........ ........ ........ r...k...", "000");    // WHITE long castle through Queen attack?
    MoveGen moves9 = MoveGen(board9, NO_DEBUG, 1);
    myAssert(617, !moves9.checkIfMoveIsValid(Move("e1c1")));                // check if long castle is a valid through a Queen attack

    Board board14("R...K... ........ ........ ........ ........ ........ ........ ........", "131");            // BLACK long castle
    MoveGen moves14 = MoveGen(board14, NO_DEBUG, 1);
    myAssert(618, moves14.moveNum == 16);
    myAssert(619, moves14.checkIfMoveIsValid(Move("e8c8")));                // check if long castle is a valid move
    Evaluate eval14 = Evaluate(board14, outBoard, Move("e8c8"), 1);
    myAssert(620, outBoard.table[21] == 0 && outBoard.table[24] == (PIECE_ROOK + 0x80));

    Board board15("R...K... ........ ........ ........ ........ ........ ........ ........", "133");            // BLACK castle prohibited
    MoveGen moves15 = MoveGen(board15, NO_DEBUG, 1);
    myAssert(621, moves15.moveNum == 15);
    myAssert(622, !moves15.checkIfMoveIsValid(Move("e8c8")));                // check if long castle is a valid move

    Board board16("R...K... ........ ........ ........ ........ ........ ........ ..q.....", "100");    // BLACK long castle through Queen attack?
    MoveGen moves16 = MoveGen(board16, NO_DEBUG, 1);
    myAssert(623, !moves16.checkIfMoveIsValid(Move("e8c8")));                // check if long castle is a valid through a Queen attack

    Board board20("RNBQKBNRPPPPPPPP................................pppp.ppprnbqkbnr", "000");
    Evaluate eval20 = Evaluate(board20, outBoard, Move("e1e2"), 1);        // check if a WHITE king move disables further castles
    myAssert(624, outBoard.castlingProhibited[0] == (CASTLING_SHORT | CASTLING_LONG));

    Board board21("RNBQKBNRPPPPPPPP................................ppppppp.rnbqkbnr", "000");
    Evaluate eval21 = Evaluate(board21, outBoard, Move("h1h2"), 1);        // check if a WHITE right rook move disables short castle
    myAssert(625, outBoard.castlingProhibited[0] == CASTLING_SHORT);

    Board board22("RNBQKBNRPPPPPPPP.................................ppppppprnbqkbnr", "000");
    Evaluate eval22 = Evaluate(board22, outBoard, Move("a1a2"), 1);        // check if a WHITE right rook move disables short castle
    myAssert(626, outBoard.castlingProhibited[0] == CASTLING_LONG);

    Board board23("RNBQKBNRPPPPPPP.................................pppppppprnbqkbnr", "100");
    Evaluate eval23 = Evaluate(board23, outBoard, Move("h8h7"), 1);        // check if a BLACK right rook move disables short castle
    myAssert(627, outBoard.castlingProhibited[1] == CASTLING_SHORT);

    Board board24("RNBQKBNR.PPPPPPP................................pppppppprnbqkbnr", "100");
    Evaluate eval24 = Evaluate(board24, outBoard, Move("a8a7"), 1);        // check if a BLACK right rook move disables short castle
    myAssert(628, outBoard.castlingProhibited[1] == CASTLING_LONG);

    Board board25("RNBQKBNRPPPP.PPP................................pppppppprnbqkbnr", "100");
    Evaluate eval25 = Evaluate(board25, outBoard, Move("e8e7"), 1);        // check if a BLACK king move disables further castles
    myAssert(629, outBoard.castlingProhibited[1] == (CASTLING_SHORT | CASTLING_LONG));

    Board board26("....K..R ....R... ........ ........ ........ ........ ........ r...k..r", "003");            // WHITE castle if check
    MoveGen moves26 = MoveGen(board26, CHECK_VALIDITY, 1);
    myAssert(630, !moves26.checkIfMoveIsValid(Move("e1g1")));                // check if short castle is a valid in Check condition
    myAssert(631, moves26.moveNum == 4);

    //    outBoard.print();
}

void Test::testEvaluate()
{
    Board outBoard;

    Board board1("....K... ......Q. .....p.. ........ ........ ........ ........ ....k...", "033");       // hit BLACK peace and check pieceValue
    Evaluate eval1 = Evaluate(board1, outBoard, Move("f6g7"), 1);
    myAssert(700, board1.pieceValue[1] - outBoard.pieceValue[1] == VAL_QUEEN);

//    Board board1b("....K... ......Q. .....p.. ........ ........ ........ ........ ....k...", "033");       // hit BLACK peace and check pieceValue
//    Evaluate eval1b = Evaluate(board1b, outBoard, Move("f6g7"));
//    myAssert(board1b.pieceValue[1] - outBoard.pieceValue[1] == VAL_QUEEN);

    Board board2("....K... ......p. ........ ........ ........ ........ ........ ....k...", "033");      // promote WHITE and check pieceValue
    Evaluate eval2 = Evaluate(board2, outBoard, Move("g7g82"), 1);
    myAssert(701, outBoard.pieceValue[0] - board2.pieceValue[0] == (VAL_QUEEN - VAL_PAWN));

//    printf("valWhite = %d, valBlack = %d\n", board2.pieceValue[0], board2.pieceValue[1]);
//    printf("valWhite = %d, valBlack = %d\n", outBoard.pieceValue[0], outBoard.pieceValue[1]);
//    outBoard.print();

}

void Test::testEnPassant()
{
    Board board1("....K... ......P. ........ .....p.p ........ ........ ....p... .......k", "133");
    Move move1 = Move("g7g5");
    Board board1b, board1c;
    Evaluate e1 = Evaluate(board1, board1b, move1, 1);
    myAssert(800, board1b.enPassantTargetPosition == 47);          // check if Evaluate registers WHITE en-passant possibility
    MoveGen moves1 = MoveGen(board1b, NO_DEBUG, 1);
    myAssert(801, moves1.checkIfMoveIsValid(Move("h5g6")));        // check if we can do WHITE en-passant after
    myAssert(802, moves1.checkIfMoveIsValid(Move("f5g6")));        // check if we can do WHITE en-passant after

    Evaluate e1b = Evaluate(board1b, board1c, Move("h5g6"), 1);
    myAssert(803, board1c.table[57] == EMPTY_POSITION);
    myAssert(804, board1c.pieceValue[1] - board1b.pieceValue[1] == -VAL_PAWN);
    Evaluate e1c = Evaluate(board1b, board1c, Move("f5g6"), 1);
    myAssert(805, board1c.table[57] == EMPTY_POSITION);
    myAssert(806, board1c.pieceValue[1] - board1b.pieceValue[1] == -VAL_PAWN);

    Board board2("....K... ........ ........ ........ .P.P.... ........ ..p..... .......k", "033");
    Move move2 = Move("c2c4");
    Board board2b, board2c;
    Evaluate e2 = Evaluate(board2, board2b, move2, 1);
    myAssert(807, board2b.enPassantTargetPosition == 73);          // check if Evaluate registers BLACK en-passant possibility
    MoveGen moves2 = MoveGen(board2b, NO_DEBUG, 1);
    myAssert(808, moves2.checkIfMoveIsValid(Move("b4c3")));        // check if we can do BLACK en-passant after
    myAssert(809, moves2.checkIfMoveIsValid(Move("d4c3")));        // check if we can do BLACK en-passant after

    Evaluate e2b = Evaluate(board2b, board2c, Move("b4c3"), 1);
    myAssert(810, board2c.table[63] == EMPTY_POSITION);
    myAssert(811, board2c.pieceValue[0] - board2b.pieceValue[0] == -VAL_PAWN);
    Evaluate e2c = Evaluate(board2b, board2c, Move("d4c3"), 1);
    myAssert(812, board2c.table[63] == EMPTY_POSITION);
    myAssert(813, board2c.pieceValue[0] - board2b.pieceValue[0] == -VAL_PAWN);
}

void Test::testAi()
{
    Board board1("....K... ......p. ........ ........ ........ ........ ........ ....k...", "033");
    Ai ai1 = Ai(board1, 1, AI_FLAG_NONE);
    myAssert(900, ai1.aiBestMove == Move("g7g82"));            // test if Pawn promotion to Queen is the best move

    Board board2("R...K... ........ ........ ........ ........ .p...... ........ n....k..", "033");
    Ai ai2 = Ai(board2, 2, AI_FLAG_ALPHA_BETA);
    myAssert(901, ai2.aiBestMove == Move("a1c2"));             // test if saving the Knight is the best move

    Board board3("....K..R ........ ........ ........ ........ ........ ppp..... k.......", "033");
    Ai ai3 = Ai(board3, 4, AI_FLAG_NONE | AI_FLAG_ALPHA_BETA);
    myAssert(902, ai3.getMoveValue(Move("a1b1")) < -VAL_KING);
    myAssert(903, ai3.getMoveValue(Move("a2a3")) > -VAL_KING);     // test if avoiding the checkmate is the solution

    Board board4("........ b......R K.....P. .r...... ........ ........ kq...... ........", "033");
    Ai ai4 = Ai(board4, 5, AI_FLAG_ALPHA_BETA | AI_FLAG_ITERATIONS | AI_FLAG_SORT_MOVES);   // https://telex.hu/sport/2022/10/15/a-leszoritott-kiralynak-nincs-sok-eselye-megis-kell-egy-jo-otlet
    myAssert(904, ai4.aiBestMove == Move("b5h5"));         // without alpha-beta: 16 million, with: 2.6 million, hit first: 0.8 million
    // https://nextchessmove.com/?fen=rnbqkbnr/ppp1p1pp/8/8/8/8/PPPPPPPP/RNBQKBNR%20w%20KQkq%20-%200%201      8/B6r/k5p1/1R6/8/8/KQ6/8 w - - 0 1

  //    1.5 sec
    Board board5("R..R...K P.....PP ....r... ..Q..P.q .Nbr.... ....p... .p...ppp ......k.", "033");
    Ai ai5 = Ai(board5, 7, AI_FLAG_ALL);    // https://artline.hu/sakk_matt-harom-lepes
    myAssert(905, ai5.aiBestMove == Move("h5h7x"));         //

    Board board6("........ ..K..... ........ ........ ........ ........ .......q ....k...", "033");
    Ai ai6 = Ai(board6, 2, AI_FLAG_NONE);              // check if we survive a crash (by hitting the King)

    Board board8("....K.NR R..P..PP ..PB.P.. q...P... ...Pp... p..b.... r....ppp .nbr..k.", "132");
    Ai ai8 = Ai(board8, 6, AI_FLAG_ALL);
    myAssert(906, ai8.aiBestMove == Move("a7a5"));

    Board board9("........ ........ ......Q. ........ ........ ....K... ........ ....k...", "133");
    Ai ai9 = Ai(board9, 6, AI_FLAG_ALL);            // check if we have 2 immediate winner move

    for (int i = 0; i < ai9.aiMoveNum; i++)
    {
        if (ai9.aiMoves[i] == Move("g6g1") || ai9.aiMoves[i] == Move("g6b1"))
            myAssert(907, ai9.aiVal[i] == VAL_MIN);
        else
        {
            if (ai9.aiVal[i] == VAL_MIN)
                myAssert(908, ai9.aiVal[i] != VAL_MIN);
        }
    }

    Board board10("........ .B...... ........ .....K.. ........ ....k... ..Q..P.. ........", "133");
    Ai ai10 = Ai(board10, 6, AI_FLAG_ALL);              // it was an AI_SORT bug - not to take the obvious move, the Queen promotion
    myAssert(909, ai10.aiBestMove == Move("f2f12"));

    Board board11("........ .Q...N.. .....P.. ..k..... ......B. ....K... ........ ........", "133");    // !! huszart leutteti
    Ai ai11 = Ai(board11, 6, AI_FLAG_ALL - AI_FLAG_SORT_MOVES - AI_FLAG_ITERATIONS);
    myAssert(910, ai11.getMoveValue(Move("f7g5")) > (VAL_MIN + 30));            // check if it can recognize draw deep in the search tree
}

void Test::testIfCheck()
{
    Board board1("........ .......Q ........ .K...... ........ ........ .....p.. .......k", "033");
    MoveGen moves1a = MoveGen(board1, NO_DEBUG, 1);
    MoveGen moves1b = MoveGen(board1, CHECK_VALIDITY, 1);
    myAssert(1000, moves1a.moveNum != moves1b.moveNum);             // check if King escapes from the actual Check

    Board board2("........ .......Q ........ .K...... ........ ........ .....p.. ......k.", "033");
    MoveGen moves2a = MoveGen(board2, NO_DEBUG, 1);
    MoveGen moves2b = MoveGen(board2, CHECK_VALIDITY, 1);
    myAssert(1001, moves2a.moveNum != moves2b.moveNum);             // check if King moves into a Check

    Board board3("........ P....... ........ .....K.. ........ ........ ........ .....qk.", "033");
    MoveGen moves3a = MoveGen(board3, NO_DEBUG, 1);
    MoveGen moves3b = MoveGen(board3, CHECK_VALIDITY, 1);
    myAssert(1002, moves3a.moveNum != moves3b.moveNum);             // check if we can hit the King

    Board board4("RN.QK.NR P.....PP .P..PP.. .pPPpB.. pBpp.... .r..bn.. ...n.ppp ...qkb.r", "020");
    MoveGen moves4 = MoveGen(board4, CHECK_VALIDITY, 1);
    myAssert(1003, !moves4.checkIfMoveIsValid(Move("d2b1")));             // check if uncovering the King is allowed
}

void Test::testDraw()
{
    Board board1("....K... ........ ........ ........ ........ ........ ...q.... ......k.", "033");
    Ai ai1 = Ai(board1, 4, AI_FLAG_ALL);
    myAssert(1100, ai1.getMoveValue(Move("d2e2")) > 0);
    std::list<Game> boards;
    Board board1b("....K... ........ ........ ........ ........ ........ ....q... ......k.", "133");
    boards.push_back(Game(board1b, 0));
    boards.push_back(Game(board1b, 0));
    Ai ai2 = Ai(board1, 4, AI_FLAG_ALL, boards);
    myAssert(1101, ai2.getMoveValue(Move("d2e2")) == 0);

    Board board3 = Board("........ ........ .....P.. ..kPNN.. ....B... ....K... .Q...... ........", "133");   //
    Ai ai3 = Ai(board3, 4, AI_FLAG_ALL);
    myAssert(1102, !(ai3.aiBestMove == Move("d5d4")));        // d5-d4 causes a Draw which isn't the good solution

}

Test::Test()
{
    numOfTestsDone = 0;

    Board board;
    Board board2("RNBQKBNRPPPPPPPP................................pppppppprnbqkbnr", "000");            // check if the default board is correct
    myAssert(1, (board == board2));

    Board board3("RNBQKBNR PPPPPPPP ........ ........ ........ ........ pppppppp rnbqkbnr", "000");            // check the same with spaces
    myAssert(2, (board == board3));

    MoveGen moves1 = MoveGen(board, NO_DEBUG, 1);
    myAssert(3, moves1.checkIfMoveIsValid(Move("d2d4")));                // check if d2d4 is valid on a default board

    testPawn();
    testKnight();
    testBishop();
    testRook();
    testQueen();

    testCastle();

    testEvaluate();
    testIfCheck();
    testEnPassant();
    testDraw();
    testAi();

    printf("done: %d tests\n", numOfTestsDone);
}

/*

//  https://lichess.org/editor/

// depth ne inverz legyen, azaz 1 jelentse az aktualis lepesre adott lehetosegeket, es N az N melysegu lepest

//  miert nem akarja a gyalogot bevinni: Board("........ .B...... ........ .....K.. ........ ....k... ..Q..P.. ........", "033");
    // mert egy csomo -16000-es lepes van, kozte a promotion, de nem azt valasztja
    // mert ha a 3. lepesben viszi be, akkor is ugyanaz a Val jon letre, es ezert nem az 1. lepesben promotal

// sakk, matt, patt felismerese es kiirasa UI-ra

// UI: promotion, most csak default Q

// babu class-ok

// https://telex.hu/sport/2022/10/30/tanpelda-vedelem-feltorese
// https://photos.google.com/photo/AF1QipPe2jaJr_oi3uny6d8ZUOwaZ-k9grlMRf9XKPBo

// https://www.chessprogramming.org/Principal_Variation    !!!! egyszerusitett alfa-beta, min-max kereses megsporolasa

// https://www.365chess.com/analysis_board.php    IMPORT FEN


// colossus chess c64?

// teszt: anyagi hatranyban eszreveszi-e a patt lehetoseget es megjatssza-e?

// egyedulallo kiraly: uj posVal tablazattal szoritsuk le a tabla szelere

// cserebonusz: folyamatos cserevel ne lehessen vegjatekra kenyszeriteni

// besetalo gyalog: csak posValue[] alapjan lehet jo lepesrendezest csinalni

// matt egy vezerrel / bastyaval: hash kell hozza, es posValue, ami az egyeduallo kiralyt pontozza

// 2k-s sakk-kal versenyeztetni

// Toledo sakk (csak az advanced verzio tud sancolni es en-passant-ot, forditani kell nasm-mal)

// http://flaticon.com -> svg file, sakkfigura

// https://telex.hu/sport/2022/10/23/elterelo-hadmuvelet-vedhetetlen-matt
   3 lepeses

// https://telex.hu/sport/2022/10/02/vegzetes-felfedett-sakk

// https://telex.hu/cimke/sakkfeladvany -> GYUJTEMENY


*/
