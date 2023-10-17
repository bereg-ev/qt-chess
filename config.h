#ifndef CONFIG_H
#define CONFIG_H


#define MAX_DEPTH               20

#define AI_ITERATION_DEBUG
//#define AI_SORT_DEBUG

#endif // CONFIG_H


/*
elvertem a gepet, nehany undo volt, de semmi kulso segitseg... :)

15:31:44: Starting /Users/bereg/qt-workspace/build-chess-Qt_6_3_1_for_macOS-Release/chess.app/Contents/MacOS/chess...
boards: 1
--- Human: d2 d4
BEST MOVE:  e7 e5, val=0, 20 moves in 3 msec
Principle Variation = e7 e5
BEST MOVE:  d7 d5, val=7, 364 moves in 3 msec
Principle Variation = d7 d5, e2 e4
BEST MOVE:  d7 d5, val=-1, 1603 moves in 3 msec
Principle Variation = d7 d5, f2 f4, e7 e5
BEST MOVE:  f7 f6, val=94, 62558 moves in 56 msec
Principle Variation = f7 f6, c1 f4, d7 d5, f4 x c7
BEST MOVE:  d7 d5, val=-94, 178281 moves in 56 msec
Principle Variation = d7 d5, f2 f4, b8 c6, d4 x e5, e7 e5
BEST MOVE:  g7 g6, val=99, 3498517 moves in 1444 msec
Principle Variation = g7 g6, e2 e3, b8 a6, c1 a3, e7 e5, g2 x h3
RNBQKBNR
PPPPPPPP
........
........
...p....
........
ppp.pppp
rnbqkbnr
move  1: val =   100  d7 d5
move  2: val =   101  b8 c6
move  3: val =   101  g8 f6
move  4: val =   101  g8 h6
move  5: val =   100  a7 a6
move  6: val =   100  a7 a5
move  7: val =   101  b7 b6
move  8: val =   101  b7 b5
move  9: val =    99  c7 c6
move 10: val =   100  c7 c5
move 11: val =   100  d7 d6
move 12: val =   100  b8 a6
move 13: val =    99  e7 e6
move 14: val =   105  e7 e5
move 15: val =   100  f7 f6
move 16: val =   100  f7 f5
move 17: val =    99  g7 g6
move 18: val =   101  g7 g5
move 19: val =   101  h7 h6
move 20: val =   100  h7 h5
BEST MOVE:  g7 g6 val = 99, moveNum = 3498517, time = 1444 msec
Board("RNBQKBNR PPPPPP.P ......P. ........ ...p.... ........ ppp.pppp rnbqkbnr", "000");
--- Human: g1 f3
BEST MOVE:  e7 e5, val=-2, 21 moves in 2 msec
Principle Variation = e7 e5
BEST MOVE:  d7 d5, val=5, 412 moves in 2 msec
Principle Variation = d7 d5, e2 e4
BEST MOVE:  f8 g7, val=-91, 1694 moves in 4 msec
Principle Variation = f8 g7, d4 d5, g7 x b2
BEST MOVE:  f8 h6, val=12, 15937 moves in 20 msec
Principle Variation = f8 h6, e2 e4, h6 x c1, f4 x c7
BEST MOVE:  e7 e6, val=-102, 133084 moves in 78 msec
Principle Variation = e7 e6, f3 g1, f8 g7, e2 e4, g7 x b2
BEST MOVE:  f7 f6, val=93, 2700450 moves in 1129 msec
Principle Variation = f7 f6, d1 d3, e7 e6, d2 e4, d7 d5, e2 e4
RNBQKBNR
PPPPPP.P
......P.
........
...p....
.....n..
ppp.pppp
rnbqkb.r
move  1: val =    94  e7 e6
move  2: val =   101  b8 c6
move  3: val =    95  f8 g7
move  4: val =    96  f8 h6
move  5: val =    95  g8 f6
move  6: val =    95  g8 h6
move  7: val =    95  a7 a6
move  8: val =    95  a7 a5
move  9: val =    95  b7 b6
move 10: val =    95  b7 b5
move 11: val =    95  c7 c6
move 12: val =    95  c7 c5
move 13: val =    95  d7 d6
move 14: val =    95  d7 d5
move 15: val =    95  b8 a6
move 16: val =    95  e7 e5
move 17: val =    93  f7 f6
move 18: val =    94  f7 f5
move 19: val =    94  h7 h6
move 20: val =    94  h7 h5
move 21: val =    94  g6 g5
BEST MOVE:  f7 f6 val = 93, moveNum = 2700450, time = 1129 msec
Board("RNBQKBNR PPPPP..P .....PP. ........ ...p.... .....n.. ppp.pppp rnbqkb.r", "000");
--- Human: e2 e3
BEST MOVE:  e7 e5, val=-2, 20 moves in 2 msec
Principle Variation = e7 e5
BEST MOVE:  d7 d5, val=4, 292 moves in 3 msec
Principle Variation = d7 d5, c2 c4
BEST MOVE:  f8 h6, val=-93, 1999 moves in 4 msec
Principle Variation = f8 h6, c2 c3, h6 x e3
BEST MOVE:  c7 c6, val=92, 57839 moves in 52 msec
Principle Variation = c7 c6, f1 d3, d7 d5, c2 c3
BEST MOVE:  e7 e6, val=-96, 165109 moves in 56 msec
Principle Variation = e7 e6, c2 c4, b8 c6, c2 c3, e7 e5
BEST MOVE:  b7 b6, val=95, 2174293 moves in 922 msec
Principle Variation = b7 b6, d1 d3, e7 e6, f1 c4, c6 b4, e3 e4
RNBQKBNR
PPPPP..P
.....PP.
........
...p....
....pn..
ppp..ppp
rnbqkb.r
move  1: val =    97  e7 e6
move  2: val =    98  b8 c6
move  3: val =    98  e8 f7
move  4: val =    99  f8 g7
move  5: val =    98  f8 h6
move  6: val =    99  g8 h6
move  7: val =    98  a7 a6
move  8: val =    98  a7 a5
move  9: val =    95  b7 b6
move 10: val =    96  b7 b5
move 11: val =    96  c7 c6
move 12: val =    96  c7 c5
move 13: val =    96  d7 d6
move 14: val =    96  d7 d5
move 15: val =    98  b8 a6
move 16: val =    96  e7 e5
move 17: val =    96  h7 h6
move 18: val =    96  h7 h5
move 19: val =    96  f6 f5
move 20: val =    96  g6 g5
BEST MOVE:  b7 b6 val = 95, moveNum = 2174293, time = 922 msec
Board("RNBQKBNR P.PPP..P .P...PP. ........ ...p.... ....pn.. ppp..ppp rnbqkb.r", "000");
--- Human: f1 e2
BEST MOVE:  e7 e5, val=-6, 21 moves in 3 msec
Principle Variation = e7 e5
BEST MOVE:  d7 d5, val=0, 271 moves in 3 msec
Principle Variation = d7 d5, c2 c4
BEST MOVE:  c8 b7, val=-100, 1510 moves in 4 msec
Principle Variation = c8 b7, e3 e4, b7 x e4
BEST MOVE:  c8 a6, val=7, 25000 moves in 38 msec
Principle Variation = c8 a6, e2 d3, b7 x f3, g2 x f3
BEST MOVE:  c8 b7, val=-103, 135007 moves in 67 msec
Principle Variation = c8 b7, d4 d5, e7 e6, c2 c4, b7 x e4
BEST MOVE:  e7 e6, val=88, 1414607 moves in 852 msec
Principle Variation = e7 e6, d1 d3, c8 b7, e3 e4, e7 e6, f2 f4
RNBQKBNR
P.PPP..P
.P...PP.
........
...p....
....pn..
ppp.bppp
rnbqk..r
move  1: val =    92  c8 b7
move  2: val =    93  b8 c6
move  3: val =    98  b8 a6
move  4: val =    93  c8 a6
move  5: val =    93  e8 f7
move  6: val =    93  f8 g7
move  7: val =    93  f8 h6
move  8: val =    98  g8 h6
move  9: val =    93  a7 a6
move 10: val =    91  a7 a5
move 11: val =    89  c7 c6
move 12: val =    90  c7 c5
move 13: val =    90  d7 d6
move 14: val =    90  d7 d5
move 15: val =    88  e7 e6
move 16: val =    94  e7 e5
move 17: val =    90  h7 h6
move 18: val =    94  h7 h5
move 19: val =    90  b6 b5
move 20: val =    89  f6 f5
move 21: val =    89  g6 g5
BEST MOVE:  e7 e6 val = 88, moveNum = 1414607, time = 852 msec
Board("RNBQKBNR P.PP...P .P..PPP. ........ ...p.... ....pn.. ppp.bppp rnbqk..r", "000");
--- Human: e1 g1
BEST MOVE:  d7 d5, val=-12, 28 moves in 3 msec
Principle Variation = d7 d5
BEST MOVE:  d7 d5, val=-6, 134 moves in 2 msec
Principle Variation = d7 d5, c2 c4
BEST MOVE:  c8 b7, val=-106, 1745 moves in 4 msec
Principle Variation = c8 b7, e3 e4, b7 x e4
BEST MOVE:  c8 a6, val=1, 28317 moves in 32 msec
Principle Variation = c8 a6, e2 d3, b7 x f3, g2 x f3
BEST MOVE:  c8 b7, val=-107, 189035 moves in 86 msec
Principle Variation = c8 b7, f3 e1, b8 c6, c2 c4, b7 x e4
BEST MOVE:  c8 b7, val=5, 2002612 moves in 864 msec
Principle Variation = c8 b7, e2 c4, b7 d5, b2 b3, d7 d5, c2 x d3
RNBQKBNR
P.PP...P
.P..PPP.
........
...p....
....pn..
ppp.bppp
rnbq.rk.
move  1: val =     5  c8 b7
move  2: val =     7  b8 c6
move  3: val =    82  b8 a6
move  4: val =    87  c8 a6
move  5: val =    80  d8 e7
move  6: val =    80  e8 e7
move  7: val =    80  e8 f7
move  8: val =    80  f8 e7
move  9: val =    83  f8 d6
move 10: val =    85  f8 c5
move 11: val =     6  f8 b4
move 12: val =    85  f8 a3
move 13: val =    80  f8 g7
move 14: val =    80  f8 h6
move 15: val =    80  g8 e7
move 16: val =     6  g8 h6
move 17: val =    76  a7 a6
move 18: val =    76  a7 a5
move 19: val =    76  c7 c6
move 20: val =    75  c7 c5
move 21: val =    76  d7 d6
move 22: val =    82  d7 d5
move 23: val =    80  h7 h6
move 24: val =    76  h7 h5
move 25: val =    78  b6 b5
move 26: val =    77  e6 e5
move 27: val =    78  f6 f5
move 28: val =    81  g6 g5
BEST MOVE:  c8 b7 val = 5, moveNum = 2002612, time = 864 msec
Board("RN.QKBNR PBPP...P .P..PPP. ........ ...p.... ....pn.. ppp.bppp rnbq.rk.", "030");
--- Human: c2 c4
BEST MOVE:  b7 x f3, val=-328, 33 moves in 5 msec
Principle Variation = b7 x f3
BEST MOVE:  d7 d6, val=0, 319 moves in 4 msec
Principle Variation = d7 d6, e3 e4
BEST MOVE:  b7 e4, val=-324, 2190 moves in 5 msec
Principle Variation = b7 e4, h2 h4, e4 x f3
BEST MOVE:  h7 h6, val=3, 32959 moves in 36 msec
Principle Variation = h7 h6, d1 d3, b7 x f3, d1 x e2
BEST MOVE:  b6 b5, val=-111, 304436 moves in 132 msec
Principle Variation = b6 b5, d4 d5, b5 x c4, d3 x e2, d7 d5
BEST MOVE:  a7 a5, val=3, 3392589 moves in 1480 msec
Principle Variation = a7 a5, d1 d3, g6 g5, h2 h4, d7 d5, b7 x a8
RN.QKBNR
PBPP...P
.P..PPP.
........
..pp....
....pn..
pp..bppp
rnbq.rk.
move  1: val =    99  b6 b5
move  2: val =    96  b7 x f3
move  3: val =     7  d8 e7
move  4: val =     7  d8 c8
move  5: val =     9  e8 e7
move  6: val =     7  e8 f7
move  7: val =     7  f8 e7
move  8: val =     7  f8 d6
move  9: val =   104  f8 c5
move 10: val =     9  f8 b4
move 11: val =     8  f8 a3
move 12: val =     7  f8 g7
move 13: val =     8  f8 h6
move 14: val =     7  g8 e7
move 15: val =     8  g8 h6
move 16: val =     3  a7 a6
move 17: val =     3  a7 a5
move 18: val =     4  b7 c8
move 19: val =     4  b7 a6
move 20: val =     8  b7 c6
move 21: val =   125  b7 d5
move 22: val =     4  b7 e4
move 23: val =     8  b8 c6
move 24: val =     4  c7 c6
move 25: val =    83  c7 c5
move 26: val =    85  d7 d6
move 27: val =     5  d7 d5
move 28: val =    86  h7 h6
move 29: val =    86  h7 h5
move 30: val =     4  b8 a6
move 31: val =     4  e6 e5
move 32: val =     4  f6 f5
move 33: val =     4  g6 g5
BEST MOVE:  a7 a5 val = 3, moveNum = 3392589, time = 1480 msec
Board("RN.QKBNR .BPP...P .P..PPP. P....... ..pp.... ....pn.. pp..bppp rnbq.rk.", "030");
--- Human: b2 b3
BEST MOVE:  b7 x f3, val=-328, 34 moves in 3 msec
Principle Variation = b7 x f3
BEST MOVE:  d7 d6, val=0, 293 moves in 2 msec
Principle Variation = d7 d6, e3 e4
BEST MOVE:  b7 e4, val=-324, 2212 moves in 5 msec
Principle Variation = b7 e4, h2 h4, e4 x f3
BEST MOVE:  d7 d5, val=1, 31814 moves in 38 msec
Principle Variation = d7 d5, h2 h3, b7 x f3, d1 x c1
BEST MOVE:  a5 a4, val=-110, 451293 moves in 194 msec
Principle Variation = a5 a4, f3 e1, b7 e4, g2 g4, f6 x g5
BEST MOVE:  d7 d6, val=1, 2540823 moves in 1021 msec
Principle Variation = d7 d6, d1 d3, g6 g5, b1 c3, d7 d6, c4 x d5
RN.QKBNR
.BPP...P
.P..PPP.
P.......
..pp....
.p..pn..
p...bppp
rnbq.rk.
move  1: val =    99  a5 a4
move  2: val =    95  b7 x f3
move  3: val =     8  b8 a6
move  4: val =     9  b8 c6
move  5: val =    10  d8 e7
move  6: val =     7  d8 c8
move  7: val =     8  e8 e7
move  8: val =     7  e8 f7
move  9: val =     7  f8 e7
move 10: val =     5  f8 d6
move 11: val =   104  f8 c5
move 12: val =     6  f8 b4
move 13: val =    97  f8 a3
move 14: val =     7  f8 g7
move 15: val =     6  f8 h6
move 16: val =     7  g8 e7
move 17: val =     6  g8 h6
move 18: val =     6  b7 c8
move 19: val =     6  b7 a6
move 20: val =     8  b7 c6
move 21: val =   128  b7 d5
move 22: val =     7  b7 e4
move 23: val =    89  a8 a6
move 24: val =     6  c7 c6
move 25: val =    82  c7 c5
move 26: val =     1  d7 d6
move 27: val =     5  d7 d5
move 28: val =    86  h7 h6
move 29: val =     2  h7 h5
move 30: val =    85  b6 b5
move 31: val =    84  e6 e5
move 32: val =     2  f6 f5
move 33: val =     2  g6 g5
move 34: val =     2  a8 a7
BEST MOVE:  d7 d6 val = 1, moveNum = 2540823, time = 1021 msec
Board("RN.QKBNR .BP....P .P.PPPP. P....... ..pp.... .p..pn.. p...bppp rnbq.rk.", "030");
--- Human: a2 a4
BEST MOVE:  b7 x f3, val=-330, 31 moves in 3 msec
Principle Variation = b7 x f3
BEST MOVE:  c7 c6, val=-2, 233 moves in 3 msec
Principle Variation = c7 c6, e3 e4
BEST MOVE:  b7 e4, val=-326, 3124 moves in 7 msec
Principle Variation = b7 e4, h2 h4, e4 x f3
BEST MOVE:  f6 f5, val=1, 30922 moves in 34 msec
Principle Variation = f6 f5, d1 d3, b7 x f3, g2 g4
BEST MOVE:  c7 c5, val=-109, 224303 moves in 97 msec
Principle Variation = c7 c5, f3 d2, c5 x d4, d3 c3, c7 c5
BEST MOVE:  f6 f5, val=1, 3125351 moves in 1444 msec
Principle Variation = f6 f5, c1 a3, b7 e4, f2 f4, e6 e5, c4 x d5
RN.QKBNR
.BP....P
.P.PPPP.
P.......
p.pp....
.p..pn..
....bppp
rnbq.rk.
move  1: val =    88  c7 c5
move  2: val =    91  b7 x f3
move  3: val =     5  b8 d7
move  4: val =     6  b8 a6
move  5: val =    87  b8 c6
move  6: val =     5  d8 e7
move  7: val =     5  d8 c8
move  8: val =     5  d8 d7
move  9: val =     5  e8 d7
move 10: val =     5  e8 e7
move 11: val =     5  e8 f7
move 12: val =     5  f8 e7
move 13: val =     5  f8 g7
move 14: val =     6  f8 h6
move 15: val =     5  g8 e7
move 16: val =     8  g8 h6
move 17: val =    89  b7 c8
move 18: val =    89  b7 a6
move 19: val =     7  b7 c6
move 20: val =    91  b7 d5
move 21: val =     5  b7 e4
move 22: val =     7  a8 a6
move 23: val =    88  c7 c6
move 24: val =     5  a8 a7
move 25: val =    86  h7 h6
move 26: val =    84  h7 h5
move 27: val =    82  b6 b5
move 28: val =     5  d6 d5
move 29: val =    94  e6 e5
move 30: val =     1  f6 f5
move 31: val =     3  g6 g5
BEST MOVE:  f6 f5 val = 1, moveNum = 3125351, time = 1444 msec
Board("RN.QKBNR .BP....P .P.PP.P. P....P.. p.pp.... .p..pn.. ....bppp rnbq.rk.", "030");
--- Human: c1 b2
BEST MOVE:  b7 x f3, val=-334, 35 moves in 4 msec
Principle Variation = b7 x f3
BEST MOVE:  c7 c6, val=-6, 306 moves in 3 msec
Principle Variation = c7 c6, e3 e4
BEST MOVE:  b7 e4, val=-330, 3606 moves in 7 msec
Principle Variation = b7 e4, h2 h4, e4 x f3
BEST MOVE:  d6 d5, val=-3, 15559 moves in 19 msec
Principle Variation = d6 d5, h2 h3, d5 x c4, g2 x f3
BEST MOVE:  d8 f6, val=-114, 213370 moves in 105 msec
Principle Variation = d8 f6, b1 c3, c7 c5, b1 c3, e4 x g2
BEST MOVE:  b7 e4, val=1, 1053087 moves in 423 msec
Principle Variation = b7 e4, b2 c3, b7 e4, d1 d3, c7 c6, d4 x c5
RN.QKBNR
.BP....P
.P.PP.P.
P....P..
p.pp....
.p..pn..
.b..bppp
rn.q.rk.
move  1: val =    88  d8 f6
move  2: val =    93  b7 x f3
move  3: val =    90  b8 d7
move  4: val =    90  b8 a6
move  5: val =    91  b8 c6
move  6: val =    90  d8 e7
move  7: val =    90  a8 a7
move  8: val =   666  d8 g5
move  9: val =   662  d8 h4
move 10: val =    90  d8 c8
move 11: val =    90  d8 d7
move 12: val =    90  e8 d7
move 13: val =    90  e8 e7
move 14: val =    90  e8 f7
move 15: val =    90  f8 e7
move 16: val =     1  f8 g7
move 17: val =    85  f8 h6
move 18: val =     2  g8 e7
move 19: val =    83  g8 f6
move 20: val =     3  g8 h6
move 21: val =     3  b7 c8
move 22: val =     3  b7 a6
move 23: val =    89  b7 c6
move 24: val =     2  b7 d5
move 25: val =     1  b7 e4
move 26: val =    85  a8 a6
move 27: val =    82  c7 c6
move 28: val =    44  c7 c5
move 29: val =    86  h7 h6
move 30: val =    86  h7 h5
move 31: val =    83  b6 b5
move 32: val =    79  d6 d5
move 33: val =    84  e6 e5
move 34: val =    79  g6 g5
move 35: val =    92  f5 f4
BEST MOVE:  b7 e4 val = 1, moveNum = 1053087, time = 423 msec
Board("RN.QKBNR ..P....P .P.PP.P. P....P.. p.ppB... .p..pn.. .b..bppp rn.q.rk.", "030");
--- Human: d4 d5
BEST MOVE:  e4 x f3, val=-330, 34 moves in 4 msec
Principle Variation = e4 x f3
BEST MOVE:  e6 e5, val=97, 169 moves in 3 msec
Principle Variation = e6 e5, b2 x e5
BEST MOVE:  e6 e5, val=-236, 2846 moves in 8 msec
Principle Variation = e6 e5, b2 x e5, d6 x e5
BEST MOVE:  e6 e5, val=0, 11549 moves in 16 msec
Principle Variation = e6 e5, b1 c3, e4 x f3, g2 x f3
BEST MOVE:  e6 e5, val=-17, 126760 moves in 71 msec
Principle Variation = e6 e5, b1 d2, c7 c5, c3 x e4, f5 x e4
BEST MOVE:  e6 e5, val=98, 374931 moves in 134 msec
Principle Variation = e6 e5, b1 a3, e4 x f3, g2 x f3, c7 c5, d2 x e4
RN.QKBNR
..P....P
.P.PP.P.
P..p.P..
p.p.B...
.p..pn..
.b..bppp
rn.q.rk.
move  1: val =    98  e6 e5
move  2: val =    99  e6 x d5
move  3: val =   212  e4 x d5
move  4: val =   104  e4 x b1
move  5: val =   100  b8 c6
move  6: val =   170  d8 e7
move  7: val =   604  d8 f6
move  8: val =   101  d8 g5
move  9: val =   101  d8 h4
move 10: val =   170  d8 c8
move 11: val =   170  d8 d7
move 12: val =   170  e8 d7
move 13: val =   170  e8 e7
move 14: val =   170  e8 f7
move 15: val =   170  f8 e7
move 16: val =   249  f8 g7
move 17: val =   170  f8 h6
move 18: val =    99  g8 e7
move 19: val =    99  g8 f6
move 20: val =    99  g8 h6
move 21: val =   100  c7 c6
move 22: val =   164  c7 c5
move 23: val =   166  h7 h6
move 24: val =   166  h7 h5
move 25: val =    99  b6 b5
move 26: val =   170  a8 a7
move 27: val =   170  a8 a6
move 28: val =   166  g6 g5
move 29: val =    99  f5 f4
move 30: val =   170  b8 d7
move 31: val =    99  e4 d3
move 32: val =   196  e4 c2
move 33: val =    99  b8 a6
move 34: val =   100  e4 x f3
BEST MOVE:  e6 e5 val = 98, moveNum = 374931, time = 134 msec
Board("RN.QKBNR ..P....P .P.P..P. P..pPP.. p.p.B... .p..pn.. .b..bppp rn.q.rk.", "030");
--- Human: b1 c3
BEST MOVE:  e4 x f3, val=-333, 32 moves in 5 msec
Principle Variation = e4 x f3
BEST MOVE:  e4 x f3, val=0, 124 moves in 3 msec
Principle Variation = e4 x f3, g2 x f3
BEST MOVE:  c7 c5, val=-17, 1844 moves in 5 msec
Principle Variation = c7 c5, c3 x e4, f5 x e4
BEST MOVE:  e4 x f3, val=1, 38803 moves in 40 msec
Principle Variation = e4 x f3, g2 x f3, g6 g5, c3 x e4
BEST MOVE:  c7 c6, val=-109, 146264 moves in 59 msec
Principle Variation = c7 c6, d5 x c6, e4 x c6, c3 x e4, c7 c5
BEST MOVE:  e4 x f3, val=1, 2920096 moves in 1299 msec
Principle Variation = e4 x f3, g2 x f3, d8 g5, g2 g3, c7 c5, f2 f4
RN.QKBNR
..P....P
.P.P..P.
P..pPP..
p.p.B...
.pn.pn..
.b..bppp
r..q.rk.
move  1: val =   212  c7 c6
move  2: val =   215  e4 x d5
move  3: val =   213  b8 d7
move  4: val =   213  b8 a6
move  5: val =   323  b8 c6
move  6: val =   213  d8 e7
move  7: val =   214  d8 f6
move  8: val =   315  d8 g5
move  9: val =   594  d8 h4
move 10: val =   213  d8 c8
move 11: val =   213  d8 d7
move 12: val =   213  e8 d7
move 13: val =   213  e8 e7
move 14: val =   213  e8 f7
move 15: val =   213  f8 e7
move 16: val =   213  f8 g7
move 17: val =   213  f8 h6
move 18: val =   213  g8 e7
move 19: val =   213  g8 f6
move 20: val =   213  g8 h6
move 21: val =   213  a8 a7
move 22: val =   213  c7 c5
move 23: val =   212  h7 h6
move 24: val =   212  h7 h5
move 25: val =   209  b6 b5
move 26: val =   210  g6 g5
move 27: val =   405  f5 f4
move 28: val =   210  a8 a6
move 29: val =   315  e4 d3
move 30: val =   313  e4 c2
move 31: val =   313  e4 b1
move 32: val =     1  e4 x f3
BEST MOVE:  e4 x f3 val = 1, moveNum = 2920096, time = 1299 msec
Board("RN.QKBNR ..P....P .P.P..P. P..pPP.. p.p..... .pn.pB.. .b..bppp r..q.rk.", "030");
--- Human: e2 f3
BEST MOVE:  c7 c5, val=-10, 28 moves in 3 msec
Principle Variation = c7 c5
BEST MOVE:  g6 g5, val=-3, 363 moves in 3 msec
Principle Variation = g6 g5, e3 e4
BEST MOVE:  g8 f6, val=-106, 5706 moves in 10 msec
Principle Variation = g8 f6, h2 h4, e7 x d5
BEST MOVE:  f5 f4, val=-2, 54410 moves in 47 msec
Principle Variation = f5 f4, h2 h3, f4 x e3, e3 e4
BEST MOVE:  g8 f6, val=-111, 616947 moves in 261 msec
Principle Variation = g8 f6, f3 e2, e5 e4, g2 g4, c7 c5
BEST MOVE:  g6 g5, val=92, 6902084 moves in 2863 msec
Principle Variation = g6 g5, h2 h3, h6 h5, d1 d3, c7 c6, e3 e4
RN.QKBNR
..P....P
.P.P..P.
P..pPP..
p.p.....
.pn.pb..
.b...ppp
r..q.rk.
move  1: val =    94  g8 f6
move  2: val =    95  a8 a6
move  3: val =    95  b8 d7
move  4: val =    95  b8 a6
move  5: val =   189  b8 c6
move  6: val =    95  d8 e7
move  7: val =    95  d8 f6
move  8: val =    95  d8 g5
move  9: val =    95  d8 h4
move 10: val =    95  d8 c8
move 11: val =    95  d8 d7
move 12: val =    95  e8 d7
move 13: val =    95  e8 e7
move 14: val =    95  e8 f7
move 15: val =    95  f8 e7
move 16: val =    94  f8 g7
move 17: val =    95  f8 h6
move 18: val =    95  g8 e7
move 19: val =    95  a8 a7
move 20: val =    95  g8 h6
move 21: val =    95  c7 c6
move 22: val =    95  c7 c5
move 23: val =    92  h7 h6
move 24: val =    92  h7 h5
move 25: val =    94  b6 b5
move 26: val =    92  g6 g5
move 27: val =   189  e5 e4
move 28: val =    93  f5 f4
BEST MOVE:  g6 g5 val = 92, moveNum = 6902084, time = 2863 msec
Board("RN.QKBNR ..P....P .P.P.... P..pPPP. p.p..... .pn.pb.. .b...ppp r..q.rk.", "030");
--- Human: d1 c2
BEST MOVE:  c7 c5, val=-14, 26 moves in 4 msec
Principle Variation = c7 c5
BEST MOVE:  c7 c6, val=91, 159 moves in 3 msec
Principle Variation = c7 c6, d5 x c6
BEST MOVE:  g8 e7, val=-110, 2962 moves in 6 msec
Principle Variation = g8 e7, h2 h4, e7 x d5
BEST MOVE:  g5 g4, val=85, 53822 moves in 44 msec
Principle Variation = g5 g4, f3 d1, c7 c5, c2 x f5
BEST MOVE:  g5 g4, val=-116, 195590 moves in 66 msec
Principle Variation = g5 g4, f3 e2, g8 e7, b3 b4, e7 x d5
BEST MOVE:  g5 g4, val=87, 1015756 moves in 357 msec
Principle Variation = g5 g4, f3 d1, d8 f6, g2 g3, c7 c5, d5 x c6
RN.QKBNR
..P....P
.P.P....
P..pPPP.
p.p.....
.pn.pb..
.bq..ppp
r....rk.
move  1: val =    87  g5 g4
move  2: val =    88  a8 a6
move  3: val =    88  b8 d7
move  4: val =    88  b8 a6
move  5: val =    88  b8 c6
move  6: val =    88  d8 e7
move  7: val =    88  d8 f6
move  8: val =    88  d8 c8
move  9: val =    88  d8 d7
move 10: val =    88  e8 d7
move 11: val =    88  e8 e7
move 12: val =    88  e8 f7
move 13: val =    88  f8 e7
move 14: val =    88  f8 g7
move 15: val =    88  f8 h6
move 16: val =    88  g8 e7
move 17: val =    88  g8 f6
move 18: val =    88  g8 h6
move 19: val =    89  c7 c6
move 20: val =    88  c7 c5
move 21: val =    88  h7 h6
move 22: val =    88  h7 h5
move 23: val =    92  b6 b5
move 24: val =    88  e5 e4
move 25: val =    88  f5 f4
move 26: val =    88  a8 a7
BEST MOVE:  g5 g4 val = 87, moveNum = 1015756, time = 357 msec
Board("RN.QKBNR ..P....P .P.P.... P..pPP.. p.p...P. .pn.pb.. .bq..ppp r....rk.", "030");
--- Human: f3 e2
BEST MOVE:  c7 c5, val=-20, 28 moves in 3 msec
Principle Variation = c7 c5
BEST MOVE:  c7 c6, val=85, 159 moves in 4 msec
Principle Variation = c7 c6, d5 x c6
BEST MOVE:  g8 e7, val=-116, 2914 moves in 5 msec
Principle Variation = g8 e7, h2 h4, e7 x d5
BEST MOVE:  d8 f6, val=87, 49459 moves in 40 msec
Principle Variation = d8 f6, g2 g3, c7 c5, g2 x h3
BEST MOVE:  g8 e7, val=-114, 309802 moves in 123 msec
Principle Variation = g8 e7, f2 f4, g4 f3, h2 h4, g4 g3
BEST MOVE:  d8 g5, val=88, 1811670 moves in 658 msec
Principle Variation = d8 g5, c3 b5, e8 d7, g2 x f3, c7 c6, f5 x e5
RN.QKBNR
..P....P
.P.P....
P..pPP..
p.p...P.
.pn.p...
.bq.bppp
r....rk.
move  1: val =    91  g8 e7
move  2: val =   180  a8 a6
move  3: val =   180  b8 d7
move  4: val =   180  b8 a6
move  5: val =    92  b8 c6
move  6: val =   180  d8 e7
move  7: val =    89  d8 f6
move  8: val =    88  d8 g5
move  9: val =    90  d8 h4
move 10: val =    90  d8 c8
move 11: val =    90  d8 d7
move 12: val =    90  e8 d7
move 13: val =    90  e8 e7
move 14: val =    90  e8 f7
move 15: val =    90  f8 e7
move 16: val =   182  f8 g7
move 17: val =   180  f8 h6
move 18: val =    90  a8 a7
move 19: val =    89  g8 f6
move 20: val =    90  g8 h6
move 21: val =   172  c7 c6
move 22: val =   174  c7 c5
move 23: val =   176  h7 h6
move 24: val =   174  h7 h5
move 25: val =   178  b6 b5
move 26: val =   179  e5 e4
move 27: val =   181  f5 f4
move 28: val =   174  g4 g3
BEST MOVE:  d8 g5 val = 88, moveNum = 1811670, time = 658 msec
Board("RN..KBNR ..P....P .P.P.... P..pPPQ. p.p...P. .pn.p... .bq.bppp r....rk.", "030");
--- Human: g2 g3
BEST MOVE:  g5 x e3, val=-114, 32 moves in 5 msec
Principle Variation = g5 x e3
BEST MOVE:  c7 c5, val=89, 652 moves in 4 msec
Principle Variation = c7 c5, d5 c6
BEST MOVE:  e5 e4, val=-114, 10301 moves in 15 msec
Principle Variation = e5 e4, h2 h4, g4 h3
BEST MOVE:  h7 h6, val=86, 79770 moves in 49 msec
Principle Variation = h7 h6, e2 d3, h6 h5, c2 x f5
BEST MOVE:  c7 c6, val=-115, 710964 moves in 310 msec
Principle Variation = c7 c6, h2 h4, g4 h3, c2 x f5, c7 c5
BEST MOVE:  c7 c6, val=88, 3007108 moves in 1069 msec
Principle Variation = c7 c6, e3 e4, c6 x d5, c3 d5, d5 x c4, g5 x g8
RN..KBNR
..P....P
.P.P....
P..pPPQ.
p.p...P.
.pn.p.p.
.bq.bp.p
r....rk.
move  1: val =    88  c7 c6
move  2: val =    89  g5 x e3
move  3: val =    89  b8 d7
move  4: val =    89  b8 a6
move  5: val =    89  b8 c6
move  6: val =    89  e8 d8
move  7: val =    89  e8 d7
move  8: val =    89  e8 e7
move  9: val =    89  e8 f7
move 10: val =    89  f8 e7
move 11: val =    89  f8 g7
move 12: val =    89  f8 h6
move 13: val =    89  g8 e7
move 14: val =    89  g8 f6
move 15: val =    89  g8 h6
move 16: val =    89  a8 a7
move 17: val =    89  c7 c5
move 18: val =    90  h7 h6
move 19: val =    90  h7 h5
move 20: val =    89  b6 b5
move 21: val =    89  e5 e4
move 22: val =    91  f5 f4
move 23: val =    89  g5 f6
move 24: val =    89  g5 e7
move 25: val =    89  g5 d8
move 26: val =    89  g5 h6
move 27: val =    90  g5 f4
move 28: val =    89  a8 a6
move 29: val =   194  g5 h4
move 30: val =    89  g5 g6
move 31: val =    89  g5 g7
move 32: val =    89  g5 h5
BEST MOVE:  c7 c6 val = 88, moveNum = 3007108, time = 1069 msec
Board("RN..KBNR .......P .PPP.... P..pPPQ. p.p...P. .pn.p.p. .bq.bp.p r....rk.", "030");
--- Human: a1 d1
BEST MOVE:  c6 x d5, val=-124, 31 moves in 3 msec
Principle Variation = c6 x d5
BEST MOVE:  c6 x d5, val=-16, 130 moves in 4 msec
Principle Variation = c6 x d5, c4 x d5
BEST MOVE:  c6 c5, val=-120, 3851 moves in 8 msec
Principle Variation = c6 c5, h2 h4, g5 x e3
BEST MOVE:  c6 c5, val=80, 23801 moves in 24 msec
Principle Variation = c6 c5, g1 h1, b6 b5, b2 x e5
BEST MOVE:  c6 x d5, val=-120, 242046 moves in 117 msec
Principle Variation = c6 x d5, c4 x d5, e5 e4, e4 x f5, e5 e4
BEST MOVE:  g8 f6, val=83, 2515330 moves in 1055 msec
Principle Variation = g8 f6, d5 x c6, b8 x c6, d5 x c6, d7 c5, g5 x g8
RN..KBNR
.......P
.PPP....
P..pPPQ.
p.p...P.
.pn.p.p.
.bq.bp.p
...r.rk.
move  1: val =   179  c6 x d5
move  2: val =   180  g5 x e3
move  3: val =   181  b8 d7
move  4: val =    93  b8 a6
move  5: val =    88  e8 d8
move  6: val =    88  e8 d7
move  7: val =    89  e8 e7
move  8: val =    88  e8 f7
move  9: val =    89  f8 e7
move 10: val =    89  f8 g7
move 11: val =    89  f8 h6
move 12: val =    88  g8 e7
move 13: val =    83  g8 f6
move 14: val =    84  g8 h6
move 15: val =    84  h7 h6
move 16: val =    84  h7 h5
move 17: val =    84  b6 b5
move 18: val =    84  c6 c5
move 19: val =    84  a8 a7
move 20: val =   179  e5 e4
move 21: val =    85  f5 f4
move 22: val =    84  g5 f6
move 23: val =    89  g5 e7
move 24: val =    89  g5 d8
move 25: val =    86  g5 h6
move 26: val =   891  g5 f4
move 27: val =    84  a8 a6
move 28: val =   188  g5 h4
move 29: val =    85  g5 g6
move 30: val =    89  g5 g7
move 31: val =    84  g5 h5
BEST MOVE:  g8 f6 val = 83, moveNum = 2515330, time = 1055 msec
Board("RN..KB.R .......P .PPP.N.. P..pPPQ. p.p...P. .pn.p.p. .bq.bp.p ...r.rk.", "030");
--- Human: c3 a2
BEST MOVE:  c6 x d5, val=-128, 32 moves in 4 msec
Principle Variation = c6 x d5
BEST MOVE:  c6 x d5, val=-20, 133 moves in 5 msec
Principle Variation = c6 x d5, c4 x d5
BEST MOVE:  c6 c5, val=-124, 3474 moves in 9 msec
Principle Variation = c6 c5, h2 h4, g5 x e3
BEST MOVE:  c6 c5, val=80, 25855 moves in 26 msec
Principle Variation = c6 c5, d1 d3, b6 b5, b2 x e5
BEST MOVE:  c6 c5, val=-126, 270152 moves in 131 msec
Principle Variation = c6 c5, f2 f4, g4 f3, h2 h4, f6 x d5
BEST MOVE:  h7 h5, val=81, 1528239 moves in 579 msec
Principle Variation = h7 h5, d5 x c6, b8 x c6, d3 x f5, a8 a7, e5 x d6
RN..KB.R
.......P
.PPP.N..
P..pPPQ.
p.p...P.
.p..p.p.
nbq.bp.p
...r.rk.
move  1: val =   178  c6 c5
move  2: val =    84  c6 x d5
move  3: val =    85  f6 x d5
move  4: val =    85  g5 x e3
move  5: val =    85  e8 d8
move  6: val =    85  e8 d7
move  7: val =    85  e8 e7
move  8: val =    85  e8 f7
move  9: val =    85  f8 e7
move 10: val =    85  f8 g7
move 11: val =    85  f8 h6
move 12: val =    85  h8 g8
move 13: val =    81  h7 h6
move 14: val =    81  h7 h5
move 15: val =    84  b6 b5
move 16: val =    83  a8 a7
move 17: val =    83  a8 a6
move 18: val =    83  f6 g8
move 19: val =    83  f6 d7
move 20: val =    85  b8 d7
move 21: val =    84  f6 h5
move 22: val =    83  f6 e4
move 23: val =    82  e5 e4
move 24: val =    85  f5 f4
move 25: val =    82  g5 h6
move 26: val =   761  g5 f4
move 27: val =    83  b8 a6
move 28: val =    86  g5 h4
move 29: val =    83  g5 g6
move 30: val =   174  g5 g7
move 31: val =    84  g5 g8
move 32: val =    82  g5 h5
BEST MOVE:  h7 h5 val = 81, moveNum = 1528239, time = 579 msec
Board("RN..KB.R ........ .PPP.N.. P..pPPQP p.p...P. .p..p.p. nbq.bp.p ...r.rk.", "030");
--- Human: e2 d3
BEST MOVE:  c6 x d5, val=-130, 32 moves in 4 msec
Principle Variation = c6 x d5
BEST MOVE:  c6 x d5, val=-22, 129 moves in 4 msec
Principle Variation = c6 x d5, c4 x d5
BEST MOVE:  c6 c5, val=-126, 3442 moves in 8 msec
Principle Variation = c6 c5, h2 h4, g5 x e3
BEST MOVE:  c6 x d5, val=-20, 11442 moves in 14 msec
Principle Variation = c6 x d5, c4 x d5, f6 x d5, b2 x e5
BEST MOVE:  c6 x d5, val=-226, 64421 moves in 42 msec
Principle Variation = c6 x d5, h2 h4, g4 h3, h2 h4, g4 h3
BEST MOVE:  h5 h4, val=85, 827842 moves in 379 msec
Principle Variation = h5 h4, d5 x c6, b8 x c6, f1 e1, g5 x e3, c4 x d5
RN..KB.R
........
.PPP.N..
P..pPPQP
p.p...P.
.p.bp.p.
nbq..p.p
...r.rk.
move  1: val =   182  c6 x d5
move  2: val =   195  f6 x d5
move  3: val =   780  g5 x e3
move  4: val =   183  b8 a6
move  5: val =   183  e8 d8
move  6: val =   183  e8 d7
move  7: val =   183  e8 e7
move  8: val =   183  e8 f7
move  9: val =   183  f8 e7
move 10: val =   183  f8 g7
move 11: val =   183  f8 h6
move 12: val =   183  h8 g8
move 13: val =   183  h8 h7
move 14: val =   183  h8 h6
move 15: val =   183  b6 b5
move 16: val =   182  c6 c5
move 17: val =   183  a8 a7
move 18: val =   183  f6 g8
move 19: val =   183  f6 d7
move 20: val =   183  f6 h7
move 21: val =   183  a8 a6
move 22: val =   183  f6 e4
move 23: val =   185  e5 e4
move 24: val =   183  f5 f4
move 25: val =   183  g5 h6
move 26: val =   183  g5 f4
move 27: val =   183  b8 d7
move 28: val =   183  g5 h4
move 29: val =   183  g5 g6
move 30: val =   183  g5 g7
move 31: val =   183  g5 g8
move 32: val =    85  h5 h4
BEST MOVE:  h5 h4 val = 85, moveNum = 827842, time = 379 msec
Board("RN..KB.R ........ .PPP.N.. P..pPPQ. p.p...PP .p.bp.p. nbq..p.p ...r.rk.", "030");
--- Human: d3 f5
BEST MOVE:  g5 x f5, val=-253, 34 moves in 5 msec
Principle Variation = g5 x f5
BEST MOVE:  c6 x d5, val=76, 182 moves in 6 msec
Principle Variation = c6 x d5, c4 x d5
BEST MOVE:  c6 x d5, val=-137, 3630 moves in 10 msec
Principle Variation = c6 x d5, f5 e6, d5 x c4
BEST MOVE:  h4 x g3, val=79, 15927 moves in 18 msec
Principle Variation = h4 x g3, d5 x c6, g3 x f2, b2 x e5
BEST MOVE:  h4 x g3, val=-136, 130464 moves in 68 msec
Principle Variation = h4 x g3, f5 g6, e8 e7, g6 d3, g5 x f5
BEST MOVE:  h4 h3, val=180, 1208044 moves in 476 msec
Principle Variation = h4 h3, d5 x c6, b8 x c6, d5 x c6, c6 x d5, b2 x e5
RN..KB.R
........
.PPP.N..
P..pPbQ.
p.p...PP
.p..p.p.
nbq..p.p
...r.rk.
move  1: val =   295  h4 x g3
move  2: val =   296  c6 x d5
move  3: val =   299  f6 x d5
move  4: val =   402  g5 x e3
move  5: val =   347  g5 x f5
move  6: val =   187  e8 e7
move  7: val =   187  e8 f7
move  8: val =   187  f8 e7
move  9: val =   271  f8 g7
move 10: val =   271  f8 h6
move 11: val =   187  h8 g8
move 12: val =   355  h8 h7
move 13: val =   188  h8 h6
move 14: val =   353  h8 h5
move 15: val =   192  b6 b5
move 16: val =   183  c6 c5
move 17: val =   184  a8 a6
move 18: val =   185  f6 g8
move 19: val =   185  f6 d7
move 20: val =   401  f6 h7
move 21: val =   281  b8 d7
move 22: val =   187  f6 h5
move 23: val =   185  f6 e4
move 24: val =   245  e5 e4
move 25: val =   281  g5 h6
move 26: val =   185  g5 f4
move 27: val =   184  b8 a6
move 28: val =   858  g5 g6
move 29: val =   281  g5 g7
move 30: val =   281  g5 g8
move 31: val =   184  e8 d8
move 32: val =   753  g5 h5
move 33: val =   180  h4 h3
move 34: val =   181  a8 a7
BEST MOVE:  h4 h3 val = 180, moveNum = 1208044, time = 476 msec
Board("RN..KB.R ........ .PPP.N.. P..pPbQ. p.p...P. .p..p.pP nbq..p.p ...r.rk.", "030");
--- Human: e3 e4
BEST MOVE:  g5 x f5, val=-252, 35 moves in 4 msec
Principle Variation = g5 x f5
BEST MOVE:  c6 x d5, val=77, 173 moves in 4 msec
Principle Variation = c6 x d5, c4 x d5
BEST MOVE:  c6 x d5, val=-138, 3610 moves in 9 msec
Principle Variation = c6 x d5, f5 e6, d5 x e4
BEST MOVE:  c6 c5, val=177, 21031 moves in 24 msec
Principle Variation = c6 c5, d1 d3, b6 b5, b2 x e5
BEST MOVE:  b6 b5, val=-34, 274326 moves in 137 msec
Principle Variation = b6 b5, d5 x c6, b5 x c4, b2 x e5, e4 x d3
BEST MOVE:  c6 c5, val=179, 2194296 moves in 882 msec
Principle Variation = c6 c5, a2 c3, g5 h5, f2 f3, b6 b5, b2 x e5
RN..KB.R
........
.PPP.N..
P..pPbQ.
p.p.p.P.
.p....pP
nbq..p.p
...r.rk.
move  1: val =   286  b6 b5
move  2: val =   294  c6 x d5
move  3: val =   296  f6 x d5
move  4: val =   298  f6 x e4
move  5: val =   425  g5 x f5
move  6: val =   182  e8 e7
move  7: val =   182  e8 f7
move  8: val =   182  f8 e7
move  9: val =   255  f8 g7
move 10: val =   255  f8 h6
move 11: val =   184  h8 g8
move 12: val =   250  h8 h7
move 13: val =   183  h8 h6
move 14: val =   182  h8 h5
move 15: val =   354  h8 h4
move 16: val =   182  a8 a7
move 17: val =   179  c6 c5
move 18: val =   182  a8 a6
move 19: val =   182  f6 g8
move 20: val =   184  f6 d7
move 21: val =   183  f6 h7
move 22: val =   182  b8 d7
move 23: val =   180  f6 h5
move 24: val =   182  b8 a6
move 25: val =   180  g5 h6
move 26: val =   758  g5 f4
move 27: val =   180  g5 e3
move 28: val =   275  g5 d2
move 29: val =   752  g5 c1
move 30: val =   756  g5 h4
move 31: val =   861  g5 g6
move 32: val =   180  g5 g7
move 33: val =   180  g5 g8
move 34: val =   180  e8 d8
move 35: val =   180  g5 h5
BEST MOVE:  c6 c5 val = 179, moveNum = 2194296, time = 882 msec
Board("RN..KB.R ........ .P.P.N.. P.PpPbQ. p.p.p.P. .p....pP nbq..p.p ...r.rk.", "030");
--- Human: c2 d2
BEST MOVE:  g5 x d2, val=-827, 33 moves in 6 msec
Principle Variation = g5 x d2
BEST MOVE:  g5 x d2, val=73, 133 moves in 5 msec
Principle Variation = g5 x d2, d1 x d2
BEST MOVE:  g5 h5, val=-31, 3394 moves in 9 msec
Principle Variation = g5 h5, f5 e6, f6 x e4
BEST MOVE:  g5 x d2, val=175, 22994 moves in 24 msec
Principle Variation = g5 x d2, d1 x d2, b6 b5, d1 x d2
BEST MOVE:  g5 h5, val=-37, 194912 moves in 96 msec
Principle Variation = g5 h5, d2 d3, b6 b5, f5 x g4, b6 b5
BEST MOVE:  g5 x d2, val=177, 2138914 moves in 930 msec
Principle Variation = g5 x d2, d1 x d2, a8 a6, f1 e1, b6 b5, b3 x c4
RN..KB.R
........
.P.P.N..
P.PpPbQ.
p.p.p.P.
.p....pP
nb.q.p.p
...r.rk.
move  1: val =   179  g5 h5
move  2: val =   181  f6 x d5
move  3: val =   297  f6 x e4
move  4: val =   177  g5 x d2
move  5: val =   181  g5 x f5
move  6: val =   270  e8 d8
move  7: val =   271  e8 e7
move  8: val =   179  e8 f7
move  9: val =   271  f8 e7
move 10: val =   271  f8 g7
move 11: val =   178  f8 h6
move 12: val =   179  h8 g8
move 13: val =   354  h8 h7
move 14: val =   271  h8 h6
move 15: val =   178  h8 h5
move 16: val =   349  h8 h4
move 17: val =   265  b6 b5
move 18: val =   179  f6 g8
move 19: val =   179  f6 d7
move 20: val =   179  f6 h7
move 21: val =   271  a8 a6
move 22: val =   178  f6 h5
move 23: val =   854  b8 d7
move 24: val =   178  g5 h6
move 25: val =   852  g5 f4
move 26: val =   269  g5 e3
move 27: val =   271  b8 a6
move 28: val =   275  g5 h4
move 29: val =   844  g5 g6
move 30: val =   179  g5 g7
move 31: val =   179  g5 g8
move 32: val =   269  b8 c6
move 33: val =   271  a8 a7
BEST MOVE:  g5 x d2 val = 177, moveNum = 2138914, time = 930 msec
Board("RN..KB.R ........ .P.P.N.. P.PpPb.. p.p.p.P. .p....pP nb.Q.p.p ...r.rk.", "030");
--- Human: d1 d2
BEST MOVE:  f6 x e4, val=-31, 23 moves in 3 msec
Principle Variation = f6 x e4
BEST MOVE:  b6 b5, val=175, 432 moves in 4 msec
Principle Variation = b6 b5, b2 x e5
BEST MOVE:  h8 h5, val=-31, 3747 moves in 8 msec
Principle Variation = h8 h5, f5 e6, f6 x e4
BEST MOVE:  a8 a6, val=177, 41619 moves in 39 msec
Principle Variation = a8 a6, d2 d3, b6 b5, g6 x h5
BEST MOVE:  a8 a7, val=-29, 277439 moves in 130 msec
Principle Variation = a8 a7, f2 f4, g4 f3, f5 e6, f6 x e4
BEST MOVE:  a8 a7, val=177, 3668540 moves in 1553 msec
Principle Variation = a8 a7, g1 h1, a6 a8, d2 d3, e8 e7, c4 x d5
RN..KB.R
........
.P.P.N..
P.PpPb..
p.p.p.P.
.p....pP
nb.r.p.p
.....rk.
move  1: val =   406  f6 x d5
move  2: val =   177  a8 a6
move  3: val =   181  b8 d7
move  4: val =   177  b8 a6
move  5: val =   178  b8 c6
move  6: val =   177  e8 d8
move  7: val =   177  e8 e7
move  8: val =   177  e8 f7
move  9: val =   178  f8 e7
move 10: val =   177  f8 g7
move 11: val =   177  f8 h6
move 12: val =   177  h8 g8
move 13: val =   179  h8 h7
move 14: val =   178  h8 h6
move 15: val =   178  h8 h5
move 16: val =   178  h8 h4
move 17: val =   267  b6 b5
move 18: val =   178  f6 g8
move 19: val =   181  f6 d7
move 20: val =   178  f6 h7
move 21: val =   177  a8 a7
move 22: val =   179  f6 h5
move 23: val =   389  f6 x e4
BEST MOVE:  a8 a7 val = 177, moveNum = 3668540, time = 1553 msec
Board(".N..KB.R R....... .P.P.N.. P.PpPb.. p.p.p.P. .p....pP nb.r.p.p .....rk.", "032");
--- Human: a2 c3
BEST MOVE:  f6 x e4, val=-29, 30 moves in 2 msec
Principle Variation = f6 x e4
BEST MOVE:  b8 a6, val=173, 605 moves in 4 msec
Principle Variation = b8 a6, f5 x g4
BEST MOVE:  h8 h5, val=-29, 4776 moves in 9 msec
Principle Variation = h8 h5, f5 e6, f6 x e4
BEST MOVE:  f8 h6, val=175, 53835 moves in 43 msec
Principle Variation = f8 h6, d2 d3, h6 g5, g6 x f7
BEST MOVE:  b8 a6, val=-27, 393165 moves in 172 msec
Principle Variation = b8 a6, f2 f4, g4 f3, g4 e6, f6 x e4
BEST MOVE:  a7 a6, val=181, 2644303 moves in 981 msec
Principle Variation = a7 a6, d2 d3, a7 g7, d2 d3, a7 g7, f5 x g4
.N..KB.R
R.......
.P.P.N..
P.PpPb..
p.p.p.P.
.pn...pP
.b.r.p.p
.....rk.
move  1: val =   181  b8 a6
move  2: val =   302  f6 x d5
move  3: val =   182  b8 c6
move  4: val =   181  e8 d8
move  5: val =   181  e8 e7
move  6: val =   181  e8 f7
move  7: val =   273  f8 e7
move  8: val =   271  f8 g7
move  9: val =   181  f8 h6
move 10: val =   181  h8 g8
move 11: val =   183  h8 h7
move 12: val =   181  h8 h6
move 13: val =   182  h8 h5
move 14: val =   182  h8 h4
move 15: val =   181  a7 a8
move 16: val =   181  a7 b7
move 17: val =   181  a7 c7
move 18: val =   183  a7 d7
move 19: val =   181  a7 e7
move 20: val =   182  a7 f7
move 21: val =   181  a7 g7
move 22: val =   183  a7 h7
move 23: val =   181  a7 a6
move 24: val =   183  b6 b5
move 25: val =   269  f6 g8
move 26: val =   182  f6 d7
move 27: val =   182  f6 h7
move 28: val =   182  b8 d7
move 29: val =   182  f6 h5
move 30: val =   297  f6 x e4
BEST MOVE:  a7 a6 val = 181, moveNum = 2644303, time = 981 msec
Board(".N..KB.R ........ RP.P.N.. P.PpPb.. p.p.p.P. .pn...pP .b.r.p.p .....rk.", "032");
--- Human: c3 d1
BEST MOVE:  f6 x e4, val=-31, 22 moves in 3 msec
Principle Variation = f6 x e4
BEST MOVE:  b6 b5, val=175, 373 moves in 2 msec
Principle Variation = b6 b5, b2 x e5
BEST MOVE:  h8 h5, val=-31, 3265 moves in 7 msec
Principle Variation = h8 h5, f5 e6, f6 x e4
BEST MOVE:  a6 a8, val=177, 26175 moves in 28 msec
Principle Variation = a6 a8, d1 e3, b6 b5, g6 x h5
BEST MOVE:  a6 a7, val=-29, 199652 moves in 99 msec
Principle Variation = a6 a7, d1 c3, h8 h5, f5 e6, f6 x e4
BEST MOVE:  f8 h6, val=177, 1692101 moves in 679 msec
Principle Variation = f8 h6, d2 d3, a6 a8, g4 c8, b6 b5, g6 x h5
.N..KB.R
........
RP.P.N..
P.PpPb..
p.p.p.P.
.p....pP
.b.r.p.p
...n.rk.
move  1: val =   179  a6 a7
move  2: val =   181  f6 x d5
move  3: val =   177  e8 d8
move  4: val =   177  e8 e7
move  5: val =   179  e8 f7
move  6: val =   178  f8 e7
move  7: val =   178  f8 g7
move  8: val =   177  f8 h6
move  9: val =   179  h8 g8
move 10: val =   179  h8 h7
move 11: val =   178  h8 h6
move 12: val =   178  h8 h5
move 13: val =   179  h8 h4
move 14: val =   179  b8 d7
move 15: val =   178  a6 a8
move 16: val =   182  b6 b5
move 17: val =   269  f6 g8
move 18: val =   179  f6 d7
move 19: val =   179  f6 h7
move 20: val =   178  b8 c6
move 21: val =   179  f6 h5
move 22: val =   389  f6 x e4
BEST MOVE:  f8 h6 val = 177, moveNum = 1692101, time = 679 msec
Board(".N..K..R ........ RP.P.N.B P.PpPb.. p.p.p.P. .p....pP .b.r.p.p ...n.rk.", "032");
--- Human: d2 c2
BEST MOVE:  f6 x e4, val=-31, 26 moves in 5 msec
Principle Variation = f6 x e4
BEST MOVE:  b6 b5, val=175, 345 moves in 4 msec
Principle Variation = b6 b5, b2 x e5
BEST MOVE:  h6 g5, val=-27, 4143 moves in 9 msec
Principle Variation = h6 g5, b3 b4, a5 x b4
BEST MOVE:  e8 d8, val=175, 18936 moves in 20 msec
Principle Variation = e8 d8, g1 h1, b6 b5, b2 x e5
BEST MOVE:  h6 f8, val=-29, 217916 moves in 114 msec
Principle Variation = h6 f8, d1 e3, h8 h5, b3 b4, f6 x e4
BEST MOVE:  h6 g5, val=179, 2797943 moves in 1176 msec
Principle Variation = h6 g5, d1 c3, a6 a8, c3 b5, e8 d7, g6 x h5
.N..K..R
........
RP.P.N.B
P.PpPb..
p.p.p.P.
.p....pP
.br..p.p
...n.rk.
move  1: val =   179  h6 f8
move  2: val =   181  f6 x d5
move  3: val =   301  f6 x e4
move  4: val =   179  e8 f8
move  5: val =   179  e8 e7
move  6: val =   179  e8 f7
move  7: val =   179  e8 g8
move  8: val =   179  h8 g8
move  9: val =   179  h8 f8
move 10: val =   344  h8 h7
move 11: val =   179  a6 a7
move 12: val =   179  a6 a8
move 13: val =   277  b6 b5
move 14: val =   273  f6 g8
move 15: val =   273  f6 d7
move 16: val =   273  f6 h7
move 17: val =   274  b8 c6
move 18: val =   273  f6 h5
move 19: val =   179  e8 d8
move 20: val =   179  h6 g7
move 21: val =   181  b8 d7
move 22: val =   179  h6 g5
move 23: val =   183  h6 f4
move 24: val =   273  h6 e3
move 25: val =   269  h6 d2
move 26: val =   265  h6 c1
BEST MOVE:  h6 g5 val = 179, moveNum = 2797943, time = 1176 msec
Board(".N..K..R ........ RP.P.N.. P.PpPbB. p.p.p.P. .p....pP .br..p.p ...n.rk.", "032");
--- Human: b2 c1
BEST MOVE:  g5 x c1, val=-252, 28 moves in 5 msec
Principle Variation = g5 x c1
BEST MOVE:  g5 x c1, val=73, 105 moves in 4 msec
Principle Variation = g5 x c1, c2 x c1
BEST MOVE:  g5 x c1, val=-31, 1568 moves in 6 msec
Principle Variation = g5 x c1, c2 x c1, f6 x e4
BEST MOVE:  g5 x c1, val=171, 5376 moves in 9 msec
Principle Variation = g5 x c1, c2 x c1, a6 a8, f5 x g4
BEST MOVE:  g5 x c1, val=-31, 51783 moves in 44 msec
Principle Variation = g5 x c1, c2 x c1, h8 h5, f5 e6, f6 x e4
BEST MOVE:  g5 x c1, val=173, 256218 moves in 114 msec
Principle Variation = g5 x c1, c2 x c1, a6 a8, d1 e3, a6 a8, g6 x h5
.N..K..R
........
RP.P.N..
P.PpPbB.
p.p.p.P.
.p....pP
..r..p.p
..bn.rk.
move  1: val =   173  g5 x c1
move  2: val =   175  f6 x d5
move  3: val =   297  f6 x e4
move  4: val =   175  e8 f8
move  5: val =   175  e8 e7
move  6: val =   175  e8 f7
move  7: val =   175  e8 g8
move  8: val =   246  h8 g8
move  9: val =   175  h8 f8
move 10: val =   252  h8 h7
move 11: val =   175  h8 h6
move 12: val =   346  h8 h5
move 13: val =   256  h8 h4
move 14: val =   175  a6 a7
move 15: val =   175  a6 a8
move 16: val =   267  b6 b5
move 17: val =   271  f6 g8
move 18: val =   273  f6 d7
move 19: val =   396  f6 h7
move 20: val =   174  b8 c6
move 21: val =   175  f6 h5
move 22: val =   175  e8 d8
move 23: val =   174  g5 h6
move 24: val =   178  g5 f4
move 25: val =   183  g5 e3
move 26: val =   175  g5 d2
move 27: val =   271  b8 d7
move 28: val =   179  g5 h4
BEST MOVE:  g5 x c1 val = 173, moveNum = 256218, time = 114 msec
Board(".N..K..R ........ RP.P.N.. P.PpPb.. p.p.p.P. .p....pP ..r..p.p ..Bn.rk.", "032");
--- Human: c2 c1
BEST MOVE:  f6 x e4, val=-31, 22 moves in 2 msec
Principle Variation = f6 x e4
BEST MOVE:  a6 a8, val=171, 292 moves in 2 msec
Principle Variation = a6 a8, f5 x g4
BEST MOVE:  h8 h5, val=-31, 2528 moves in 6 msec
Principle Variation = h8 h5, f5 e6, f6 x e4
BEST MOVE:  a6 a8, val=173, 26629 moves in 27 msec
Principle Variation = a6 a8, d1 e3, a6 a8, g6 x h5
BEST MOVE:  a6 a7, val=-29, 148085 moves in 73 msec
Principle Variation = a6 a7, d1 c3, h8 h5, f5 e6, f6 x e4
BEST MOVE:  a6 a8, val=177, 691232 moves in 260 msec
Principle Variation = a6 a8, d1 c3, b8 a6, c3 b5, a7 a6, g6 x f7
.N..K..R
........
RP.P.N..
P.PpPb..
p.p.p.P.
.p....pP
.....p.p
..rn.rk.
move  1: val =   177  a6 a7
move  2: val =   179  f6 x d5
move  3: val =   177  e8 d8
move  4: val =   177  e8 f8
move  5: val =   177  e8 e7
move  6: val =   177  e8 f7
move  7: val =   177  e8 g8
move  8: val =   177  h8 g8
move  9: val =   177  h8 f8
move 10: val =   250  h8 h7
move 11: val =   177  h8 h6
move 12: val =   252  h8 h5
move 13: val =   356  h8 h4
move 14: val =   177  b8 d7
move 15: val =   177  a6 a8
move 16: val =   267  b6 b5
move 17: val =   179  f6 g8
move 18: val =   179  f6 d7
move 19: val =   179  f6 h7
move 20: val =   178  b8 c6
move 21: val =   179  f6 h5
move 22: val =   293  f6 x e4
BEST MOVE:  a6 a8 val = 177, moveNum = 691232, time = 260 msec
Board("RN..K..R ........ .P.P.N.. P.PpPb.. p.p.p.P. .p....pP .....p.p ..rn.rk.", "032");
--- Human: d1 e3
BEST MOVE:  f6 x e4, val=-29, 23 moves in 5 msec
Principle Variation = f6 x e4
BEST MOVE:  a8 a7, val=173, 366 moves in 5 msec
Principle Variation = a8 a7, e3 x g4
BEST MOVE:  h8 h5, val=-29, 3288 moves in 7 msec
Principle Variation = h8 h5, f5 e6, f6 x e4
BEST MOVE:  a8 a6, val=175, 28945 moves in 27 msec
Principle Variation = a8 a6, c1 c3, a8 b8, g6 x h5
BEST MOVE:  h8 g8, val=-25, 126887 moves in 63 msec
Principle Variation = h8 g8, f5 e6, g8 g5, g4 f5, c3 x e4
BEST MOVE:  h8 g8, val=175, 468949 moves in 157 msec
Principle Variation = h8 g8, g1 h1, a8 a6, f1 x f3, g5 h5, f5 x h3
RN..K..R
........
.P.P.N..
P.PpPb..
p.p.p.P.
.p..n.pP
.....p.p
..r..rk.
move  1: val =   175  h8 g8
move  2: val =   394  f6 x d5
move  3: val =   177  b8 d7
move  4: val =   176  b8 a6
move  5: val =   176  b8 c6
move  6: val =   176  e8 d8
move  7: val =   176  e8 f8
move  8: val =   176  e8 e7
move  9: val =   176  e8 f7
move 10: val =   176  e8 g8
move 11: val =   176  a8 a7
move 12: val =   176  h8 f8
move 13: val =   348  h8 h7
move 14: val =   176  h8 h6
move 15: val =   177  h8 h5
move 16: val =   347  h8 h4
move 17: val =   176  b6 b5
move 18: val =   179  f6 g8
move 19: val =   271  f6 d7
move 20: val =   177  f6 h7
move 21: val =   176  a8 a6
move 22: val =   178  f6 h5
move 23: val =   395  f6 x e4
BEST MOVE:  h8 g8 val = 175, moveNum = 468949, time = 157 msec
Board("RN..K.R. ........ .P.P.N.. P.PpPb.. p.p.p.P. .p..n.pP .....p.p ..r..rk.", "033");
--- Human: f2 f3
BEST MOVE:  g4 x f3, val=-27, 21 moves in 1 msec
Principle Variation = g4 x f3
BEST MOVE:  g4 x f3, val=77, 89 moves in 2 msec
Principle Variation = g4 x f3, f1 x f3
BEST MOVE:  g8 g5, val=-27, 1501 moves in 3 msec
Principle Variation = g8 g5, f5 e6, f6 x e4
BEST MOVE:  g4 x f3, val=175, 18357 moves in 22 msec
Principle Variation = g4 x f3, f1 x f3, a8 a7, f3 x g4
BEST MOVE:  g4 x f3, val=-23, 39047 moves in 19 msec
Principle Variation = g4 x f3, f1 x f3, g8 h8, g3 g4, f6 x e4
BEST MOVE:  g4 x f3, val=179, 140388 moves in 59 msec
Principle Variation = g4 x f3, f1 x f3, g8 g5, g3 g4, a8 a6, b3 b4
RN..K.R.
........
.P.P.N..
P.PpPb..
p.p.p.P.
.p..nppP
.......p
..r..rk.
move  1: val =   179  g4 x f3
move  2: val =   187  f6 x d5
move  3: val =   303  f6 x e4
move  4: val =   180  b8 a6
move  5: val =   183  b8 c6
move  6: val =   180  e8 d8
move  7: val =   180  e8 f8
move  8: val =   180  e8 e7
move  9: val =   180  e8 f7
move 10: val =   180  g8 f8
move 11: val =   180  g8 h8
move 12: val =   180  g8 g7
move 13: val =   458  g8 g6
move 14: val =   180  g8 g5
move 15: val =   271  b6 b5
move 16: val =   277  f6 d7
move 17: val =   285  f6 h7
move 18: val =   180  a8 a6
move 19: val =   185  f6 h5
move 20: val =   181  b8 d7
move 21: val =   180  a8 a7
BEST MOVE:  g4 x f3 val = 179, moveNum = 140388, time = 59 msec
Board("RN..K.R. ........ .P.P.N.. P.PpPb.. p.p.p... .p..nPpP .......p ..r..rk.", "033");
--- Human: f1 f3
BEST MOVE:  f6 x e4, val=-27, 23 moves in 2 msec
Principle Variation = f6 x e4
BEST MOVE:  a8 a7, val=175, 404 moves in 3 msec
Principle Variation = a8 a7, f5 x h3
BEST MOVE:  g8 h8, val=-23, 1799 moves in 3 msec
Principle Variation = g8 h8, g3 g4, f6 x e4
BEST MOVE:  g8 g5, val=179, 18138 moves in 22 msec
Principle Variation = g8 g5, g3 g4, a8 a7, b3 b4
BEST MOVE:  g8 g5, val=-25, 62847 moves in 36 msec
Principle Variation = g8 g5, c1 c3, g5 h5, g3 g4, b5 x c4
BEST MOVE:  g8 g5, val=181, 423651 moves in 171 msec
Principle Variation = g8 g5, g3 g4, b8 a6, g3 g4, b8 a6, g6 x h5
RN..K.R.
........
.P.P.N..
P.PpPb..
p.p.p...
.p..nrpP
.......p
..r...k.
move  1: val =   181  g8 g5
move  2: val =   404  g8 x g3
move  3: val =   183  f6 x d5
move  4: val =   299  f6 x e4
move  5: val =   277  b8 c6
move  6: val =   183  e8 d8
move  7: val =   183  e8 f8
move  8: val =   183  e8 e7
move  9: val =   183  e8 f7
move 10: val =   252  g8 f8
move 11: val =   183  g8 h8
move 12: val =   183  g8 g7
move 13: val =   398  g8 g6
move 14: val =   183  a8 a7
move 15: val =   575  g8 g4
move 16: val =   183  a8 a6
move 17: val =   273  b6 b5
move 18: val =   183  f6 d7
move 19: val =   400  f6 h7
move 20: val =   183  b8 d7
move 21: val =   183  f6 h5
move 22: val =   183  b8 a6
move 23: val =   406  f6 g4
BEST MOVE:  g8 g5 val = 181, moveNum = 423651, time = 171 msec
Board("RN..K... ........ .P.P.N.. P.PpPbR. p.p.p... .p..nrpP .......p ..r...k.", "033");
--- Human: c1 f1
BEST MOVE:  g5 x f5, val=-252, 24 moves in 3 msec
Principle Variation = g5 x f5
BEST MOVE:  g5 h5, val=175, 331 moves in 2 msec
Principle Variation = g5 h5, f5 x h3
BEST MOVE:  g5 h5, val=-27, 1160 moves in 3 msec
Principle Variation = g5 h5, f5 e6, f6 x e4
BEST MOVE:  a8 a7, val=179, 20028 moves in 24 msec
Principle Variation = a8 a7, g3 g4, b8 a6, g6 x h5
BEST MOVE:  a8 a7, val=-25, 109977 moves in 59 msec
Principle Variation = a8 a7, f5 x h3, f6 x e4, f5 x h3, g5 x f5
BEST MOVE:  b8 d7, val=246, 531569 moves in 188 msec
Principle Variation = b8 d7, f5 x h3, f6 x e4, f5 x h3, b8 c6, g3 g4
RN..K...
........
.P.P.N..
P.PpPbR.
p.p.p...
.p..nrpP
.......p
.....rk.
move  1: val =   495  f6 x d5
move  2: val =   404  f6 x e4
move  3: val =   402  g5 x f5
move  4: val =   289  b8 a6
move  5: val =   401  b8 c6
move  6: val =   327  e8 d8
move  7: val =   327  e8 f8
move  8: val =   294  e8 e7
move  9: val =   323  e8 f7
move 10: val =   285  b6 b5
move 11: val =   388  f6 g8
move 12: val =   285  f6 d7
move 13: val =   402  f6 h7
move 14: val =   277  a8 a7
move 15: val =   254  f6 h5
move 16: val =   275  a8 a6
move 17: val =   406  f6 g4
move 18: val =   275  g5 g6
move 19: val =   279  g5 g7
move 20: val =   256  g5 g8
move 21: val =   246  b8 d7
move 22: val =   256  g5 h5
move 23: val =   575  g5 g4
move 24: val =   404  g5 x g3
BEST MOVE:  b8 d7 val = 246, moveNum = 531569, time = 188 msec
Board("R...K... ...N.... .P.P.N.. P.PpPbR. p.p.p... .p..nrpP .......p .....rk.", "033");
--- Human: f5 d7
BEST MOVE:  e8 x d7, val=75, 6 moves in 0 msec
Principle Variation = e8 x d7
BEST MOVE:  f6 x d7, val=81, 58 moves in 1 msec
Principle Variation = f6 x d7, g3 g4
BEST MOVE:  f6 x d7, val=-19, 524 moves in 1 msec
Principle Variation = f6 x d7, g3 g4, g5 x g4
BEST MOVE:  f6 x d7, val=179, 2689 moves in 5 msec
Principle Variation = f6 x d7, g3 g4, a8 b8, f3 x h3
BEST MOVE:  f6 x d7, val=79, 13010 moves in 14 msec
Principle Variation = f6 x d7, g3 g4, g5 g8, f3 x h3, g5 x g4
BEST MOVE:  f6 x d7, val=183, 84979 moves in 55 msec
Principle Variation = f6 x d7, f3 f7, b6 b5, f3 x h3, d7 b8, b3 b4
R...K...
...b....
.P.P.N..
P.PpP.R.
p.p.p...
.p..nrpP
.......p
.....rk.
move  1: val =   183  f6 x d7
move  2: val =   400  e8 x d7
move  3: val =   504  e8 f8
move  4: val =   400  e8 e7
move  5: val =   504  e8 f7
move  6: val =   300  e8 d8
BEST MOVE:  f6 x d7 val = 183, moveNum = 84979, time = 55 msec
Board("R...K... ...N.... .P.P.... P.PpP.R. p.p.p... .p..nrpP .......p .....rk.", "033");
--- Human: e3 d1
BEST MOVE:  g5 x g3, val=-25, 18 moves in 1 msec
Principle Variation = g5 x g3
BEST MOVE:  a8 b8, val=79, 320 moves in 3 msec
Principle Variation = a8 b8, g3 g4
BEST MOVE:  g5 g4, val=-27, 3559 moves in 6 msec
Principle Variation = g5 g4, b3 b4, g4 x e4
BEST MOVE:  g5 g8, val=175, 21457 moves in 21 msec
Principle Variation = g5 g8, d1 f2, g4 g8, f2 x h3
BEST MOVE:  e8 e7, val=-21, 76633 moves in 40 msec
Principle Variation = e8 e7, d1 f2, a8 h8, g3 g4, h3 h2
BEST MOVE:  g5 g8, val=179, 597333 moves in 231 msec
Principle Variation = g5 g8, d1 e3, a8 b8, g3 g4, g5 x g3, f2 x h3
R...K...
...N....
.P.P....
P.PpP.R.
p.p.p...
.p...rpP
.......p
...n.rk.
move  1: val =   185  e8 e7
move  2: val =   181  a8 c8
move  3: val =   181  a8 d8
move  4: val =   185  a8 a7
move  5: val =   185  a8 a6
move  6: val =   398  e8 d8
move  7: val =   181  a8 b8
move  8: val =   272  d7 b8
move  9: val =   598  d7 f8
move 10: val =   398  d7 f6
move 11: val =   183  b6 b5
move 12: val =   181  g5 g6
move 13: val =   179  g5 g7
move 14: val =   179  g5 g8
move 15: val =   271  g5 f5
move 16: val =   181  g5 h5
move 17: val =   181  g5 g4
move 18: val =   471  g5 x g3
BEST MOVE:  g5 g8 val = 179, moveNum = 597333, time = 231 msec
Board("R...K.R. ...N.... .P.P.... P.PpP... p.p.p... .p...rpP .......p ...n.rk.", "033");
--- Human: d1 f2
BEST MOVE:  g8 x g3, val=-25, 18 moves in 2 msec
Principle Variation = g8 x g3
BEST MOVE:  b6 b5, val=175, 351 moves in 2 msec
Principle Variation = b6 b5, a4 x b5
BEST MOVE:  g8 f8, val=73, 1188 moves in 2 msec
Principle Variation = g8 f8, f3 x f8, d7 x f8
BEST MOVE:  g8 f8, val=175, 5419 moves in 8 msec
Principle Variation = g8 f8, f2 x h3, f8 x f3, f1 x f3
BEST MOVE:  g8 g6, val=73, 88496 moves in 67 msec
Principle Variation = g8 g6, g3 g4, d7 f6, g1 h1, b6 b5
BEST MOVE:  a8 c8, val=179, 1443037 moves in 566 msec
Principle Variation = a8 c8, f2 x h3, g6 g4, g1 h1, g6 g5, b4 x c5
R...K.R.
...N....
.P.P....
P.PpP...
p.p.p...
.p...rpP
.....n.p
.....rk.
move  1: val =   179  g8 g6
move  2: val =   575  g8 x g3
move  3: val =   179  a8 d8
move  4: val =   183  a8 a7
move  5: val =   179  a8 a6
move  6: val =   179  e8 d8
move  7: val =   275  e8 e7
move  8: val =   179  g8 f8
move  9: val =   179  g8 h8
move 10: val =   179  g8 g7
move 11: val =   183  a8 b8
move 12: val =   179  g8 g5
move 13: val =   351  g8 g4
move 14: val =   179  a8 c8
move 15: val =   183  d7 b8
move 16: val =   275  d7 f8
move 17: val =   494  d7 f6
move 18: val =   273  b6 b5
BEST MOVE:  a8 c8 val = 179, moveNum = 1443037, time = 566 msec
Board("..R.K.R. ...N.... .P.P.... P.PpP... p.p.p... .p...rpP .....n.p .....rk.", "033");
--- Human: f2 h3
BEST MOVE:  g8 x g3, val=75, 18 moves in 1 msec
Principle Variation = g8 x g3
BEST MOVE:  d7 b8, val=179, 318 moves in 2 msec
Principle Variation = d7 b8, g3 g4
BEST MOVE:  g8 g4, val=73, 1163 moves in 2 msec
Principle Variation = g8 g4, b3 b4, g4 x e4
BEST MOVE:  g8 g4, val=179, 6871 moves in 10 msec
Principle Variation = g8 g4, f1 e1, c8 b8, b3 b4
BEST MOVE:  g8 g6, val=73, 156441 moves in 98 msec
Principle Variation = g8 g6, g1 h1, g6 g4, g3 g4, f3 x b3
BEST MOVE:  c8 a8, val=275, 582799 moves in 192 msec
Principle Variation = c8 a8, f3 f5, g6 h6, g1 g2, e5 x f4, g3 x f4
..R.K.R.
...N....
.P.P....
P.PpP...
p.p.p...
.p...rpn
.......p
.....rk.
move  1: val =   275  g8 g6
move  2: val =   402  g8 x g3
move  3: val =   275  c8 d8
move  4: val =   281  c8 c7
move  5: val =   279  c8 c6
move  6: val =   275  e8 d8
move  7: val =   277  e8 e7
move  8: val =   277  g8 f8
move  9: val =   277  g8 h8
move 10: val =   277  g8 g7
move 11: val =   277  c8 b8
move 12: val =   775  g8 g5
move 13: val =   277  g8 g4
move 14: val =   275  c8 a8
move 15: val =   277  d7 b8
move 16: val =   277  d7 f8
move 17: val =   375  d7 f6
move 18: val =   277  b6 b5
BEST MOVE:  c8 a8 val = 275, moveNum = 582799, time = 192 msec
Board("R...K.R. ...N.... .P.P.... P.PpP... p.p.p... .p...rpn .......p .....rk.", "033");
--- Human: h3 f2
BEST MOVE:  g8 x g3, val=75, 18 moves in 2 msec
Principle Variation = g8 x g3
BEST MOVE:  d7 b8, val=179, 354 moves in 2 msec
Principle Variation = d7 b8, h2 h4
BEST MOVE:  d7 f8, val=79, 2533 moves in 5 msec
Principle Variation = d7 f8, h2 h3, g8 x g3
BEST MOVE:  g8 f8, val=177, 14962 moves in 15 msec
Principle Variation = g8 f8, f2 d3, f8 x f3, h3 h4
BEST MOVE:  g8 g6, val=77, 182402 moves in 95 msec
Principle Variation = g8 g6, h2 h4, d7 f6, g1 h1, b6 b5
BEST MOVE:  a8 c8, val=279, 1038574 moves in 367 msec
Principle Variation = a8 c8, f2 d3, g6 g4, f3 f7, b6 b5, d5 x e6
R...K.R.
...N....
.P.P....
P.PpP...
p.p.p...
.p...rp.
.....n.p
.....rk.
move  1: val =   279  g8 g6
move  2: val =   475  g8 x g3
move  3: val =   279  a8 d8
move  4: val =   281  a8 a7
move  5: val =   279  a8 a6
move  6: val =   279  e8 d8
move  7: val =   281  e8 e7
move  8: val =   279  g8 f8
move  9: val =   281  g8 h8
move 10: val =   279  g8 g7
move 11: val =   281  a8 b8
move 12: val =   281  g8 g5
move 13: val =   281  g8 g4
move 14: val =   279  a8 c8
move 15: val =   280  d7 b8
move 16: val =   281  d7 f8
move 17: val =   281  d7 f6
move 18: val =   281  b6 b5
BEST MOVE:  a8 c8 val = 279, moveNum = 1038574, time = 367 msec
Board("..R.K.R. ...N.... .P.P.... P.PpP... p.p.p... .p...rp. .....n.p .....rk.", "033");
--- Human: h2 h4
BEST MOVE:  g8 x g3, val=79, 18 moves in 1 msec
Principle Variation = g8 x g3
BEST MOVE:  d7 b8, val=183, 307 moves in 1 msec
Principle Variation = d7 b8, g3 g4
BEST MOVE:  d7 f8, val=83, 1825 moves in 3 msec
Principle Variation = d7 f8, h4 h5, g8 x g3
BEST MOVE:  g8 f8, val=181, 13008 moves in 13 msec
Principle Variation = g8 f8, f2 d3, f8 x f3, g3 g4
BEST MOVE:  e8 e7, val=81, 96431 moves in 54 msec
Principle Variation = e8 e7, h4 h5, d7 f6, g3 g4, b6 b5
BEST MOVE:  d7 b8, val=281, 932079 moves in 366 msec
Principle Variation = d7 b8, f2 d3, d7 b8, f2 d3, f6 h7, g3 g4
..R.K.R.
...N....
.P.P....
P.PpP...
p.p.p..p
.p...rp.
.....n..
.....rk.
move  1: val =   285  e8 e7
move  2: val =   485  g8 x g3
move  3: val =   283  c8 d8
move  4: val =   285  c8 c7
move  5: val =   285  c8 c6
move  6: val =   283  e8 d8
move  7: val =   285  c8 b8
move  8: val =   283  g8 f8
move  9: val =   281  g8 h8
move 10: val =   281  g8 g7
move 11: val =   283  g8 g6
move 12: val =   510  g8 g5
move 13: val =   455  g8 g4
move 14: val =   283  c8 a8
move 15: val =   281  d7 b8
move 16: val =   283  d7 f8
move 17: val =   406  d7 f6
move 18: val =   285  b6 b5
BEST MOVE:  d7 b8 val = 281, moveNum = 932079, time = 366 msec
Board(".NR.K.R. ........ .P.P.... P.PpP... p.p.p..p .p...rp. .....n.. .....rk.", "033");
--- Human: g3 g4
BEST MOVE:  g8 x g4, val=83, 16 moves in 1 msec
Principle Variation = g8 x g4
BEST MOVE:  b8 d7, val=187, 312 moves in 2 msec
Principle Variation = b8 d7, b3 b4
BEST MOVE:  b8 d7, val=87, 2011 moves in 4 msec
Principle Variation = b8 d7, g4 g5, g8 x g5
BEST MOVE:  g8 f8, val=187, 14793 moves in 17 msec
Principle Variation = g8 f8, f3 f5, f8 x f5, g4 x e5
BEST MOVE:  b8 a6, val=85, 116650 moves in 73 msec
Principle Variation = b8 a6, g4 g5, a6 b4, h4 h5, b6 b5
BEST MOVE:  b8 d7, val=283, 706494 moves in 255 msec
Principle Variation = b8 d7, f3 f5, d7 e8, f3 d3, e8 f7, g8 x c8
.NR.K.R.
........
.P.P....
P.PpP...
p.p.p.pp
.p...r..
.....n..
.....rk.
move  1: val =   287  b8 a6
move  2: val =   359  g8 x g4
move  3: val =   415  b8 c6
move  4: val =   287  c8 d8
move  5: val =   287  c8 c7
move  6: val =   289  c8 c6
move  7: val =   287  e8 d8
move  8: val =   283  e8 d7
move  9: val =   283  e8 e7
move 10: val =   285  g8 f8
move 11: val =   285  g8 h8
move 12: val =   285  g8 g7
move 13: val =   287  g8 g6
move 14: val =   695  g8 g5
move 15: val =   283  b8 d7
move 16: val =   285  b6 b5
BEST MOVE:  b8 d7 val = 283, moveNum = 706494, time = 255 msec
Board("..R.K.R. ...N.... .P.P.... P.PpP... p.p.p.pp .p...r.. .....n.. .....rk.", "033");
--- Human: g4 g5
BEST MOVE:  g8 x g5, val=87, 16 moves in 1 msec
Principle Variation = g8 x g5
BEST MOVE:  d7 b8, val=191, 322 moves in 1 msec
Principle Variation = d7 b8, b3 b4
BEST MOVE:  d7 f8, val=91, 2000 moves in 5 msec
Principle Variation = d7 f8, h4 h5, g8 x g6
BEST MOVE:  g8 f8, val=189, 14888 moves in 17 msec
Principle Variation = g8 f8, f2 d3, f8 x f3, b3 b4
BEST MOVE:  g8 g6, val=91, 143685 moves in 80 msec
Principle Variation = g8 g6, g1 h1, e7 e8, h4 h5, d7 x f8
BEST MOVE:  g8 h8, val=199, 915861 moves in 339 msec
Principle Variation = g8 h8, g5 g6, d7 b8, f2 d3, b6 b5, d5 x c6
..R.K.R.
...N....
.P.P....
P.PpP.p.
p.p.p..p
.p...r..
.....n..
.....rk.
move  1: val =   291  g8 g6
move  2: val =   418  g8 x g5
move  3: val =   289  c8 d8
move  4: val =   289  c8 c7
move  5: val =   291  c8 c6
move  6: val =   289  e8 d8
move  7: val =   289  e8 e7
move  8: val =   291  g8 f8
move  9: val =   199  g8 h8
move 10: val =   283  g8 g7
move 11: val =   283  c8 b8
move 12: val =   283  c8 a8
move 13: val =   279  d7 b8
move 14: val =   286  d7 f8
move 15: val =   287  d7 f6
move 16: val =   283  b6 b5
BEST MOVE:  g8 h8 val = 199, moveNum = 915861, time = 339 msec
Board("..R.K..R ...N.... .P.P.... P.PpP.p. p.p.p..p .p...r.. .....n.. .....rk.", "033");
--- Human: f3 h3
BEST MOVE:  h8 x h4, val=85, 19 moves in 1 msec
Principle Variation = h8 x h4
BEST MOVE:  d7 f8, val=189, 371 moves in 1 msec
Principle Variation = d7 f8, b3 b4
BEST MOVE:  h8 f8, val=-136, 1566 moves in 4 msec
Principle Variation = h8 f8, g5 g6, f8 x f2
BEST MOVE:  h8 f8, val=191, 8149 moves in 9 msec
Principle Variation = h8 f8, h4 h5, f8 f4, b3 b4
BEST MOVE:  b6 b5, val=83, 100366 moves in 72 msec
Principle Variation = b6 b5, f2 d3, b5 x a4, b3 b4, e5 x f4
BEST MOVE:  h8 f8, val=287, 502697 moves in 181 msec
Principle Variation = h8 f8, f1 e1, b6 b5, f1 d1, b6 b5, e5 x d7
..R.K..R
...N....
.P.P....
P.PpP.p.
p.p.p..p
.p.....r
.....n..
.....rk.
move  1: val =   383  b6 b5
move  2: val =   489  h8 x h4
move  3: val =   289  c8 d8
move  4: val =   289  c8 c7
move  5: val =   290  c8 c6
move  6: val =   291  e8 d8
move  7: val =   291  e8 f8
move  8: val =   289  e8 e7
move  9: val =   291  e8 f7
move 10: val =   289  h8 g8
move 11: val =   287  h8 f8
move 12: val =   289  h8 h7
move 13: val =   289  h8 h6
move 14: val =   289  h8 h5
move 15: val =   289  c8 a8
move 16: val =   288  d7 b8
move 17: val =   289  d7 f8
move 18: val =   420  d7 f6
move 19: val =   289  c8 b8
BEST MOVE:  h8 f8 val = 287, moveNum = 502697, time = 181 msec
Board("..R.KR.. ...N.... .P.P.... P.PpP.p. p.p.p..p .p.....r .....n.. .....rk.", "033");
--- Human: f2 g4
BEST MOVE:  f8 x f1, val=-315, 19 moves in 3 msec
Principle Variation = f8 x f1
BEST MOVE:  f8 x f1, val=185, 77 moves in 2 msec
Principle Variation = f8 x f1, g1 x f1
BEST MOVE:  f8 h8, val=89, 967 moves in 3 msec
Principle Variation = f8 h8, h4 h5, g8 x g5
BEST MOVE:  b6 b5, val=287, 13177 moves in 17 msec
Principle Variation = b6 b5, f1 x f8, b6 b5, g4 x e5
BEST MOVE:  f8 g8, val=91, 86487 moves in 57 msec
Principle Variation = f8 g8, f1 f5, c8 b8, f1 x f8, d6 x e5
BEST MOVE:  f8 f4, val=284, 682031 moves in 251 msec
Principle Variation = f8 f4, f1 x f4, e5 x f4, e4 x f5, b6 b5, h4 x g5
..R.KR..
...N....
.P.P....
P.PpP.p.
p.p.p.np
.p.....r
........
.....rk.
move  1: val =   293  f8 g8
move  2: val =   291  f8 x f1
move  3: val =   293  c8 d8
move  4: val =   293  c8 c7
move  5: val =   292  c8 c6
move  6: val =   293  e8 d8
move  7: val =   291  e8 e7
move  8: val =   293  c8 b8
move  9: val =   293  f8 h8
move 10: val =   293  f8 f7
move 11: val =   689  f8 f6
move 12: val =   383  f8 f5
move 13: val =   284  f8 f4
move 14: val =   463  f8 f3
move 15: val =   593  f8 f2
move 16: val =   288  c8 a8
move 17: val =   288  d7 b8
move 18: val =   510  d7 f6
move 19: val =   293  b6 b5
BEST MOVE:  f8 f4 val = 284, moveNum = 682031, time = 251 msec
Board("..R.K... ...N.... .P.P.... P.PpP.p. p.p.pRnp .p.....r ........ .....rk.", "033");
--- Human: g4 f2
BEST MOVE:  f4 x f2, val=-140, 22 moves in 1 msec
Principle Variation = f4 x f2
BEST MOVE:  f4 f8, val=0, 231 moves in 1 msec
Principle Variation = f4 f8, b3 b4
BEST MOVE:  c8 d8, val=-136, 5736 moves in 9 msec
Principle Variation = c8 d8, g5 g6, f4 x f2
BEST MOVE:  f4 f8, val=0, 17292 moves in 15 msec
Principle Variation = f4 f8, h4 h5, d8 c8, b3 b4
BEST MOVE:  f4 f8, val=0, 237740 moves in 110 msec
Principle Variation = f4 f8, h4 h5, d8 c8, b3 b4, `: `:
BEST MOVE:  f4 f8, val=0, 264953 moves in 16 msec
Principle Variation = f4 f8, h4 h5, d8 c8, b3 b4, `: `:, `: `:
..R.K...
...N....
.P.P....
P.PpP.p.
p.p.pR.p
.p.....r
.....n..
.....rk.
move  1: val =     0  f4 f8
move  2: val =    89  f4 x e4
move  3: val =   489  f4 x h4
move  4: val =   193  c8 c7
move  5: val =   193  c8 c6
move  6: val =   193  e8 d8
move  7: val =   193  e8 f8
move  8: val =   193  e8 e7
move  9: val =   193  e8 f7
move 10: val =   193  d7 b8
move 11: val =   193  d7 f8
move 12: val =    15  d7 f6
move 13: val =   185  b6 b5
move 14: val =    91  f4 f5
move 15: val =   193  f4 f6
move 16: val =   193  f4 f7
move 17: val =   193  c8 b8
move 18: val =   193  c8 a8
move 19: val =   461  f4 g4
move 20: val =   193  c8 d8
move 21: val =   193  f4 f3
move 22: val =   189  f4 x f2
BEST MOVE:  f4 f8 val = 0, moveNum = 264953, time = 16 msec
Board("..R.KR.. ...N.... .P.P.... P.PpP.p. p.p.p..p .p.....r .....n.. .....rk.", "033");
--- Human: h4 h5
BEST MOVE:  f8 x f2, val=-136, 19 moves in 2 msec
Principle Variation = f8 x f2
BEST MOVE:  f8 f4, val=191, 297 moves in 2 msec
Principle Variation = f8 f4, b3 b4
BEST MOVE:  d7 b8, val=-132, 1959 moves in 4 msec
Principle Variation = d7 b8, g5 g6, f4 x f2
BEST MOVE:  c8 b8, val=195, 15982 moves in 17 msec
Principle Variation = c8 b8, h5 h6, f8 f4, b3 b4
BEST MOVE:  f8 g8, val=-9, 137271 moves in 75 msec
Principle Variation = f8 g8, f2 d3, g8 x g5, h5 h6, e2 x e4
BEST MOVE:  f8 g8, val=195, 268806 moves in 60 msec
Principle Variation = f8 g8, g5 g6, d7 f6, h5 h6, g8 x g5, b3 b4
..R.KR..
...N....
.P.P....
P.PpP.pp
p.p.p...
.p.....r
.....n..
.....rk.
move  1: val =   195  f8 g8
move  2: val =   372  f8 x f2
move  3: val =   197  c8 d8
move  4: val =   197  c8 c7
move  5: val =   289  c8 c6
move  6: val =   197  e8 d8
move  7: val =   197  e8 e7
move  8: val =   293  e8 f7
move  9: val =   197  c8 b8
move 10: val =   197  f8 h8
move 11: val =   197  f8 f7
move 12: val =   291  f8 f6
move 13: val =   698  f8 f5
move 14: val =   199  f8 f4
move 15: val =   518  f8 f3
move 16: val =   197  c8 a8
move 17: val =   197  d7 b8
move 18: val =   197  d7 f6
move 19: val =   197  b6 b5
BEST MOVE:  f8 g8 val = 195, moveNum = 268806, time = 60 msec
Board("..R.K.R. ...N.... .P.P.... P.PpP.pp p.p.p... .p.....r .....n.. .....rk.", "033");
--- Human: g5 g6
BEST MOVE:  g8 x g6, val=93, 16 moves in 2 msec
Principle Variation = g8 x g6
BEST MOVE:  d7 f6, val=195, 355 moves in 1 msec
Principle Variation = d7 f6, b3 b4
BEST MOVE:  g8 f8, val=-128, 888 moves in 2 msec
Principle Variation = g8 f8, g6 g7, f8 x f2
BEST MOVE:  d7 f6, val=195, 25457 moves in 29 msec
Principle Variation = d7 f6, g1 h1, c8 c7, b3 b4
BEST MOVE:  b6 b5, val=91, 80524 moves in 41 msec
Principle Variation = b6 b5, f2 d3, c8 b8, b3 b4, a5 x b4
BEST MOVE:  d7 f6, val=295, 555842 moves in 215 msec
Principle Variation = d7 f6, h3 h4, d7 b8, g1 h1, b5 x c4, b3 b4
..R.K.R.
...N....
.P.P..p.
P.PpP..p
p.p.p...
.p.....r
.....n..
.....rk.
move  1: val =   393  b6 b5
move  2: val =   505  g8 x g6
move  3: val =   297  c8 d8
move  4: val =   297  c8 c7
move  5: val =   299  c8 c6
move  6: val =   297  e8 d8
move  7: val =   299  e8 f8
move  8: val =   297  e8 e7
move  9: val =   295  g8 f8
move 10: val =   297  g8 h8
move 11: val =   297  g8 g7
move 12: val =   297  c8 a8
move 13: val =   297  d7 b8
move 14: val =   297  d7 f8
move 15: val =   295  d7 f6
move 16: val =   297  c8 b8
BEST MOVE:  d7 f6 val = 295, moveNum = 555842, time = 215 msec
Board("..R.K.R. ........ .P.P.Np. P.PpP..p p.p.p... .p.....r .....n.. .....rk.", "033");
--- Human: h3 h4
BEST MOVE:  g8 x g5, val=89, 18 moves in 1 msec
Principle Variation = g8 x g5
BEST MOVE:  g8 x g5, val=93, 73 moves in 1 msec
Principle Variation = g8 x g5, b3 b4
BEST MOVE:  g8 f8, val=-132, 968 moves in 2 msec
Principle Variation = g8 f8, g5 g6, f8 x f2
BEST MOVE:  g8 x g5, val=191, 4786 moves in 6 msec
Principle Variation = g8 x g5, f2 g4, b6 b5, b3 b4
BEST MOVE:  g8 x g5, val=-13, 78928 moves in 56 msec
Principle Variation = g8 x g5, g1 h1, d7 f6, f2 d3, g5 x g4
BEST MOVE:  e8 e7, val=195, 509655 moves in 196 msec
Principle Variation = e8 e7, g5 g6, c8 a8, h5 h6, g3 x b3, b3 x c4
..R.K.R.
...N....
.P.P....
P.PpP.pp
p.p.p..r
.p......
.....n..
.....rk.
move  1: val =   195  g8 x g5
move  2: val =   197  c8 a8
move  3: val =   197  c8 d8
move  4: val =   197  c8 c7
move  5: val =   293  c8 c6
move  6: val =   197  e8 d8
move  7: val =   197  e8 f8
move  8: val =   195  e8 e7
move  9: val =   197  e8 f7
move 10: val =   201  g8 f8
move 11: val =   197  g8 h8
move 12: val =   197  g8 g7
move 13: val =   601  g8 g6
move 14: val =   197  c8 b8
move 15: val =   197  d7 b8
move 16: val =   197  d7 f8
move 17: val =   197  d7 f6
move 18: val =   197  b6 b5
BEST MOVE:  e8 e7 val = 195, moveNum = 509655, time = 196 msec
Board("..R...R. ...NK... .P.P.... P.PpP.pp p.p.p..r .p...... .....n.. .....rk.", "033");
--- Human: f2 h3
BEST MOVE:  g8 x g5, val=89, 20 moves in 2 msec
Principle Variation = g8 x g5
BEST MOVE:  e7 e8, val=193, 346 moves in 1 msec
Principle Variation = e7 e8, b3 b4
BEST MOVE:  d7 f6, val=87, 1961 moves in 4 msec
Principle Variation = d7 f6, g5 g6, f6 x e4
BEST MOVE:  g8 f8, val=193, 10155 moves in 11 msec
Principle Variation = g8 f8, g5 g6, f8 x f1, a4 x b5
BEST MOVE:  c8 a8, val=93, 95055 moves in 66 msec
Principle Variation = c8 a8, g1 h1, e7 e8, h5 h6, b6 b5
BEST MOVE:  g8 f8, val=197, 453012 moves in 161 msec
Principle Variation = g8 f8, h5 h6, g8 h8, f1 f5, a5 x b4, b3 b4
..R...R.
...NK...
.P.P....
P.PpP.pp
p.p.p..r
.p.....n
........
.....rk.
move  1: val =   201  c8 a8
move  2: val =   272  g8 x g5
move  3: val =   201  c8 d8
move  4: val =   201  c8 e8
move  5: val =   197  c8 f8
move  6: val =   201  c8 c7
move  7: val =   291  c8 c6
move  8: val =   197  g8 f8
move  9: val =   201  g8 e8
move 10: val =   201  g8 d8
move 11: val =   199  g8 h8
move 12: val =   199  g8 g7
move 13: val =   201  g8 g6
move 14: val =   199  c8 b8
move 15: val =   199  d7 b8
move 16: val =   201  d7 f8
move 17: val =   291  d7 f6
move 18: val =   201  e7 d8
move 19: val =   201  e7 e8
move 20: val =   293  b6 b5
BEST MOVE:  g8 f8 val = 197, moveNum = 453012, time = 161 msec
Board("..R..R.. ...NK... .P.P.... P.PpP.pp p.p.p..r .p.....n ........ .....rk.", "033");
--- Human: f1 f8
BEST MOVE:  e7 x f8, val=189, 12 moves in 1 msec
Principle Variation = e7 x f8
BEST MOVE:  d7 x f8, val=193, 69 moves in 1 msec
Principle Variation = d7 x f8, b3 b4
BEST MOVE:  e7 x f8, val=189, 637 moves in 2 msec
Principle Variation = e7 x f8, g5 g6, b6 b5
BEST MOVE:  c8 x f8, val=195, 2435 moves in 4 msec
Principle Variation = c8 x f8, h5 h6, f8 f3, b3 b4
BEST MOVE:  c8 x f8, val=93, 7440 moves in 8 msec
Principle Variation = c8 x f8, g1 g2, f8 h8, h5 h6, a5 a4
BEST MOVE:  d7 x f8, val=199, 72848 moves in 55 msec
Principle Variation = d7 x f8, h5 h6, f8 h7, h6 h7, e7 f7, b3 b4
..R..r..
...NK...
.P.P....
P.PpP.pp
p.p.p..r
.p.....n
........
......k.
move  1: val =   201  c8 x f8
move  2: val =   199  d7 x f8
move  3: val =   201  e7 x f8
move  4: val =   695  c8 e8
move  5: val =   695  c8 b8
move  6: val =   289  c8 c7
move  7: val =   692  c8 c6
move  8: val =   789  d7 b8
move  9: val =   789  c8 a8
move 10: val =   420  d7 f6
move 11: val =   695  c8 d8
move 12: val =   293  b6 b5
BEST MOVE:  d7 x f8 val = 199, moveNum = 72848, time = 55 msec
Board("..R..N.. ....K... .P.P.... P.PpP.pp p.p.p..r .p.....n ........ ......k.", "033");
--- Human: g5 g6
BEST MOVE:  f8 x g6, val=93, 15 moves in 0 msec
Principle Variation = f8 x g6
BEST MOVE:  e7 f6, val=195, 177 moves in 1 msec
Principle Variation = e7 f6, b3 b4
BEST MOVE:  e7 f6, val=97, 944 moves in 2 msec
Principle Variation = e7 f6, g6 g7, f6 x g7
BEST MOVE:  e7 f6, val=195, 2864 moves in 4 msec
Principle Variation = e7 f6, g1 h1, c8 d8, b3 b4
BEST MOVE:  f8 d7, val=95, 22279 moves in 23 msec
Principle Variation = f8 d7, g6 g7, c8 c7, h5 h6, f8 x g6
BEST MOVE:  f8 d7, val=293, 86110 moves in 50 msec
Principle Variation = f8 d7, h3 f2, d7 f6, g5 f3, c8 g8, b3 b4
..R..N..
....K...
.P.P..p.
P.PpP..p
p.p.p..r
.p.....n
........
......k.
move  1: val =   293  f8 d7
move  2: val =   326  f8 x g6
move  3: val =   305  c8 d8
move  4: val =   305  c8 e8
move  5: val =   414  c8 c7
move  6: val =   602  c8 c6
move  7: val =   305  c8 b8
move  8: val =   424  f8 h7
move  9: val =   425  f8 e6
move 10: val =   305  c8 a8
move 11: val =   414  e7 d8
move 12: val =   414  e7 e8
move 13: val =   305  e7 d7
move 14: val =   295  e7 f6
move 15: val =   299  b6 b5
BEST MOVE:  f8 d7 val = 293, moveNum = 86110, time = 50 msec
Board("..R..... ...NK... .P.P..p. P.PpP..p p.p.p..r .p.....n ........ ......k.", "033");
--- Human: g6 g7
BEST MOVE:  b6 b5, val=193, 17 moves in 1 msec
Principle Variation = b6 b5
BEST MOVE:  c8 g8, val=201, 87 moves in 1 msec
Principle Variation = c8 g8, b3 b4
BEST MOVE:  d7 f6, val=95, 1301 moves in 2 msec
Principle Variation = d7 f6, g7 g8-b, c8 x g8
BEST MOVE:  c8 g8, val=203, 4908 moves in 7 msec
Principle Variation = c8 g8, h5 h6, e7 f6, b3 b4
BEST MOVE:  e7 f7, val=99, 37653 moves in 33 msec
Principle Variation = e7 f7, h5 h6, d7 f6, b3 b4, a5 x b4
BEST MOVE:  d7 f6, val=430, 148415 moves in 70 msec
Principle Variation = d7 f6, h5 h6, d7 f8, h1 g1, b6 b5, a4 x b5
..R.....
...NK.p.
.P.P....
P.PpP..p
p.p.p..r
.p.....n
........
......k.
move  1: val =   893  e7 f7
move  2: val =   893  c8 a8
move  3: val =   893  c8 d8
move  4: val =   893  c8 e8
move  5: val =   897  c8 f8
move  6: val =   430  c8 g8
move  7: val =   505  c8 h8
move  8: val =   499  c8 c7
move  9: val =   526  c8 c6
move 10: val =   493  d7 b8
move 11: val =   505  d7 f8
move 12: val =   430  d7 f6
move 13: val =   499  e7 d8
move 14: val =   499  e7 e8
move 15: val =   493  c8 b8
move 16: val =   491  e7 f6
move 17: val =   489  b6 b5
BEST MOVE:  d7 f6 val = 430, moveNum = 148415, time = 70 msec
Board("..R..... ....K.p. .P.P.N.. P.PpP..p p.p.p..r .p.....n ........ ......k.", "033");
--- Human: h5 h6
BEST MOVE:  f6 x e4, val=95, 22 moves in 2 msec
Principle Variation = f6 x e4
BEST MOVE:  c8 g8, val=203, 119 moves in 1 msec
Principle Variation = c8 g8, b3 b4
BEST MOVE:  c8 d8, val=99, 1990 moves in 4 msec
Principle Variation = c8 d8, g7 g8-b, f6 x e4
BEST MOVE:  c8 g8, val=430, 11013 moves in 14 msec
Principle Variation = c8 g8, h6 h7, f6 x h7, h7 h8-q
BEST MOVE:  f6 h7, val=99, 74500 moves in 49 msec
Principle Variation = f6 h7, g1 h1, g8 c8, b3 b4, g8 x g7
BEST MOVE:  c8 g8, val=426, 281849 moves in 108 msec
Principle Variation = c8 g8, h3 g5, b6 b5, g1 h1, c8 g8, b3 b4
..R.....
....K.p.
.P.P.N.p
P.PpP...
p.p.p..r
.p.....n
........
......k.
move  1: val =   530  f6 h7
move  2: val =   547  f6 x d5
move  3: val =   531  f6 x e4
move  4: val =   434  c8 e8
move  5: val =   603  c8 f8
move  6: val =   426  c8 g8
move  7: val =   428  c8 h8
move  8: val =   428  c8 c7
move  9: val =   428  c8 c6
move 10: val =   428  e7 d8
move 11: val =   428  e7 e8
move 12: val =   428  e7 d7
move 13: val =   428  e7 f7
move 14: val =   428  b6 b5
move 15: val =   428  f6 e8
move 16: val =   428  f6 g8
move 17: val =   428  f6 d7
move 18: val =   428  c8 b8
move 19: val =   428  c8 a8
move 20: val =   428  f6 h5
move 21: val =   428  c8 d8
move 22: val =   428  f6 g4
BEST MOVE:  c8 g8 val = 426, moveNum = 281849, time = 108 msec
Board("......R. ....K.p. .P.P.N.p P.PpP... p.p.p..r .p.....n ........ ......k.", "033");
--- Human: h3 g5
BEST MOVE:  f6 x e4, val=95, 19 moves in 1 msec
Principle Variation = f6 x e4
BEST MOVE:  e7 d7, val=203, 132 moves in 2 msec
Principle Variation = e7 d7, b3 b4
BEST MOVE:  g8 c8, val=99, 1734 moves in 4 msec
Principle Variation = g8 c8, g7 g8-b, f6 x e4
BEST MOVE:  b6 b5, val=426, 8361 moves in 11 msec
Principle Variation = b6 b5, h6 h7, f6 x h7, b3 b4
BEST MOVE:  g8 c8, val=103, 55785 moves in 40 msec
Principle Variation = g8 c8, h6 h7, b8 d8, b3 x c4, g8 x g7
BEST MOVE:  g8 d8, val=434, 325948 moves in 133 msec
Principle Variation = g8 d8, b3 b4, c8 g8, b3 b4, c8 g8, b3 b4
......R.
....K.p.
.P.P.N.p
P.PpP.n.
p.p.p..r
.p......
........
......k.
move  1: val =   434  g8 c8
move  2: val =   503  g8 x g7
move  3: val =   507  f6 x d5
move  4: val =   523  f6 x e4
move  5: val =   434  g8 b8
move  6: val =   434  g8 a8
move  7: val =   499  g8 h8
move  8: val =   434  g8 e8
move  9: val =   434  e7 d8
move 10: val =   434  e7 e8
move 11: val =   434  e7 d7
move 12: val =   520  b6 b5
move 13: val =   436  f6 e8
move 14: val =   501  f6 d7
move 15: val =   524  f6 h7
move 16: val =   434  g8 d8
move 17: val =   605  f6 h5
move 18: val =   499  g8 f8
move 19: val =   605  f6 g4
BEST MOVE:  g8 d8 val = 434, moveNum = 325948, time = 133 msec
Board("...R.... ....K.p. .P.P.N.p P.PpP.n. p.p.p..r .p...... ........ ......k.", "033");
--- Human: h6 h7
BEST MOVE:  f6 x e4, val=99, 19 moves in 2 msec
Principle Variation = f6 x e4
BEST MOVE:  f6 x d5, val=899, 143 moves in 2 msec
Principle Variation = f6 x d5, h7 h8-q
BEST MOVE:  d8 a8, val=103, 2553 moves in 4 msec
Principle Variation = d8 a8, b3 b4, a5 x b4
BEST MOVE:  f6 x h7, val=434, 6634 moves in 7 msec
Principle Variation = f6 x h7, h4 x h7, d8 g8, h8 x g8
BEST MOVE:  f6 x h7, val=332, 29184 moves in 22 msec
Principle Variation = f6 x h7, h4 x h7, e7 f6, g5 f3, g8 x g7
BEST MOVE:  f6 x h7, val=532, 154171 moves in 78 msec
Principle Variation = f6 x h7, g5 e6, d8 g8, g5 f3, b6 b5, b3 b4
...R....
....K.pp
.P.P.N..
P.PpP.n.
p.p.p..r
.p......
........
......k.
move  1: val =   532  f6 x h7
move  2: val =   550  f6 x d5
move  3: val =   550  f6 x e4
move  4: val =   534  d8 e8
move  5: val =   727  d8 f8
move  6: val =   555  d8 g8
move  7: val =   828  d8 h8
move  8: val =   605  d8 d7
move  9: val =   605  e7 e8
move 10: val =   534  e7 d7
move 11: val =   603  b6 b5
move 12: val =   647  f6 e8
move 13: val =   603  f6 g8
move 14: val =   605  f6 d7
move 15: val =   534  d8 c8
move 16: val =   534  d8 b8
move 17: val =   651  f6 h5
move 18: val =   534  d8 a8
move 19: val =   651  f6 g4
BEST MOVE:  f6 x h7 val = 532, moveNum = 154171, time = 78 msec
Board("...R.... ....K.pN .P.P.... P.PpP.n. p.p.p..r .p...... ........ ......k.", "033");
--- Human: h4 h7
BEST MOVE:  b6 b5, val=426, 12 moves in 1 msec
Principle Variation = b6 b5
BEST MOVE:  d8 g8, val=434, 82 moves in 0 msec
Principle Variation = d8 g8, b3 b4
BEST MOVE:  e7 f6, val=332, 1121 moves in 3 msec
Principle Variation = e7 f6, g5 f3, g8 x g7
BEST MOVE:  d8 g8, val=532, 3830 moves in 5 msec
Principle Variation = d8 g8, g5 e6, b6 b5, f3 x e5
BEST MOVE:  d8 g8, val=330, 28619 moves in 28 msec
Principle Variation = d8 g8, g1 h1, e7 f6, g1 h1, g8 x g7
BEST MOVE:  d8 g8, val=820, 76107 moves in 38 msec
Principle Variation = d8 g8, g5 e6, b6 b5, h7 h8, e7 f6, a4 x b5
...R....
....K.pr
.P.P....
P.PpP.n.
p.p.p...
.p......
........
......k.
move  1: val =   820  d8 g8
move  2: val =   830  d8 b8
move  3: val =   830  d8 a8
move  4: val =   830  d8 e8
move  5: val =   830  d8 f8
move  6: val =   830  d8 c8
move  7: val =   830  d8 h8
move  8: val =   828  d8 d7
move  9: val =   930  e7 e8
move 10: val =   830  e7 d7
move 11: val =   826  e7 f6
move 12: val =   822  b6 b5
BEST MOVE:  d8 g8 val = 820, moveNum = 76107, time = 38 msec
Board("......R. ....K.pr .P.P.... P.PpP.n. p.p.p... .p...... ........ ......k.", "033");
--- Human: g5 e6
BEST MOVE:  g8 x g7, val=332, 13 moves in 0 msec
Principle Variation = g8 x g7
BEST MOVE:  b6 b5, val=532, 171 moves in 1 msec
Principle Variation = b6 b5, a4 x b5
BEST MOVE:  b6 b5, val=318, 662 moves in 1 msec
Principle Variation = b6 b5, e6 g5, b5 x c4
BEST MOVE:  b6 b5, val=820, 5981 moves in 9 msec
Principle Variation = b6 b5, h7 h8, b5 x c4, h8 x g8
BEST MOVE:  e7 f7, val=428, 42959 moves in 38 msec
Principle Variation = e7 f7, h7 h8, e7 f7, h8 x g8, g8 x g7
BEST MOVE:  e7 f7, val=820, 185409 moves in 75 msec
Principle Variation = e7 f7, g1 h1, b6 b5, h7 h8, f7 x g7, b3 b4
......R.
....K.pr
.P.Pn...
P.PpP...
p.p.p...
.p......
........
......k.
move  1: val =   820  e7 f7
move  2: val =   930  g8 x g7
move  3: val =   824  g8 d8
move  4: val =   824  g8 c8
move  5: val =   824  g8 b8
move  6: val =   824  g8 a8
move  7: val =   830  g8 h8
move  8: val =   828  g8 e8
move  9: val =   830  e7 e8
move 10: val =   828  e7 d7
move 11: val =   824  g8 f8
move 12: val =   830  e7 f6
move 13: val =   828  b6 b5
BEST MOVE:  e7 f7 val = 820, moveNum = 185409, time = 75 msec
Board("......R. .....Kpr .P.Pn... P.PpP... p.p.p... .p...... ........ ......k.", "033");
--- Human: g1 g2
BEST MOVE:  g8 x g7, val=332, 13 moves in 1 msec
Principle Variation = g8 x g7
BEST MOVE:  b6 b5, val=532, 167 moves in 1 msec
Principle Variation = b6 b5, a4 x b5
BEST MOVE:  b6 b5, val=318, 679 moves in 2 msec
Principle Variation = b6 b5, e6 g5, b5 x c4
BEST MOVE:  b6 b5, val=820, 9129 moves in 13 msec
Principle Variation = b6 b5, h7 h8, b5 x c4, h8 x g8
BEST MOVE:  g8 e8, val=332, 67488 moves in 49 msec
Principle Variation = g8 e8, h7 h8, b8 b7, b3 x c4, c4 x b3
BEST MOVE:  f7 g6, val=820, 447965 moves in 172 msec
Principle Variation = f7 g6, h7 h3, b6 b5, b3 b4, b5 x c4, b3 b4
......R.
.....Kpr
.P.Pn...
P.PpP...
p.p.p...
.p......
......k.
........
move  1: val =   832  g8 e8
move  2: val =   930  g8 x g7
move  3: val =   834  g8 d8
move  4: val =   832  g8 c8
move  5: val =   832  g8 b8
move  6: val =   832  g8 a8
move  7: val =   834  g8 h8
move  8: val =   924  g8 f8
move  9: val =   832  f7 e8
move 10: val =   832  f7 e7
move 11: val =   830  f7 f6
move 12: val =   820  f7 g6
move 13: val =   828  b6 b5
BEST MOVE:  f7 g6 val = 820, moveNum = 447965, time = 172 msec
Board("......R. ......pr .P.Pn.K. P.PpP... p.p.p... .p...... ......k. ........", "033");
--- Human: g2 g3
BEST MOVE:  g6 x h7, val=-68, 12 moves in 2 msec
Principle Variation = g6 x h7
BEST MOVE:  g6 x h7, val=34, 51 moves in 1 msec
Principle Variation = g6 x h7, e6 x c5
BEST MOVE:  g6 x h7, val=-166, 441 moves in 3 msec
Principle Variation = g6 x h7, g3 f3, h7 x g7
BEST MOVE:  g6 x h7, val=34, 1827 moves in 3 msec
Principle Variation = g6 x h7, g3 f3, b6 b5, a4 x b5
BEST MOVE:  g6 x h7, val=-166, 9136 moves in 11 msec
Principle Variation = g6 x h7, g3 f3, h7 h6, f3 e3, h7 x g7
BEST MOVE:  g6 x h7, val=11, 29585 moves in 24 msec
Principle Variation = g6 x h7, g3 f3, g8 x g7, e6 x g7, h7 x g7, a4 x b5
......R.
......pr
.P.Pn.K.
P.PpP...
p.p.p...
.p....k.
........
........
move  1: val =    11  g6 x h7
move  2: val =   430  g8 x g7
move  3: val =    34  g8 d8
move  4: val =    34  g8 c8
move  5: val =    34  g8 b8
move  6: val =    34  g8 a8
move  7: val =    34  g8 h8
move  8: val =    34  g8 e8
move  9: val =    26  b6 b5
move 10: val =    34  g6 f7
move 11: val =   330  g8 f8
move 12: val =    34  g6 f6
BEST MOVE:  g6 x h7 val = 11, moveNum = 29585, time = 24 msec
Board("......R. ......pK .P.Pn... P.PpP... p.p.p... .p....k. ........ ........", "033");
--- Human: g1 g2
BEST MOVE:  g8 x g7, val=332, 13 moves in 1 msec
Principle Variation = g8 x g7
BEST MOVE:  b6 b5, val=532, 167 moves in 2 msec
Principle Variation = b6 b5, a4 x b5
BEST MOVE:  b6 b5, val=318, 679 moves in 1 msec
Principle Variation = b6 b5, e6 g5, b5 x c4
BEST MOVE:  b6 b5, val=820, 9129 moves in 13 msec
Principle Variation = b6 b5, h7 h8, b5 x c4, h8 x g8
BEST MOVE:  g8 e8, val=332, 67488 moves in 50 msec
Principle Variation = g8 e8, h7 h8, b8 b7, b3 x c4, c4 x b3
BEST MOVE:  f7 g6, val=820, 447965 moves in 172 msec
Principle Variation = f7 g6, h7 h3, b6 b5, b3 b4, b5 x c4, b3 b4
......R.
.....Kpr
.P.Pn...
P.PpP...
p.p.p...
.p......
......k.
........
move  1: val =   832  g8 e8
move  2: val =   930  g8 x g7
move  3: val =   834  g8 d8
move  4: val =   832  g8 c8
move  5: val =   832  g8 b8
move  6: val =   832  g8 a8
move  7: val =   834  g8 h8
move  8: val =   924  g8 f8
move  9: val =   832  f7 e8
move 10: val =   832  f7 e7
move 11: val =   830  f7 f6
move 12: val =   820  f7 g6
move 13: val =   828  b6 b5
BEST MOVE:  f7 g6 val = 820, moveNum = 447965, time = 172 msec
Board("......R. ......pr .P.Pn.K. P.PpP... p.p.p... .p...... ......k. ........", "033");
--- Human: h7 h8
BEST MOVE:  g8 x h8, val=-68, 13 moves in 1 msec
Principle Variation = g8 x h8
BEST MOVE:  g8 x g7, val=830, 141 moves in 2 msec
Principle Variation = g8 x g7, e6 x g7
BEST MOVE:  b6 b5, val=428, 1154 moves in 2 msec
Principle Variation = b6 b5, h8 x g8, f7 x g8
BEST MOVE:  g8 x g7, val=509, 4111 moves in 5 msec
Principle Variation = g8 x g7, e6 x g7, f7 x g7, h8 x e5
BEST MOVE:  g8 x g7, val=501, 26992 moves in 24 msec
Principle Variation = g8 x g7, e6 x g7, f7 x g7, h8 h1, b6 b5
BEST MOVE:  g8 x g7, val=607, 71030 moves in 31 msec
Principle Variation = g8 x g7, e6 x g7, f7 x g7, h8 h5, b6 b5, e8 x e5
......Rr
.....Kp.
.P.Pn...
P.PpP...
p.p.p...
.p......
........
......k.
move  1: val =   607  g8 x g7
move  2: val =   655  g8 x h8
move  3: val =   757  g8 d8
move  4: val =   751  g8 c8
move  5: val =   824  g8 b8
move  6: val =   751  g8 a8
move  7: val =   755  g8 e8
move  8: val =   830  g8 f8
move  9: val =   634  f7 e8
move 10: val =   630  f7 e7
move 11: val =   628  f7 f6
move 12: val =   630  f7 g6
move 13: val =   609  b6 b5
BEST MOVE:  g8 x g7 val = 607, moveNum = 71030, time = 31 msec
Board(".......r .....KR. .P.Pn... P.PpP... p.p.p... .p...... ........ ......k.", "033");
--- Human: e6 g7
BEST MOVE:  f7 x g7, val=505, 5 moves in 1 msec
Principle Variation = f7 x g7
BEST MOVE:  f7 x g7, val=509, 34 moves in 0 msec
Principle Variation = f7 x g7, b3 b4
BEST MOVE:  f7 x g7, val=501, 216 moves in 1 msec
Principle Variation = f7 x g7, h8 h1, b6 b5
BEST MOVE:  f7 x g7, val=607, 1074 moves in 2 msec
Principle Variation = f7 x g7, h8 h5, b6 b5, e8 x e5
BEST MOVE:  f7 x g7, val=601, 7269 moves in 10 msec
Principle Variation = f7 x g7, h8 b8, b6 b5, a4 x b5, b6 b5
BEST MOVE:  f7 x g7, val=705, 16856 moves in 12 msec
Principle Variation = f7 x g7, h8 d8, b6 b5, c4 x b5, h6 h5, b3 x c4
.......r
.....Kn.
.P.P....
P.PpP...
p.p.p...
.p......
........
......k.
move  1: val =   705  f7 x g7
move  2: val =   709  f7 e7
move  3: val =   707  f7 f6
move  4: val =   707  f7 g6
move  5: val =   707  b6 b5
BEST MOVE:  f7 x g7 val = 705, moveNum = 16856, time = 12 msec
Board(".......r ......K. .P.P.... P.PpP... p.p.p... .p...... ........ ......k.", "033");
--- Human: h8 d8
BEST MOVE:  b6 b5, val=501, 6 moves in 1 msec
Principle Variation = b6 b5
BEST MOVE:  b6 b5, val=605, 34 moves in 0 msec
Principle Variation = b6 b5, a4 x b5
BEST MOVE:  b6 b5, val=601, 133 moves in 1 msec
Principle Variation = b6 b5, a4 x b5, a5 a4
BEST MOVE:  b6 b5, val=705, 598 moves in 1 msec
Principle Variation = b6 b5, c4 x b5, g7 f6, b3 x a4
BEST MOVE:  b6 b5, val=703, 1729 moves in 2 msec
Principle Variation = b6 b5, a4 x b5, a5 a4, b3 x a4, g7 f6
BEST MOVE:  g7 h6, val=709, 42526 moves in 43 msec
Principle Variation = g7 h6, d8 x d6, f6 g5, d8 x d6, f7 g7, d8 x d6
...r....
......K.
.P.P....
P.PpP...
p.p.p...
.p......
........
......k.
move  1: val =   713  b6 b5
move  2: val =   711  g7 h7
move  3: val =   709  g7 f6
move  4: val =   709  g7 g6
move  5: val =   709  g7 h6
move  6: val =   710  g7 f7
BEST MOVE:  g7 h6 val = 709, moveNum = 42526, time = 43 msec
Board("...r.... ........ .P.P...K P.PpP... p.p.p... .p...... ........ ......k.", "033");
--- Human: d8 d6
BEST MOVE:  h6 h5, val=609, 4 moves in 0 msec
Principle Variation = h6 h5
BEST MOVE:  h6 g7, val=707, 64 moves in 1 msec
Principle Variation = h6 g7, d6 x b6
BEST MOVE:  h6 g5, val=705, 150 moves in 0 msec
Principle Variation = h6 g5, d6 x b6, g7 f6
BEST MOVE:  h6 g5, val=709, 813 moves in 2 msec
Principle Variation = h6 g5, d6 e6, b6 b5, b3 b4
BEST MOVE:  h6 g5, val=605, 2313 moves in 3 msec
Principle Variation = h6 g5, d6 x b6, g5 f4, b3 b4, f4 x e4
BEST MOVE:  h6 g5, val=707, 7398 moves in 7 msec
Principle Variation = h6 g5, d6 x b6, g5 f4, b6 e6, f4 x e4, e6 x e5
........
........
.P.r...K
P.PpP...
p.p.p...
.p......
........
......k.
move  1: val =   707  h6 g5
move  2: val =   708  h6 h7
move  3: val =   708  h6 g7
move  4: val =   708  h6 h5
BEST MOVE:  h6 g5 val = 707, moveNum = 7398, time = 7 msec
Board("........ ........ .P.r.... P.PpP.K. p.p.p... .p...... ........ ......k.", "033");
--- Human: d6 b6
BEST MOVE:  g5 f4, val=705, 4 moves in 0 msec
Principle Variation = g5 f4
BEST MOVE:  g5 f4, val=709, 62 moves in 1 msec
Principle Variation = g5 f4, b3 b4
BEST MOVE:  g5 f4, val=605, 137 moves in 0 msec
Principle Variation = g5 f4, b3 b4, a5 x b4
BEST MOVE:  g5 f4, val=707, 871 moves in 2 msec
Principle Variation = g5 f4, b6 e6, f4 x e4, e6 x e5
BEST MOVE:  g5 f4, val=606, 2172 moves in 3 msec
Principle Variation = g5 f4, d5 d6, f4 x e4, d5 d6, e4 d4
BEST MOVE:  g5 g4, val=1406, 23629 moves in 26 msec
Principle Variation = g5 g4, d5 d6, f4 f3, d6 d7, e4 d4, d7 d8-q
........
........
.r......
P.PpP.K.
p.p.p...
.p......
........
......k.
move  1: val =  1406  g5 f4
move  2: val =  1510  g5 h5
move  3: val =  1406  g5 g4
move  4: val =  1510  g5 h4
BEST MOVE:  g5 g4 val = 1406, moveNum = 23629, time = 26 msec
Board("........ ........ .r...... P.PpP... p.p.p.K. .p...... ........ ......k.", "033");
--- Human: d5 d6
BEST MOVE:  g4 f3, val=708, 7 moves in 1 msec
Principle Variation = g4 f3
BEST MOVE:  g4 f4, val=712, 80 moves in 0 msec
Principle Variation = g4 f4, b3 b4
BEST MOVE:  g4 f3, val=608, 202 moves in 0 msec
Principle Variation = g4 f3, b3 b4, a5 x b4
BEST MOVE:  g4 f4, val=1406, 2408 moves in 4 msec
Principle Variation = g4 f4, d6 d7, f3 x e4, d7 d8-q
BEST MOVE:  g4 g3, val=1406, 5128 moves in 5 msec
Principle Variation = g4 g3, d6 d7, f4 f3, d7 d8-q, e4 d4
BEST MOVE:  g4 g5, val=1410, 34511 moves in 32 msec
Principle Variation = g4 g5, d6 d7, g3 f3, b3 b4, a5 x b4, b3 b4
........
........
.r.p....
P.P.P...
p.p.p.K.
.p......
........
......k.
move  1: val =  1410  g4 g3
move  2: val =  1510  g4 h5
move  3: val =  1410  g4 f4
move  4: val =  1510  g4 h4
move  5: val =  1410  g4 f3
move  6: val =  1410  g4 g5
move  7: val =  1510  g4 h3
BEST MOVE:  g4 g5 val = 1410, moveNum = 34511, time = 32 msec
Board("........ ........ .r.p.... P.P.P.K. p.p.p... .p...... ........ ......k.", "033");
--- Human: d6 d7
BEST MOVE:  g5 f4, val=710, 4 moves in 0 msec
Principle Variation = g5 f4
BEST MOVE:  g5 f4, val=1510, 38 moves in 0 msec
Principle Variation = g5 f4, d7 d8-q
BEST MOVE:  g5 f4, val=1406, 111 moves in 1 msec
Principle Variation = g5 f4, d7 d8-q, f4 x e4
BEST MOVE:  g5 f4, val=1410, 718 moves in 1 msec
Principle Variation = g5 f4, b3 b4, a5 x b4, b3 b4
BEST MOVE:  g5 f4, val=1408, 3964 moves in 5 msec
Principle Variation = g5 f4, b6 e6, f4 f3, b6 f6, a5 x b4
BEST MOVE:  g5 f4, val=1513, 26792 moves in 27 msec
Principle Variation = g5 f4, d7 d8-q, f4 x e4, d7 d8-q, e4 f3, d7 d8-q
........
...p....
.r......
P.P.P.K.
p.p.p...
.p......
........
......k.
move  1: val =  1513  g5 f4
move  2: val =  1612  g5 h5
move  3: val =  1514  g5 g4
move  4: val =  1612  g5 h4
BEST MOVE:  g5 f4 val = 1513, moveNum = 26792, time = 27 msec
Board("........ ...p.... .r...... P.P.P... p.p.pK.. .p...... ........ ......k.", "033");
--- Human: d7 d8-q
BEST MOVE:  f4 x e4, val=1406, 5 moves in 1 msec
Principle Variation = f4 x e4
BEST MOVE:  f4 x e4, val=1410, 50 moves in 1 msec
Principle Variation = f4 x e4, b3 b4
BEST MOVE:  f4 x e4, val=1408, 221 moves in 0 msec
Principle Variation = f4 x e4, b6 f6, e4 d4
BEST MOVE:  f4 x e4, val=1513, 2676 moves in 4 msec
Principle Variation = f4 x e4, b6 e6, e4 f3, d6 x e5
BEST MOVE:  f4 x e4, val=1507, 8545 moves in 10 msec
Principle Variation = f4 x e4, b6 b5, e4 e3, d6 x c5, e5 e4
BEST MOVE:  f4 x e4, val=1609, 96507 moves in 63 msec
Principle Variation = f4 x e4, b6 f6, e4 e3, d8 x a5, e3 f3, c5 x e5
...q....
........
.r......
P.P.P...
p.p.pK..
.p......
........
......k.
move  1: val =  1609  f4 x e4
move  2: val =  1610  f4 g4
move  3: val =  1610  f4 e3
move  4: val =  1610  f4 f3
move  5: val =  1610  f4 g3
BEST MOVE:  f4 x e4 val = 1609, moveNum = 96507, time = 63 msec
Board("...q.... ........ .r...... P.P.P... p.p.K... .p...... ........ ......k.", "033");
--- Human: d8 d5
BEST MOVE:  e4 e3, val=1410, 3 moves in 1 msec
Principle Variation = e4 e3
BEST MOVE:  e4 f5, val=1513, 114 moves in 0 msec
Principle Variation = e4 f5, d5 x e5
BEST MOVE:  e4 f4, val=1507, 298 moves in 1 msec
Principle Variation = e4 f4, d5 x c5, e5 e4
BEST MOVE:  e4 f4, val=1605, 1616 moves in 3 msec
Principle Variation = e4 f4, d5 x c5, e5 e4, c5 x a5
BEST MOVE:  e4 e3, val=1513, 6746 moves in 9 msec
Principle Variation = e4 e3, d5 x c5, e3 d3, d5 x c5, e5 e4
BEST MOVE:  e4 f4, val=1616, 105676 moves in 70 msec
Principle Variation = e4 f4, b6 f6, f4 e3, e5 x c5, f4 e4, e5 x a5
........
........
.r......
P.PqP...
p.p.K...
.p......
........
......k.
move  1: val =  1711  e4 e3
move  2: val =  1616  e4 f4
move  3: val =  1617  e4 f5
BEST MOVE:  e4 f4 val = 1616, moveNum = 105676, time = 70 msec
Board("........ ........ .r...... P.PqP... p.p..K.. .p...... ........ ......k.", "033");
--- Human: b6 f6
BEST MOVE:  f4 e3, val=1412, 4 moves in 0 msec
Principle Variation = f4 e3
BEST MOVE:  f4 e3, val=1515, 53 moves in 0 msec
Principle Variation = f4 e3, d5 x e5
BEST MOVE:  f4 g5, val=1410, 277 moves in 1 msec
Principle Variation = f4 g5, f6 f3, e5 e4
BEST MOVE:  f4 e3, val=1616, 5209 moves in 7 msec
Principle Variation = f4 e3, d5 x e5, e3 d3, e5 x c5
BEST MOVE:  f4 e3, val=1515, 8537 moves in 6 msec
Principle Variation = f4 e3, d5 x c5, e3 d3, c5 x e5, d3 x c4
BEST MOVE:  f4 g5, val=1716, 194429 moves in 107 msec
Principle Variation = f4 g5, d5 x e5, g4 h3, d5 d2, e3 f2, e5 x c5
........
........
.....r..
P.PqP...
p.p..K..
.p......
........
......k.
move  1: val = 15995  f4 e3
move  2: val =  1716  f4 g4
move  3: val =  1716  f4 g5
move  4: val = 15995  f4 g3
BEST MOVE:  f4 g5 val = 1716, moveNum = 194429, time = 107 msec
Board("........ ........ .....r.. P.PqP.K. p.p..... .p...... ........ ......k.", "033");
--- Human: d5 e5
BEST MOVE:  g5 h4, val=1517, 2 moves in 0 msec
Principle Variation = g5 h4
BEST MOVE:  g5 g4, val=1618, 88 moves in 0 msec
Principle Variation = g5 g4, e5 x c5
BEST MOVE:  g5 g4, val=1616, 187 moves in 1 msec
Principle Variation = g5 g4, e5 x c5, g4 f3
BEST MOVE:  g5 h4, val=1716, 4059 moves in 5 msec
Principle Variation = g5 h4, e5 x c5, g4 h3, c5 x a5
BEST MOVE:  g5 g4, val=1714, 11111 moves in 13 msec
Principle Variation = g5 g4, e5 x c5, h4 g3, c5 x a5, g4 f3
BEST MOVE:  g5 h4, val=15995, 159585 moves in 90 msec
Principle Variation = g5 h4, g1 h2, g4 h4, e5 h5, h3 h2, g5 x a5
........
........
.....r..
P.P.q.K.
p.p.....
.p......
........
......k.
move  1: val = 15995  g5 g4
move  2: val = 15995  g5 h4
BEST MOVE:  g5 h4 val = 15995, moveNum = 159585, time = 90 msec
Board("........ ........ .....r.. P.P.q... p.p....K .p...... ........ ......k.", "033");
--- Human: e5 h2
BEST MOVE:  h4 g4, val=1514, 2 moves in 1 msec
Principle Variation = h4 g4
BEST MOVE:  h4 g5, val=1518, 82 moves in 0 msec
Principle Variation = h4 g5, b3 b4
BEST MOVE:  h4 g5, val=1512, 286 moves in 0 msec
Principle Variation = h4 g5, f6 f3, g5 f4
BEST MOVE:  h4 g4, val=1618, 4013 moves in 6 msec
Principle Variation = h4 g4, h2 f2, g5 g4, e5 x c5
BEST MOVE:  h4 g5, val=1616, 10184 moves in 11 msec
Principle Variation = h4 g5, h2 d6, g5 g4, e5 x c5, f3 e4
BEST MOVE:  h4 g4, val=15995, 119521 moves in 74 msec
Principle Variation = h4 g4, h2 f4, g5 h5, f6 h6, h4 h3, e5 x c5
........
........
.....r..
P.P.....
p.p....K
.p......
.......q
......k.
move  1: val = 15995  h4 g5
move  2: val = 15995  h4 g4
BEST MOVE:  h4 g4 val = 15995, moveNum = 119521, time = 74 msec
Board("........ ........ .....r.. P.P..... p.p...K. .p...... .......q ......k.", "033");
--- Human: h2 f4
BEST MOVE:  g4 h3, val=1516, 2 moves in 1 msec
Principle Variation = g4 h3
BEST MOVE:  g4 h5, val=1520, 74 moves in 0 msec
Principle Variation = g4 h5, b3 b4
BEST MOVE:  g4 h3, val=1517, 284 moves in 1 msec
Principle Variation = g4 h3, f4 e4, h5 h4
BEST MOVE:  g4 h5, val=15997, 2213 moves in 4 msec
Principle Variation = g4 h5, f6 h6, h3 h2, b3 b4
BEST MOVE:  g4 h3, val=15997, 5699 moves in 8 msec
Principle Variation = g4 h3, f6 h6, h5 h4, c4 c5, `: `:
BEST MOVE:  g4 h5, val=15997, 29471 moves in 25 msec
Principle Variation = g4 h5, f6 h6, h3 h2, c4 c5, `: `:, `: `:
........
........
.....r..
P.P.....
p.p..qK.
.p......
........
......k.
move  1: val = 15997  g4 h3
move  2: val = 15997  g4 h5
BEST MOVE:  g4 h5 val = 15997, moveNum = 29471, time = 25 msec
Board("........ ........ .....r.. P.P....K p.p..q.. .p...... ........ ......k.", "033");
--- Human: f6 h6


Computer's move: g1f3
tscp> c7c5
Computer's move: c2c4
tscp> e7e6
ply      nodes  score  pv
  1         30     61  d2d4
  2        223      5  d2d4 d7d5
  3       3128     35  d2d4 d7d5 e2e3
  4      13673      5  d2d4 d7d5 c1g5 f8e7
Computer's move: d2d4
tscp> d8a5
ply      nodes  score  pv
  1        363     81  c1d2 a5a6
  2       1968     91  b1c3 g8f6 e2e3
  3       9365     56  b1c3 c5d4 d1d4 d7d6
  4      47850     72  b1c3 b8c6 e2e4 g8f6 d1d3 c5d4 f3d4 c6d4 d3d4
Computer's move: b1c3
tscp> c5d4
ply      nodes  score  pv
  1         36     99  f3d4
  2        383     56  d1d4 d7d6
  3       2770     73  f3d4 d7d5 e2e3
  4      15366     45  f3d4 f8b4 c1d2 d7d5 c4d5 b4c3 d2c3 a5d5
Computer's move: f3d4
tscp> e6e5
ply      nodes  score  pv
  1         97     76  d4f5
  2        427     71  d4b3 a5a6
  3       2129    119  d4b3 a5a6 e2e4
  4      14898     84  d4b3 a5a6 e2e4 g8f6
Computer's move: d4b3
tscp> a5c7
ply      nodes  score  pv
  1         60    119  e2e4
  2        302     84  e2e4 g8f6
  3       2484    109  e2e4 g8f6 c1e3
  4      20895     74  e2e4 b8c6 c1e3 g8f6
Computer's move: e2e4
tscp> a7a5
ply      nodes  score  pv
  1         70    150  c1e3
  2        597    128  c3d5 f8b4 d5b4 a5b4
  3       4669    150  f1d3 f8b4 c1d2
  4      27317    120  c3d5 c7d8 f1d3 b8c6
Computer's move: c3d5
tscp> c7c6
ply      nodes  score  pv
  1        110    155  c1e3
  2       1558    148  c1d2 b7b6
  3       8460    154  f1d3 a5a4 b3d2
  4      68420    139  c1d2 a5a4 b3a5 c6g6
Computer's move: c1d2
tscp> b7b6
ply      nodes  score  pv
  1        132    173  f1d3
  2       1702    141  d2e3 f8c5 b3c5 b6c5
  3       8168    162  f1d3 a5a4 b3c1
  4      93862    141  d2e3 f8c5 b3c5 b6c5
Computer's move: d2e3
tscp> f8b4
ply      nodes  score  pv
  1         69    151  d5b4 a5b4
  2        939    176  d5b4 a5b4 f1d3
  3       5534    157  d5b4 a5b4 d1d5 c6d5 c4d5
  4      34714    176  d5b4 a5b4 d1g4 c6f6 f1d3
Computer's move: d5b4
tscp> a5b4
ply      nodes  score  pv
  1        130    176  f1d3
  2       1581    157  d1d5 c6d5 c4d5
  3       6281    176  d1g4 c6f6 f1d3
  4      35526    153  d1d5 d7d6 d5c6 b8c6 e3b6
Computer's move: d1d5
tscp> d7d6
ply      nodes  score  pv
  1         69    188  e3b6
  2        534    153  e3b6 g8f6
  3       4502    143  f1d3 g8f6 d5c6 b8c6 e3b6
  4      20651    143  d5c6 b8c6 e3b6 g8f6 f1d3
Computer's move: d5c6
tscp> b8c6
ply      nodes  score  pv
  1         35    153  e3b6
  2        496    118  e3b6 g8f6
  3       2920    143  e3b6 g8f6 f1d3
  4      13654    118  e3b6 g8f6 f1d3 c8e6
Computer's move: e3b6
tscp> g8f6
ply      nodes  score  pv
  1         96    143  f1d3
  2        242    118  f1d3 c8e6
  3       1899    142  f1d3 c8e6 e1g1
  4      15489    130  f1d3 c8e6 b6c7 e8d7
Computer's move: f1d3
tscp> h7h6
ply      nodes  score  pv
  1         80    166  e1g1
  2        563    154  b6c7 e8d7
  3       3680    154  b6c7 e8d7 c7b6
  4      29356    153  e1g1 c8e6 b6c7 e8d7
Computer's move: e1g1
tscp> g7g6
ply      nodes  score  pv
  1         76    182  f1d1
  2        522    184  b6c7 e8d7
  3       2793    184  b6c7 e8d7 c7b6
  4      28960    164  b6c7 e8d7 c7b6 c8b7
Computer's move: b6c7
tscp> e8d7
ply      nodes  score  pv
  1         51    184  c7b6
  2        191    164  c7b6 c8b7
  3       1709     62  c7d6 d7d6 c4c5
  4      10699     67  c7d6 d7d6 c4c5 d6e7 f1d1
Computer's move: c7d6
tscp> d7d6
ply      nodes  score  pv
  1         36     62  c4c5
  2        400     67  c4c5 d6d7 f1d1
  3       3101     52  f1d1 c8e6 c4c5
  4      33632     39  c4c5 d6e7 a2a4 b4a3 b2a3
Computer's move: c4c5
tscp> d6e6
ply      nodes  score  pv
  1         59     77  f1d1
  2        477     57  f1d1 c8b7
  3       3104     57  f1d1 c8b7 b3d2
  4      23632     52  d3c4 e6e7 c4d5 c8b7 f1d1
Computer's move: d3c4
tscp> e6e7
ply      nodes  score  pv
  1         57     57  c4d5
  2        344     37  c4d5 c8b7
  3       1752     52  c4d5 c8b7 f1d1
  4      18786     37  c4d5 c8b7 f1d1 h8d8
Computer's move: c4d5
tscp> c8d7
ply      nodes  score  pv
  1        115     52  f1d1
  2        675     37  f1d1 h8d8
  3       4162     37  f1d1 h8d8 b3d2
  4      24098     27  f1d1 h8d8 b3d2 e7e8
Computer's move: f1d1
tscp> f6d5
ply      nodes  score  pv
  1         28    105  e4d5
  2        345    105  e4d5 d7g4
  3       1461    129  e4d5 d7g4 d5d6
  4       8921    136  e4d5 c6a5 d5d6 e7e8 b3d2
Computer's move: e4d5
tscp> c6b8
ply      nodes  score  pv
  1         41    164  d5d6
  2        330    166  d5d6 e7e8 d1e1
  3       2804    163  d1e1 f7f6 d5d6
  4      17497    156  d1e1 e7f6 d5d6 b8c6
Computer's move: d1e1
tscp> f7f6
ply      nodes  score  pv
  1         36    163  d5d6
  2        366    164  d5d6 e7d8 f2f3
  3       3292    174  f2f4 d7a4 d5d6
  4      22540    154  d5d6 e7e8 a2a3 b4a3 b2a3
Computer's move: d5d6
tscp> e7d8
ply      nodes  score  pv
  1         46    164  f2f3
  2        265    129  f2f3 b8c6
  3       1998    162  a2a3 b4a3 b2a3
  4      10894    133  b3d2 b8c6 d2e4 d7e6
Computer's move: b3d2
tscp> h6h5
ply      nodes  score  pv
  1         54    172  d2e4
  2        368    152  d2e4 b8a6
  3       2974    161  a2a3 b4a3 b2a3
  4      18788    137  d2e4 f6f5 e4f6 b8c6
Computer's move: d2e4
tscp> h8f8
ply      nodes  score  pv
  1         70    173  f2f3
  2        329    138  f2f3 b8c6
  3       2378    150  a2a3 d7c6 e4g3
  4      16775    128  e4g3 f8h8 f2f3 b8c6
Computer's move: e4g3
tscp> h5h4
ply      nodes  score  pv
  1         52    169  g3e4
  2        219    134  g3e4 b8c6
  3       1679    134  g3e4 b8c6 f2f3
  4       8220    122  g3e4 d7f5 a2a4 b4a3 a1a3 a8a3 b2a3 f5e4 e1e4
Computer's move: g3e4
tscp> a8a5
ply      nodes  score  pv
  1         92    169  f2f3
  2        392    134  f2f3 b8c6
  3       5696    134  e1c1 b8c6 c1e1
  4      19003    109  e1c1 d7f5 e4d2 b8c6
Computer's move: e1c1
tscp> d7c6
ply      nodes  score  pv
  1         86    144  e4d2
  2        197    114  e4d2 b8d7
  3       1470    114  e4d2 b8d7 d2b3
  4       5247    114  e4d2 b8d7 d2b3 a5a6
Computer's move: e4d2
tscp> c6d5
ply      nodes  score  pv
  1        131    138  a2a4 b4a3 b2a3
  2        302    138  a2a4 b4a3 b2a3
  3       2104    138  a2a4 b4a3 b2a3
  4       9880    103  a2a4 b4a3 b2a3 b8c6
Computer's move: a2a4
tscp> b4a3
ply      nodes  score  pv
  1         42    138  b2a3
  2        551    103  b2a3 b8c6
  3       2448    124  b2a3 b8c6 a3a4
  4      12112    116  b2a3 b8c6 a3a4 d8e8
Computer's move: b2a3
tscp> b8a6
ply      nodes  score  pv
  1         44    149  c5c6
  2        165    134  c5c6 a6c5
  3       1245    149  c5c6 a6c5 c6c7
  4       7712    102  c5c6 a6c5 d2c4 d5c4 c1c4
Computer's move: c5c6
tscp> f8f7
ply      nodes  score  pv
  1         75    170  a3a4
  2        366    155  a3a4 a6c5
  3       2840    160  a3a4 f7a7 f2f3
  4      27541    129  d2f1 a5c5 c6c7 d8d7 a3a4 c5c1 a1c1
Computer's move: d2f1
tscp> a5b5
ply      nodes  score  pv
  1         57    155  a3a4
  2        359    139  f1e3 f7a7
  3       1568    160  f1e3 f7a7 a3a4
  4       8294    150  f1e3 d5e4 a3a4 b5b2
Computer's move: f1e3
tscp> d5e4
ply      nodes  score  pv
  1         62    170  a3a4
  2        383    150  a3a4 b5b2
  3       4724    149  c1c4 e4d5 c4c2
  4      13726    139  c1c4 e4d5 c4c2 f7a7
Computer's move: c1c4
tscp> b5b1
ply      nodes  score  pv
  1         37    241  a1b1 e4b1 c4h4
  2        194    241  a1b1 e4b1 c4h4
  3       1101    226  a1b1 e4b1 c4h4 a6c5
  4       4337    247  a1b1 e4b1 c4h4 a6c5 a3a4
Computer's move: a1b1
tscp> e4b1
ply      nodes  score  pv
  1         28    241  c4h4
  2        389    226  c4h4 a6c5
  3       1840    247  c4h4 a6c5 a3a4
  4      11735    247  c4h4 f7f8 a3a4 a6c5
Computer's move: c4h4
tscp> f7f8
ply      nodes  score  pv
  1         33    262  a3a4
  2        165    247  a3a4 a6c5
  3       1362    268  a3a4 a6c5 a4a5
  4      11973    272  h4h7 d8c8 a3a4 b1e4
Computer's move: h4h7
tscp> b1e4
ply      nodes  score  pv
  1         48    256  c6c7
  2        233    287  c6c7 d8c8 a3a4
  3       1501    274  c6c7 d8c8 f2f3 e4c6
  4       7066    294  c6c7 d8c8 f2f3 e4c6 g1f2
Computer's move: c6c7
tscp> a6c7
ply      nodes  score  pv
  1         29    318  d6c7
  2        249    349  d6c7 d8c8 a3a4
  3       1240    349  d6c7 d8c8 a3a4 f8g8
  4       9427    365  d6c7 d8c8 a3a4 g6g5 h7e7
Computer's move: d6c7
tscp> d8c8
ply      nodes  score  pv
  1         41    349  a3a4
  2        370    349  a3a4 c8b7
  3       1811    365  a3a4 g6g5 h7e7
  4       9750    623  e3c4 c8b7 c4d6 b7c6 d6e4
Computer's move: e3c4
tscp> c8b7
ply      nodes  score  pv
  1        100    349  a3a4
  2        664    623  c4d6 b7c6 d6e4
  3       2563    613  c4d6 b7c6 d6e4 f8c8
  4      15369    558  c4d6 b7c6 c7c8q f8c8 d6c8 c6d5
Computer's move: c4d6
tscp> b7c6
ply      nodes  score  pv
  1         40    623  d6e4
  2        353    613  d6e4 f8c8
  3       1709    558  c7c8q f8c8 d6c8 c6d5
  4       8239    579  c7c8q f8c8 d6c8 c6d5 a3a4
Computer's move: c7c8q
tscp> f8c8
ply      nodes  score  pv
  1         32    578  d6c8
  2        138    558  d6c8 c6d5
  3        837    579  d6c8 c6d5 a3a4
  4       4082    584  d6c8 g6g5 c8e7 c6d6 h7f7
Computer's move: d6c8
tscp> g6g5
ply      nodes  score  pv
  1         31    594  c8e7
  2        297    584  c8e7 c6d6 h7g7
  3       1674    595  h7e7 c6d5 a3a4
  4      10500    677  h7f7 c6d5 f7f6 g5g4
Computer's move: h7f7
tscp> h6h5
Illegal move.
tscp> d

8  . . N . . . . .
7  . . . . . R . .
6  . . k . . p . .
5  . . . . p . p .
4  . . . . b . . .
3  P . . . . . . .
2  . . . . . P P P
1  . . . . . . K .

   a b c d e f g h

tscp> f6f5
ply      nodes  score  pv
  1         33    594  a3a4
  2        239    709  c8e7 c6c5 e7f5 e4f5 f7f5
  3       1641    709  c8e7 c6c5 e7f5 e4f5 f7f5
  4      10810    709  f2f3 e4d5 f7f5 d5e6 f5g5 e6c8 g5e5
Computer's move: f2f3
tscp> e4b1
ply      nodes  score  pv
  1         30    617  a3a4
  2        203    712  c8e7 c6c5 e7f5 b1f5 f7f5
  3       1285    712  c8e7 c6c5 e7f5 b1f5 f7f5
  4       6032    712  c8e7 c6c5 e7f5 b1f5 f7f5
Computer's move: c8e7
tscp> c6d6
ply      nodes  score  pv
  1         25    712  e7f5 b1f5 f7f5
  2        210    712  e7f5 b1f5 f7f5
  3       1153    717  e7f5 d6e6 f5h6 b1d3
  4       5332    737  e7f5 d6e6 f5h6 b1g6 f7b7
Computer's move: e7f5
tscp> d6e6
ply      nodes  score  pv
  1         62    732  f5h6
  2        196    717  f5h6 b1d3
  3        944    737  f5h6 b1g6 f7c7
  4       3918    728  f5h6 b1d3 a3a4 e6d5
Computer's move: f5h6
tscp> b1g6
ply      nodes  score  pv
  1         30    737  f7c7
  2        156    732  f7g7 e6f6
  3        915    748  f7b7 e6d5 a3a4
  4       5664    743  f7b7 g6d3 a3a4 e6d5
Computer's move: f7b7
tscp> g6h5
ply      nodes  score  pv
  1         41    768  a3a4
  2        216    758  a3a4 e6d5
  3       1766    779  a3a4 e6d5 a4a5
  4      14828    772  g1f2 h5e8 f2e3 e8c6
Computer's move: g1f2
tscp> g5g4
ply      nodes  score  pv
  1         35    882  f3g4
  2        194    882  h6g4 h5g4 f3g4
  3       1506    906  f3g4 h5g6 h2h4
  4       6736    892  f3g4 h5e8 h2h4 e5e4
Computer's move: f3g4
tscp> h5e8
ply      nodes  score  pv
  1         32    916  h2h4
  2        236    892  h2h4 e5e4
  3       1684    901  h2h4 e8c6 b7c7
  4       8132    901  h6f5 e8c6 b7e7 e6d5 h2h4
Computer's move: h6f5
tscp> e6d5
ply      nodes  score  pv
  1         36    921  h2h4
  2        365    916  f5e7 d5d4 h2h4
  3       3038    907  f5e3 d5d6 h2h4 e5e4
  4      21695    916  f5e7 d5d4 g4g5 e5e4 g2g4
Computer's move: f5e7
tscp> d5e4
ply      nodes  score  pv
  1         29    916  h2h4
  2        174    906  h2h4 e8f7
  3       1484    930  g4g5 e8f7 g2g4
  4       8460    924  g4g5 e4f4 h2h4 e5e4
Computer's move: g4g5
tscp> e4d3
ply      nodes  score  pv
  1         31    950  g2g4
  2        219    926  g2g4 e5e4
  3       1902    976  g2g4 e5e4 h2h4
  4       9616    952  g2g4 e5e4 h2h4 e4e3
Computer's move: g2g4
tscp> e5e4
ply      nodes  score  pv
  1         29    976  h2h4
  2        193    952  h2h4 e4e3
  3       2408    952  f2g3 e4e3 h2h4
  4      12116    950  h2h4 e4e3 f2e1 e3e2 g5g6
Computer's move: h2h4
tscp> e4e3
ply      nodes  score  pv
  1         54    938  f2f3 e3e2
  2        715    950  f2e1 e3e2 g5g6
  3       1714    950  f2e1 e8a4 g5g6 e3e2
  4       6834    972  f2e1 e8a4 g5g6 e3e2 g6g7
Computer's move: f2e1
tscp> d3c3
ply      nodes  score  pv
  1         26    984  g5g6
  2        180    964  g5g6 c3d4
  3       1086    986  g5g6 c3d4 g6g7
  4       7358   1153  e1e2 c3d4 e7f5 d4e4 f5e3
Computer's move: e1e2
tscp> e8f7
ply      nodes  score  pv
  1         25   1168  e2e3
  2        242   1158  e2e3 c3c4
  3       1400   1168  e2e3 f7e6 e7f5
  4       6614   1158  e2e3 f7e6 e7f5 c3c4
Computer's move: e2e3
tscp> c3c4
ply      nodes  score  pv
  1         29   1180  g5g6
  2        160   1190  b7c7 c4b5 g5g6
  3       1154   1192  g5g6 f7d5 g6g7
  4       6301   1272  g5g6 f7g6 e7g6 c4d5
Computer's move: g5g6
tscp> f7g6
ply      nodes  score  pv
  1         25   1282  e7g6
  2        186   1272  e7g6 c4d5
  3       1095   1293  e7g6 c4d5 a3a4
  4       5125   1293  e7g6 c4c5 a3a4 c5d5
Computer's move: e7g6
tscp> c4c5
ply      nodes  score  pv
  1         30   1303  a3a4
  2        145   1293  a3a4 c5d5
  3       1230   1313  a3a4 c5c6 b7e7
  4       6665   1302  b7d7 c5b5 e3d4 b5c6
Computer's move: b7d7
tscp> c5c4
ply      nodes  score  pv
  1         29   1303  a3a4
  2        287   1303  a3a4 c4c5
  3       2032   1306  g6e5 c4b3 d7d3 b3a4 g4g5
  4      10224   1308  g6e5 c4b3 d7a7 b3c3 a3a4
Computer's move: g6e5
tscp> c4c3
ply      nodes  score  pv
  1         29   1323  a3a4
  2        151   1326  g4g5 c3b3
  3       1411   1333  d7b7 c3c2 a3a4
  4       7493   1335  g4g5 c3b3 d7d3 b3a4 h4h5
Computer's move: g4g5
tscp> c3c2
ply      nodes  score  pv
  1         31   1355  h4h5
  2        166   1345  h4h5 c2c3
  3       1436   1366  a3a4 c2c3 h4h5
  4       7189   2013  g5g6 c2b3 g6g7 b3a3 g7g8q
Computer's move: g5g6
tscp> c2b3
ply      nodes  score  pv
  1         39   1370  g6g7
  2        174   2013  g6g7 b3a3 g7g8q
  3       1334   2106  d7d3 b3a4 g6g7 a4b5 g7g8q
  4       7489   2106  d7d3 b3a4 g6g7 a4b5 g7g8q
Computer's move: d7d3
tscp> b3a4
ply      nodes  score  pv
  1         25   1350  g6g7
  2        109   2106  g6g7 a4b5 g7g8q
  3        906   2106  g6g7 a4b5 g7g8q
  4       5300   2127  g6g7 a4b5 h4h5 b5a6 g7g8q
Computer's move: g6g7
tscp> a4a5
ply      nodes  score  pv
  1         30   2106  g7g8q
  2        276   2127  h4h5 a5a6 g7g8q
  3       1781   2127  h4h5 a5a6 g7g8q
  4      11113   2147  h4h5 a5a6 d3d7 a6a5 g7g8q
Computer's move: h4h5
tscp> a5a4
ply      nodes  score  pv
  1         29   2127  g7g8q
  2        215   2148  h5h6 a4b5 g7g8q
  3       1373   2148  h5h6 a4b5 g7g8q
  4       9952   2174  h5h6 a4b5 h6h7 b5a6 h7h8q
Computer's move: h5h6
tscp> a4a5
ply      nodes  score  pv
  1         30   2148  g7g8q
  2        283   2174  h6h7 a5a6 h7h8q
  3       1803   2174  h6h7 a5a6 h7h8q
  4      11300   2884  h6h7 a5a6 h7h8q a6b7 g7g8q
Computer's move: h6h7
tscp> a5a4
ply      nodes  score  pv
  1         32   2174  h7h8q
  2        342   2900  h7h8q a4b5 g7g8q
  3       1842   2900  h7h8q a4b5 g7g8q
  4      15519   2910  h7h8q a4b5 e3d4 b5a6 g7g8q
Computer's move: h7h8q
tscp> a4a5
ply      nodes  score  pv
  1         43   2900  g7g8q
  2        495   2910  e3d4 a5a6 g7g8q
  3       5376   2920  h8a8 a5b6 d3d7 b6b5 g7g8q
  4      45906   9995  h8a8 a5b6 d3b3 b6c7 a8b8
Computer's move: h8a8
tscp> a5b6
ply      nodes  score  pv
  1         47   2900  g7g8q
  2        713   2920  d3d7 b6b5 g7g8q
  3       7786   9997  d3b3 b6c7 a8b8
Computer's move: d3b3
tscp> b6c7
ply      nodes  score  pv
  1         49   2884  g7g8q
  2        615   9999  a8b8
Computer's move: a8b8
1-0 {White mates}

//////
///

14:24:29: Starting /Users/bereg/qt-workspace/build-chess-Qt_6_3_1_for_macOS-Release/chess.app/Contents/MacOS/chess...
boards: 1
--- Human: g1 f3
BEST MOVE:  e7 e5, val=-5, 20 moves in 1 msec
Principle Variation = e7 e5
BEST MOVE:  d7 d5, val=2, 363 moves in 2 msec
Principle Variation = d7 d5, e2 e4
BEST MOVE:  d7 d5, val=-5, 1613 moves in 3 msec
Principle Variation = d7 d5, d2 d4, e7 e5
BEST MOVE:  f7 f5, val=3, 22802 moves in 23 msec
Principle Variation = f7 f5, c2 c4, e7 e6, d1 x d4
BEST MOVE:  e7 e6, val=-99, 151266 moves in 71 msec
Principle Variation = e7 e6, e2 e4, d8 f6, h2 h3, e7 e5
BEST MOVE:  c7 c5, val=92, 1845212 moves in 784 msec
Principle Variation = c7 c5, d2 d4, f7 f6, e2 e4, d7 d5, f1 x a6
RNBQKBNR
PPPPPPPP
........
........
........
.....n..
pppppppp
rnbqkb.r
move  1: val =    94  e7 e6
move  2: val =    96  b8 c6
move  3: val =    95  g8 f6
move  4: val =    95  g8 h6
move  5: val =    93  a7 a6
move  6: val =    93  a7 a5
move  7: val =    92  b7 b6
move  8: val =    93  b7 b5
move  9: val =    92  c7 c6
move 10: val =    92  c7 c5
move 11: val =    93  d7 d6
move 12: val =    93  d7 d5
move 13: val =    94  b8 a6
move 14: val =    97  e7 e5
move 15: val =    93  f7 f6
move 16: val =    93  f7 f5
move 17: val =    93  g7 g6
move 18: val =    93  g7 g5
move 19: val =    93  h7 h6
move 20: val =    93  h7 h5
BEST MOVE:  c7 c5 val = 92, moveNum = 1845212, time = 784 msec
Board("RNBQKBNR PP.PPPPP ........ ..P..... ........ .....n.. pppppppp rnbqkb.r", "000");
--- Human: c2 c4
BEST MOVE:  e7 e5, val=-5, 21 moves in 3 msec
Principle Variation = e7 e5
BEST MOVE:  f7 f5, val=3, 351 moves in 3 msec
Principle Variation = f7 f5, e2 e4
BEST MOVE:  d8 a5, val=-91, 2016 moves in 4 msec
Principle Variation = d8 a5, e2 e4, b6 x b2
BEST MOVE:  f7 f6, val=90, 37628 moves in 38 msec
Principle Variation = f7 f6, d1 a4, f7 f5, e2 e4
BEST MOVE:  e7 e6, val=-99, 246237 moves in 101 msec
Principle Variation = e7 e6, e2 e4, d8 x d5, e2 e4, a4 x c4
BEST MOVE:  e7 e6, val=92, 1465857 moves in 554 msec
Principle Variation = e7 e6, d1 a4, f7 f5, d1 x d4, d7 d5, d2 d4
RNBQKBNR
PP.PPPPP
........
..P.....
..p.....
.....n..
pp.ppppp
rnbqkb.r
move  1: val =    92  e7 e6
move  2: val =    94  b8 c6
move  3: val =    93  d8 c7
move  4: val =    93  d8 b6
move  5: val =    94  d8 a5
move  6: val =    93  g8 f6
move  7: val =    94  g8 h6
move  8: val =    93  a7 a6
move  9: val =    93  a7 a5
move 10: val =    93  b7 b6
move 11: val =    93  b7 b5
move 12: val =    93  d7 d6
move 13: val =    93  d7 d5
move 14: val =    94  b8 a6
move 15: val =    93  e7 e5
move 16: val =    93  f7 f6
move 17: val =    93  f7 f5
move 18: val =    93  g7 g6
move 19: val =    93  g7 g5
move 20: val =    93  h7 h6
move 21: val =    93  h7 h5
BEST MOVE:  e7 e6 val = 92, moveNum = 1465857, time = 554 msec
Board("RNBQKBNR PP.P.PPP ....P... ..P..... ..p..... .....n.. pp.ppppp rnbqkb.r", "000");
--- Human: d2 d4
BEST MOVE:  c5 x d4, val=-105, 29 moves in 3 msec
Principle Variation = c5 x d4
BEST MOVE:  c5 x d4, val=1, 119 moves in 2 msec
Principle Variation = c5 x d4, d1 x d4
BEST MOVE:  d8 f6, val=-109, 1435 moves in 2 msec
Principle Variation = d8 f6, f3 g1, c5 x d4
BEST MOVE:  c5 x d4, val=92, 20643 moves in 22 msec
Principle Variation = c5 x d4, d1 x d4, f7 f5, d1 x d4
BEST MOVE:  d8 f6, val=-200, 199150 moves in 101 msec
Principle Variation = d8 f6, e2 e4, c5 x d4, d4 x c5, c5 x d4
BEST MOVE:  d8 a5, val=11, 768364 moves in 266 msec
Principle Variation = d8 a5, c1 d2, a5 c7, h2 h4, d4 x c4, g5 x e6
RNBQKBNR
PP.P.PPP
....P...
..P.....
..pp....
.....n..
pp..pppp
rnbqkb.r
move  1: val =   105  d8 f6
move  2: val =   106  b8 c6
move  3: val =   105  d8 c7
move  4: val =   105  d8 b6
move  5: val =    11  d8 a5
move  6: val =    99  d8 e7
move  7: val =    15  b8 a6
move  8: val =   105  d8 g5
move  9: val =   773  d8 h4
move 10: val =    15  e8 e7
move 11: val =    15  f8 e7
move 12: val =    13  f8 d6
move 13: val =    15  g8 e7
move 14: val =    12  g8 f6
move 15: val =    19  g8 h6
move 16: val =    95  a7 a6
move 17: val =    95  a7 a5
move 18: val =    95  b7 b6
move 19: val =    92  b7 b5
move 20: val =    93  d7 d6
move 21: val =    94  d7 d5
move 22: val =    93  f7 f6
move 23: val =    89  f7 f5
move 24: val =    95  g7 g6
move 25: val =    89  g7 g5
move 26: val =    97  h7 h6
move 27: val =    97  h7 h5
move 28: val =    96  e6 e5
move 29: val =    88  c5 x d4
BEST MOVE:  d8 a5 val = 11, moveNum = 768364, time = 266 msec
Board("RNB.KBNR PP.P.PPP ....P... Q.P..... ..pp.... .....n.. pp..pppp rnbqkb.r", "000");
--- Human: b1 c3
BEST MOVE:  a5 x c3, val=-324, 32 moves in 4 msec
Principle Variation = a5 x c3
BEST MOVE:  c5 x d4, val=3, 540 moves in 4 msec
Principle Variation = c5 x d4, d1 x d4
BEST MOVE:  c5 x d4, val=-326, 1821 moves in 5 msec
Principle Variation = c5 x d4, d1 x d4, a5 x c3
BEST MOVE:  d7 d6, val=5, 10714 moves in 14 msec
Principle Variation = d7 d6, e2 e3, c5 x d4, d1 x d7
BEST MOVE:  c5 x d4, val=-206, 329772 moves in 170 msec
Principle Variation = c5 x d4, d1 a4, a5 c5, d4 x c5, a1 x c1
BEST MOVE:  c5 x d4, val=96, 1067732 moves in 373 msec
Principle Variation = c5 x d4, d1 x d4, f7 f5, e2 e3, f7 f5, a4 x a7
RNB.KBNR
PP.P.PPP
....P...
Q.P.....
..pp....
..n..n..
pp..pppp
r.bqkb.r
move  1: val =    96  c5 x d4
move  2: val =   578  a5 x c3
move  3: val =   797  a5 x a2
move  4: val =   100  e8 e7
move  5: val =    97  f8 e7
move  6: val =    97  f8 d6
move  7: val =   100  g8 e7
move  8: val =    98  g8 f6
move  9: val =   100  g8 h6
move 10: val =    97  a7 a6
move 11: val =    97  b7 b6
move 12: val =    98  b7 b5
move 13: val =    97  d7 d6
move 14: val =    97  d7 d5
move 15: val =    97  f7 f6
move 16: val =    97  f7 f5
move 17: val =    97  g7 g6
move 18: val =    97  g7 g5
move 19: val =    99  h7 h6
move 20: val =    97  h7 h5
move 21: val =    99  e6 e5
move 22: val =   104  a5 b6
move 23: val =    98  a5 c7
move 24: val =    98  a5 d8
move 25: val =    97  a5 b4
move 26: val =    97  b8 c6
move 27: val =    98  a5 a6
move 28: val =    98  a5 b5
move 29: val =   101  a5 a4
move 30: val =   904  a5 a3
move 31: val =    97  e8 d8
move 32: val =    97  b8 a6
BEST MOVE:  c5 x d4 val = 96, moveNum = 1067732, time = 373 msec
Board("RNB.KBNR PP.P.PPP ....P... Q....... ..pP.... ..n..n.. pp..pppp r.bqkb.r", "000");
--- Human: f3 d4
BEST MOVE:  a5 x c3, val=-328, 40 moves in 6 msec
Principle Variation = a5 x c3
BEST MOVE:  e6 e5, val=3, 634 moves in 6 msec
Principle Variation = e6 e5, e2 e4
BEST MOVE:  e6 e5, val=-329, 2905 moves in 7 msec
Principle Variation = e6 e5, e2 e4, e5 x d4
BEST MOVE:  b8 c6, val=93, 32128 moves in 34 msec
Principle Variation = b8 c6, d4 b3, f7 f5, d1 x d7
BEST MOVE:  a5 c7, val=-234, 624849 moves in 278 msec
Principle Variation = a5 c7, d1 a4, c7 e5, d1 x d4, d7 x c6
BEST MOVE:  e6 e5, val=94, 5557289 moves in 2323 msec
Principle Variation = e6 e5, d4 b3, a5 a6, e2 e3, d4 e4, d4 x e6
RNB.KBNR
PP.P.PPP
....P...
Q.......
..pn....
..n.....
pp..pppp
r.bqkb.r
move  1: val =   100  a5 c7
move  2: val =   346  a5 x c3
move  3: val =   100  e8 d8
move  4: val =   100  e8 e7
move  5: val =   100  f8 e7
move  6: val =   104  f8 d6
move  7: val =   188  f8 c5
move  8: val =    96  f8 b4
move  9: val =    97  f8 a3
move 10: val =    97  g8 e7
move 11: val =    97  g8 f6
move 12: val =    98  g8 h6
move 13: val =    96  a7 a6
move 14: val =    97  b7 b6
move 15: val =    98  b7 b5
move 16: val =    97  d7 d6
move 17: val =    97  d7 d5
move 18: val =    95  f7 f6
move 19: val =    96  f7 f5
move 20: val =    96  g7 g6
move 21: val =    96  g7 g5
move 22: val =    96  h7 h6
move 23: val =    96  h7 h5
move 24: val =    94  e6 e5
move 25: val =    95  a5 b6
move 26: val =    95  b8 a6
move 27: val =    95  a5 d8
move 28: val =    95  a5 b4
move 29: val =    95  b8 c6
move 30: val =    95  a5 a6
move 31: val =    96  a5 b5
move 32: val =    95  a5 c5
move 33: val =   661  a5 d5
move 34: val =    95  a5 e5
move 35: val =    95  a5 f5
move 36: val =    95  a5 g5
move 37: val =    95  a5 h5
move 38: val =   100  a5 a4
move 39: val =    96  a5 a3
move 40: val =   565  a5 x a2
BEST MOVE:  e6 e5 val = 94, moveNum = 5557289, time = 2323 msec
Board("RNB.KBNR PP.P.PPP ........ Q...P... ..pn.... ..n..... pp..pppp r.bqkb.r", "000");
--- Human: d4 b3
BEST MOVE:  a5 x c3, val=-336, 36 moves in 4 msec
Principle Variation = a5 x c3
BEST MOVE:  a5 a6, val=93, 341 moves in 3 msec
Principle Variation = a5 a6, d1 x d7
BEST MOVE:  a5 b4, val=-329, 3911 moves in 9 msec
Principle Variation = a5 b4, e2 e4, b4 x c3
BEST MOVE:  a5 a6, val=94, 17104 moves in 18 msec
Principle Variation = a5 a6, e2 e4, f7 f6, d1 x d7
BEST MOVE:  a5 b4, val=-329, 158098 moves in 80 msec
Principle Variation = a5 b4, e2 e4, d7 d6, e2 e4, b7 x a6
BEST MOVE:  a5 c7, val=95, 1751200 moves in 751 msec
Principle Variation = a5 c7, c4 c5, h7 h5, d1 d5, f7 f5, d1 x d7
RNB.KBNR
PP.P.PPP
........
Q...P...
..p.....
.nn.....
pp..pppp
r.bqkb.r
move  1: val =    95  a5 b4
move  2: val =   339  a5 x c3
move  3: val =    97  a5 x a2
move  4: val =    96  e8 e7
move  5: val =    96  f8 e7
move  6: val =    96  f8 d6
move  7: val =    96  f8 c5
move  8: val =    96  f8 b4
move  9: val =    96  f8 a3
move 10: val =    96  g8 e7
move 11: val =    96  g8 f6
move 12: val =    96  g8 h6
move 13: val =    96  a7 a6
move 14: val =    96  b7 b6
move 15: val =    97  b7 b5
move 16: val =    96  d7 d6
move 17: val =    97  d7 d5
move 18: val =    96  f7 f6
move 19: val =    97  f7 f5
move 20: val =    96  g7 g6
move 21: val =    96  g7 g5
move 22: val =    96  h7 h6
move 23: val =    96  h7 h5
move 24: val =    96  a5 b6
move 25: val =    95  a5 c7
move 26: val =    96  a5 d8
move 27: val =    96  b8 a6
move 28: val =    96  b8 c6
move 29: val =    96  a5 a6
move 30: val =    96  a5 b5
move 31: val =    97  a5 c5
move 32: val =   658  a5 d5
move 33: val =    96  a5 a4
move 34: val =    97  a5 a3
move 35: val =    96  e8 d8
move 36: val =   193  e5 e4
BEST MOVE:  a5 c7 val = 95, moveNum = 1751200, time = 751 msec
Board("RNB.KBNR PPQP.PPP ........ ....P... ..p..... .nn..... pp..pppp r.bqkb.r", "000");
--- Human: e2 e4
BEST MOVE:  c7 x c4, val=-104, 31 moves in 3 msec
Principle Variation = c7 x c4
BEST MOVE:  f7 f6, val=94, 366 moves in 4 msec
Principle Variation = f7 f6, d1 x d7
BEST MOVE:  f8 b4, val=-323, 4963 moves in 12 msec
Principle Variation = f8 b4, f2 f4, b4 x c3
BEST MOVE:  f8 b4, val=10, 26274 moves in 26 msec
Principle Variation = f8 b4, f2 f3, b4 x c3, b2 x c3
BEST MOVE:  f7 f5, val=-110, 842920 moves in 365 msec
Principle Variation = f7 f5, c4 c5, f7 f5, h1 g1, c5 x f2
BEST MOVE:  a7 a5, val=96, 6748024 moves in 2685 msec
Principle Variation = a7 a5, d1 d5, a5 a4, f1 x c4, g7 g6, f2 f4
RNB.KBNR
PPQP.PPP
........
....P...
..p.p...
.nn.....
pp...ppp
r.bqkb.r
move  1: val =   197  f7 f5
move  2: val =   665  c7 x c4
move  3: val =   103  e8 d8
move  4: val =   315  e8 e7
move  5: val =   113  f8 e7
move  6: val =   219  f8 d6
move  7: val =   104  f8 c5
move  8: val =   102  f8 b4
move  9: val =   104  f8 a3
move 10: val =   321  g8 e7
move 11: val =   100  g8 f6
move 12: val =   101  g8 h6
move 13: val =    98  a7 a6
move 14: val =    96  a7 a5
move 15: val =    98  b7 b6
move 16: val =    97  b7 b5
move 17: val =    98  c7 d8
move 18: val =    98  c7 b6
move 19: val =    98  c7 a5
move 20: val =    98  c7 d6
move 21: val =    97  c7 c6
move 22: val =   194  c7 c5
move 23: val =    97  b8 c6
move 24: val =    97  d7 d6
move 25: val =    97  d7 d5
move 26: val =    98  f7 f6
move 27: val =    97  b8 a6
move 28: val =    97  g7 g6
move 29: val =    98  g7 g5
move 30: val =    97  h7 h6
move 31: val =    97  h7 h5
BEST MOVE:  a7 a5 val = 96, moveNum = 6748024, time = 2685 msec
Board("RNB.KBNR .PQP.PPP ........ P...P... ..p.p... .nn..... pp...ppp r.bqkb.r", "000");
--- Human: c3 d5
BEST MOVE:  c7 x c4, val=-107, 29 moves in 5 msec
Principle Variation = c7 x c4
BEST MOVE:  c7 c6, val=95, 399 moves in 4 msec
Principle Variation = c7 c6, b3 x a5
BEST MOVE:  c7 d6, val=-234, 2412 moves in 6 msec
Principle Variation = c7 d6, b3 x a5, d6 x d5
BEST MOVE:  c7 c6, val=93, 27126 moves in 30 msec
Principle Variation = c7 c6, a2 a4, d7 d6, f2 f4
BEST MOVE:  c7 d6, val=-230, 179398 moves in 79 msec
Principle Variation = c7 d6, c4 c5, d6 e6, d5 x e7, e4 x d5
BEST MOVE:  c7 c6, val=163, 1332644 moves in 556 msec
Principle Variation = c7 c6, c4 c5, a5 a4, d5 b6, e4 x d5, a5 x b7
RNB.KBNR
.PQP.PPP
........
P..nP...
..p.p...
.n......
pp...ppp
r.bqkb.r
move  1: val =   321  c7 d6
move  2: val =   563  c7 x c4
move  3: val =   322  b8 a6
move  4: val =   767  b8 c6
move  5: val =   444  e8 d8
move  6: val =   769  f8 e7
move  7: val =   322  f8 d6
move  8: val =   767  f8 c5
move  9: val =   217  f8 b4
move 10: val =   219  f8 a3
move 11: val =   769  g8 e7
move 12: val =   767  g8 f6
move 13: val =   219  g8 h6
move 14: val =   278  b7 b6
move 15: val =   219  b7 b5
move 16: val =   165  c7 d8
move 17: val =   196  c7 b6
move 18: val =   199  a8 a7
move 19: val =   163  c7 c6
move 20: val =   663  c7 c5
move 21: val =   172  a8 a6
move 22: val =   191  d7 d6
move 23: val =   192  f7 f6
move 24: val =   194  f7 f5
move 25: val =   193  g7 g6
move 26: val =   190  g7 g5
move 27: val =   193  h7 h6
move 28: val =   193  h7 h5
move 29: val =   590  a5 a4
BEST MOVE:  c7 c6 val = 163, moveNum = 1332644, time = 556 msec
Board("RNB.KBNR .P.P.PPP ..Q..... P..nP... ..p.p... .n...... pp...ppp r.bqkb.r", "000");
--- Human: c1 d2
BEST MOVE:  c6 x d5, val=-334, 35 moves in 6 msec
Principle Variation = c6 x d5
BEST MOVE:  a5 a4, val=-3, 388 moves in 4 msec
Principle Variation = a5 a4, f2 f4
BEST MOVE:  a5 a4, val=-332, 2400 moves in 7 msec
Principle Variation = a5 a4, f2 f3, a4 x b3
BEST MOVE:  b7 b6, val=91, 16905 moves in 22 msec
Principle Variation = b7 b6, d2 c3, c6 c5, a5 x b7
BEST MOVE:  a5 a4, val=-238, 270520 moves in 130 msec
Principle Variation = a5 a4, b3 a5, c6 e6, c3 x e5, e4 x c4
BEST MOVE:  b7 b6, val=90, 2285919 moves in 1139 msec
Principle Variation = b7 b6, a2 a4, d7 d6, d5 e3, e4 x e2, c4 x d5
RNB.KBNR
.P.P.PPP
..Q.....
P..nP...
..p.p...
.n......
pp.b.ppp
r..qkb.r
move  1: val =   260  a5 a4
move  2: val =   347  c6 x d5
move  3: val =   663  c6 x c4
move  4: val =   288  e8 d8
move  5: val =   267  f8 e7
move  6: val =   264  f8 d6
move  7: val =   196  f8 c5
move  8: val =    93  f8 b4
move  9: val =   170  f8 a3
move 10: val =   192  g8 e7
move 11: val =   185  g8 f6
move 12: val =   191  g8 h6
move 13: val =    90  b7 b6
move 14: val =    91  b7 b5
move 15: val =    91  d7 d6
move 16: val =    92  f7 f6
move 17: val =   156  f7 f5
move 18: val =    91  g7 g6
move 19: val =    91  g7 g5
move 20: val =    91  h7 h6
move 21: val =    91  h7 h5
move 22: val =    92  c6 b5
move 23: val =    91  c6 a4
move 24: val =    92  a8 a6
move 25: val =    92  c6 c7
move 26: val =    92  c6 b6
move 27: val =    91  c6 a6
move 28: val =    91  c6 d6
move 29: val =    91  c6 e6
move 30: val =    92  c6 f6
move 31: val =    94  c6 g6
move 32: val =    92  c6 h6
move 33: val =    92  c6 c5
move 34: val =    92  b8 a6
move 35: val =    92  a8 a7
BEST MOVE:  b7 b6 val = 90, moveNum = 2285919, time = 1139 msec
Board("RNB.KBNR ...P.PPP .PQ..... P..nP... ..p.p... .n...... pp.b.ppp r..qkb.r", "000");
--- Human: d2 e3
BEST MOVE:  c6 x d5, val=-336, 35 moves in 4 msec
Principle Variation = c6 x d5
BEST MOVE:  a5 a4, val=87, 475 moves in 5 msec
Principle Variation = a5 a4, e3 x b6
BEST MOVE:  a5 a4, val=-242, 2438 moves in 7 msec
Principle Variation = a5 a4, e3 x b6, a4 x b3
BEST MOVE:  f8 c5, val=89, 27454 moves in 33 msec
Principle Variation = f8 c5, e3 c1, c5 d6, d1 x d7
BEST MOVE:  a5 a4, val=-237, 664563 moves in 295 msec
Principle Variation = a5 a4, b3 d2, c6 d6, e1 e2, f7 f5
BEST MOVE:  f8 b4, val=89, 2288060 moves in 936 msec
Principle Variation = f8 b4, e1 e2, b4 c5, f2 f3, f7 f6, f2 f4
RNB.KBNR
...P.PPP
.PQ.....
P..nP...
..p.p...
.n..b...
pp...ppp
r..qkb.r
move  1: val =   186  a5 a4
move  2: val =   339  c6 x d5
move  3: val =   199  c6 x c4
move  4: val =   187  c8 b7
move  5: val =   187  c8 a6
move  6: val =   188  e8 d8
move  7: val =   188  f8 e7
move  8: val =   188  f8 d6
move  9: val =    97  f8 c5
move 10: val =    89  f8 b4
move 11: val =    90  f8 a3
move 12: val =    90  g8 e7
move 13: val =    90  g8 f6
move 14: val =    90  g8 h6
move 15: val =    90  d7 d6
move 16: val =    90  f7 f6
move 17: val =    91  f7 f5
move 18: val =   182  g7 g6
move 19: val =   176  g7 g5
move 20: val =   176  h7 h6
move 21: val =   182  h7 h5
move 22: val =    91  b6 b5
move 23: val =    90  c6 b7
move 24: val =    92  c6 b5
move 25: val =    90  c6 a4
move 26: val =    90  a8 a6
move 27: val =    90  c6 c7
move 28: val =    90  c6 d6
move 29: val =    90  c6 e6
move 30: val =    90  c6 f6
move 31: val =    90  c6 g6
move 32: val =    90  c6 h6
move 33: val =    90  c6 c5
move 34: val =    90  b8 a6
move 35: val =    90  a8 a7
BEST MOVE:  f8 b4 val = 89, moveNum = 2288060, time = 936 msec
Board("RNB.K.NR ...P.PPP .PQ..... P..nP... .Bp.p... .n..b... pp...ppp r..qkb.r", "000");
--- Human: d5 b4
BEST MOVE:  a5 x b4, val=-14, 35 moves in 5 msec
Principle Variation = a5 x b4
BEST MOVE:  a5 x b4, val=86, 146 moves in 5 msec
Principle Variation = a5 x b4, d1 x d7
BEST MOVE:  a5 x b4, val=-112, 2984 moves in 9 msec
Principle Variation = a5 x b4, f2 f3, c6 x e4
BEST MOVE:  a5 x b4, val=86, 11278 moves in 15 msec
Principle Variation = a5 x b4, f2 f3, f7 f6, d1 x d7
BEST MOVE:  a5 x b4, val=-116, 145949 moves in 81 msec
Principle Variation = a5 x b4, d1 d3, d7 d6, f2 f3, e4 x c4
BEST MOVE:  a5 x b4, val=86, 775374 moves in 429 msec
Principle Variation = a5 x b4, f2 f3, h7 h5, h2 h4, c6 x e4, b3 x d4
RNB.K.NR
...P.PPP
.PQ.....
P...P...
.np.p...
.n..b...
pp...ppp
r..qkb.r
move  1: val =    86  a5 x b4
move  2: val =    87  c6 x e4
move  3: val =   659  c6 x c4
move  4: val =   290  c8 b7
move  5: val =   407  c8 a6
move  6: val =   290  e8 d8
move  7: val =   290  e8 f8
move  8: val =   290  e8 e7
move  9: val =   290  g8 e7
move 10: val =   288  g8 f6
move 11: val =    90  g8 h6
move 12: val =   288  d7 d6
move 13: val =    88  d7 d5
move 14: val =   284  f7 f6
move 15: val =    87  f7 f5
move 16: val =   286  g7 g6
move 17: val =   174  g7 g5
move 18: val =    87  h7 h6
move 19: val =    87  h7 h5
move 20: val =    89  b6 b5
move 21: val =    88  c6 b7
move 22: val =    88  c6 b5
move 23: val =    88  c6 a4
move 24: val =    90  c6 d5
move 25: val =   115  a8 a6
move 26: val =    88  c6 c7
move 27: val =    88  c6 d6
move 28: val =    87  c6 e6
move 29: val =    90  c6 f6
move 30: val =    88  c6 g6
move 31: val =   182  c6 h6
move 32: val =    88  c6 c5
move 33: val =   407  b8 a6
move 34: val =   180  a5 a4
move 35: val =   290  a8 a7
BEST MOVE:  a5 x b4 val = 86, moveNum = 775374, time = 429 msec
Board("RNB.K.NR ...P.PPP .PQ..... ....P... .Pp.p... .n..b... pp...ppp r..qkb.r", "000");
--- Human: d1 d5
BEST MOVE:  c6 x d5, val=-915, 35 moves in 8 msec
Principle Variation = c6 x d5
BEST MOVE:  c6 x d5, val=-7, 141 moves in 7 msec
Principle Variation = c6 x d5, c4 x d5
BEST MOVE:  a8 x a2, val=-118, 3623 moves in 9 msec
Principle Variation = a8 x a2, d5 x c6, d7 x c6
BEST MOVE:  f7 f6, val=85, 19398 moves in 31 msec
Principle Variation = f7 f6, e3 x b6, f7 f6, a1 x a2
BEST MOVE:  f7 f6, val=-26, 109075 moves in 57 msec
Principle Variation = f7 f6, d5 x c6, d7 x c6, d5 x c6, d7 x c6
BEST MOVE:  d7 d6, val=82, 957586 moves in 710 msec
Principle Variation = d7 d6, f2 f3, g8 e7, d5 c5, f5 x e4, e3 x b6
RNB.K.NR
...P.PPP
.PQ.....
...qP...
.Pp.p...
.n..b...
pp...ppp
r...kb.r
move  1: val =    82  f7 f6
move  2: val =    83  a8 x a2
move  3: val =    83  c6 x d5
move  4: val =   139  a8 a4
move  5: val =    85  a8 a3
move  6: val =   139  a8 a6
move  7: val =    85  b8 a6
move  8: val =   183  c8 b7
move  9: val =   183  c8 a6
move 10: val =    86  e8 d8
move 11: val =    83  e8 f8
move 12: val =   139  e8 e7
move 13: val =    83  g8 e7
move 14: val =   137  g8 f6
move 15: val =   139  g8 h6
move 16: val =    82  d7 d6
move 17: val =   139  a8 a7
move 18: val =   133  f7 f5
move 19: val =   135  g7 g6
move 20: val =   135  g7 g5
move 21: val =   135  h7 h6
move 22: val =   135  h7 h5
move 23: val =    84  b6 b5
move 24: val =    86  c6 b7
move 25: val =   492  c6 b5
move 26: val =    95  c6 a4
move 27: val =   167  a8 a5
move 28: val =   236  c6 c7
move 29: val =   236  c6 d6
move 30: val =   492  c6 e6
move 31: val =   580  c6 f6
move 32: val =   319  c6 g6
move 33: val =   319  c6 h6
move 34: val =   355  c6 c5
move 35: val =   136  c6 x c4
BEST MOVE:  d7 d6 val = 82, moveNum = 957586, time = 710 msec
Board("RNB.K.NR .....PPP .PQP.... ...qP... .Pp.p... .n..b... pp...ppp r...kb.r", "000");
--- Human: d5 c6
BEST MOVE:  b8 x c6, val=-20, 6 moves in 1 msec
Principle Variation = b8 x c6
BEST MOVE:  b8 x c6, val=78, 49 moves in 1 msec
Principle Variation = b8 x c6, e3 x b6
BEST MOVE:  b8 x c6, val=-22, 300 moves in 1 msec
Principle Variation = b8 x c6, e3 x b6, a8 x a2
BEST MOVE:  b8 x c6, val=78, 8008 moves in 14 msec
Principle Variation = b8 x c6, f2 f3, f7 f6, f2 f4
BEST MOVE:  b8 x c6, val=-22, 21117 moves in 18 msec
Principle Variation = b8 x c6, e3 x b6, g8 f6, f2 f3, a6 x a2
BEST MOVE:  b8 x c6, val=90, 130078 moves in 92 msec
Principle Variation = b8 x c6, c4 c5, c8 a6, f1 x a6, f6 x e4, f2 f4
RNB.K.NR
.....PPP
.PqP....
....P...
.Pp.p...
.n..b...
pp...ppp
r...kb.r
move  1: val =    90  b8 x c6
move  2: val =   259  b8 d7
move  3: val =   176  c8 d7
move  4: val =  1581  e8 d8
move  5: val =   176  e8 f8
move  6: val =   176  e8 e7
BEST MOVE:  b8 x c6 val = 90, moveNum = 130078, time = 92 msec
Board("R.B.K.NR .....PPP .PNP.... ....P... .Pp.p... .n..b... pp...ppp r...kb.r", "000");
--- Human: e3 b6
BEST MOVE:  a8 x a2, val=-22, 33 moves in 7 msec
Principle Variation = a8 x a2
BEST MOVE:  f7 f6, val=78, 547 moves in 6 msec
Principle Variation = f7 f6, f2 f4
BEST MOVE:  g8 f6, val=-22, 3219 moves in 9 msec
Principle Variation = g8 f6, f2 f3, a8 x a2
BEST MOVE:  f7 f5, val=79, 16946 moves in 29 msec
Principle Variation = f7 f5, e4 x f5, c8 x f5, h2 h4
BEST MOVE:  h7 h5, val=-22, 353016 moves in 198 msec
Principle Variation = h7 h5, h2 h4, f7 f6, b3 x d4, a7 x a2
BEST MOVE:  g8 f6, val=86, 1671138 moves in 1057 msec
Principle Variation = g8 f6, f2 f3, e8 d7, b6 c7, f7 f6, f2 f4
R.B.K.NR
.....PPP
.bNP....
....P...
.Pp.p...
.n......
pp...ppp
r...kb.r
move  1: val =   182  h7 h5
move  2: val =   372  a8 x a2
move  3: val =   183  a8 a6
move  4: val =   353  a8 a5
move  5: val =   183  a8 a4
move  6: val =   576  a8 a3
move  7: val =   253  a8 a7
move  8: val =   183  c8 b7
move  9: val =   184  c8 a6
move 10: val =   183  c8 d7
move 11: val =   174  c8 e6
move 12: val =   400  c8 f5
move 13: val =   176  c8 g4
move 14: val =   405  c8 h3
move 15: val =   176  e8 f8
move 16: val =   176  e8 d7
move 17: val =   168  e8 e7
move 18: val =   175  g8 e7
move 19: val =    86  g8 f6
move 20: val =    88  g8 h6
move 21: val =   168  f7 f6
move 22: val =   171  f7 f5
move 23: val =   168  g7 g6
move 24: val =    88  g7 g5
move 25: val =   168  h7 h6
move 26: val =   180  a8 b8
move 27: val =    88  c6 b8
move 28: val =    88  c6 d8
move 29: val =    88  c6 a7
move 30: val =   171  c6 e7
move 31: val =   184  c6 a5
move 32: val =   176  c6 d4
move 33: val =   183  d6 d5
BEST MOVE:  g8 f6 val = 86, moveNum = 1671138, time = 1057 msec
Board("R.B.K..R .....PPP .bNP.N.. ....P... .Pp.p... .n...... pp...ppp r...kb.r", "000");
--- Human: f1 d3
BEST MOVE:  f6 x e4, val=-26, 37 moves in 11 msec
Principle Variation = f6 x e4
BEST MOVE:  h7 h5, val=80, 658 moves in 10 msec
Principle Variation = h7 h5, f2 f4
BEST MOVE:  a8 a6, val=-24, 3313 moves in 12 msec
Principle Variation = a8 a6, b6 e3, f6 x e4
BEST MOVE:  e8 d7, val=84, 36921 moves in 45 msec
Principle Variation = e8 d7, h2 h4, h7 h5, f2 f4
BEST MOVE:  h7 h5, val=-24, 371949 moves in 236 msec
Principle Variation = h7 h5, h2 h3, g6 g5, b6 e3, d7 x d8
BEST MOVE:  h7 h6, val=172, 2221032 moves in 1741 msec
Principle Variation = h7 h6, b3 d2, b4 b3, d2 x b3, a2 x a1, a1 x a2
R.B.K..R
.....PPP
.bNP.N..
....P...
.Pp.p...
.n.b....
pp...ppp
r...k..r
move  1: val =   172  h7 h5
move  2: val =   470  a8 x a2
move  3: val =   300  f6 x e4
move  4: val =   182  a8 a5
move  5: val =   174  a8 a4
move  6: val =   182  a8 a3
move  7: val =   255  a8 a7
move  8: val =   173  c8 b7
move  9: val =   174  c8 a6
move 10: val =   174  c8 d7
move 11: val =   174  c8 e6
move 12: val =   177  c8 f5
move 13: val =   180  c8 g4
move 14: val =   403  c8 h3
move 15: val =   173  e8 f8
move 16: val =   174  e8 d7
move 17: val =   173  e8 e7
move 18: val =   173  e8 g8
move 19: val =   173  h8 g8
move 20: val =   173  h8 f8
move 21: val =   172  g7 g6
move 22: val =   174  g7 g5
move 23: val =   172  h7 h6
move 24: val =   176  a8 b8
move 25: val =   179  c6 b8
move 26: val =   177  c6 d8
move 27: val =   179  c6 a7
move 28: val =   179  c6 e7
move 29: val =   184  c6 a5
move 30: val =   178  c6 d4
move 31: val =   182  d6 d5
move 32: val =   174  f6 g8
move 33: val =   174  f6 d7
move 34: val =   410  f6 d5
move 35: val =   174  f6 h5
move 36: val =   174  a8 a6
move 37: val =   181  f6 g4
BEST MOVE:  h7 h6 val = 172, moveNum = 2221032, time = 1741 msec
Board("R.B.K..R .....PP. .bNP.N.P ....P... .Pp.p... .n.b.... pp...ppp r...k..r", "000");
--- Human: e1 g1
BEST MOVE:  f6 x e4, val=-30, 38 moves in 12 msec
Principle Variation = f6 x e4
BEST MOVE:  h6 h5, val=76, 611 moves in 10 msec
Principle Variation = h6 h5, f2 f4
BEST MOVE:  a8 b8, val=-28, 3189 moves in 11 msec
Principle Variation = a8 b8, b6 e3, f6 x e4
BEST MOVE:  e8 d7, val=80, 32322 moves in 31 msec
Principle Variation = e8 d7, h2 h4, h6 h5, e3 x h6
BEST MOVE:  h6 h5, val=-28, 327107 moves in 189 msec
Principle Variation = h6 h5, h2 h3, a8 b8, b6 e3, d7 x d8
BEST MOVE:  g7 g6, val=168, 1951716 moves in 819 msec
Principle Variation = g7 g6, b3 d2, h5 h4, d2 f3, a2 x a1, g2 x h3
R.B.K..R
.....PP.
.bNP.N.P
....P...
.Pp.p...
.n.b....
pp...ppp
r....rk.
move  1: val =   168  h6 h5
move  2: val =   466  a8 x a2
move  3: val =   296  f6 x e4
move  4: val =   178  a8 a5
move  5: val =   170  a8 a4
move  6: val =   178  a8 a3
move  7: val =   251  a8 a7
move  8: val =   170  c8 b7
move  9: val =   170  c8 a6
move 10: val =   170  c8 d7
move 11: val =   170  c8 e6
move 12: val =   173  c8 f5
move 13: val =   176  c8 g4
move 14: val =   399  c8 h3
move 15: val =   170  e8 f8
move 16: val =   170  e8 d7
move 17: val =   170  e8 e7
move 18: val =   170  e8 g8
move 19: val =   170  h8 g8
move 20: val =   170  h8 f8
move 21: val =   170  h8 h7
move 22: val =   168  g7 g6
move 23: val =   172  g7 g5
move 24: val =   175  c6 b8
move 25: val =   173  c6 d8
move 26: val =   175  c6 a7
move 27: val =   175  c6 e7
move 28: val =   180  c6 a5
move 29: val =   174  c6 d4
move 30: val =   178  d6 d5
move 31: val =   170  f6 g8
move 32: val =   170  f6 d7
move 33: val =   170  f6 h7
move 34: val =   406  f6 d5
move 35: val =   170  f6 h5
move 36: val =   170  a8 a6
move 37: val =   177  f6 g4
move 38: val =   172  a8 b8
BEST MOVE:  g7 g6 val = 168, moveNum = 1951716, time = 819 msec
Board("R.B.K..R .....P.. .bNP.NPP ....P... .Pp.p... .n.b.... pp...ppp r....rk.", "030");
--- Human: b6 c7
BEST MOVE:  f6 x e4, val=-34, 37 moves in 10 msec
Principle Variation = f6 x e4
BEST MOVE:  h6 h5, val=170, 415 moves in 9 msec
Principle Variation = h6 h5, c7 x d6
BEST MOVE:  e8 d7, val=-34, 2252 moves in 10 msec
Principle Variation = e8 d7, c7 b6, f6 x e4
BEST MOVE:  e8 d7, val=72, 13947 moves in 18 msec
Principle Variation = e8 d7, b3 a5, c6 x a5, f2 f4
BEST MOVE:  a8 a7, val=-32, 211739 moves in 116 msec
Principle Variation = a8 a7, c7 b6, h6 h5, f2 f3, c7 x c6
BEST MOVE:  e8 d7, val=74, 988383 moves in 390 msec
Principle Variation = e8 d7, c7 b6, a8 b8, b3 c5, h6 h5, c5 x b4
R.B.K..R
..b..P..
..NP.NPP
....P...
.Pp.p...
.n.b....
pp...ppp
r....rk.
move  1: val =   276  a8 a7
move  2: val =   349  a8 x a2
move  3: val =   297  f6 x e4
move  4: val =   347  a8 a5
move  5: val =   276  a8 a4
move  6: val =   277  a8 a3
move  7: val =   278  a8 b8
move  8: val =   276  c8 b7
move  9: val =   181  c8 a6
move 10: val =   264  c8 d7
move 11: val =   182  c8 e6
move 12: val =   266  c8 f5
move 13: val =   264  c8 g4
move 14: val =   266  c8 h3
move 15: val =   268  e8 f8
move 16: val =    74  e8 d7
move 17: val =    75  e8 e7
move 18: val =    76  e8 g8
move 19: val =    75  h8 g8
move 20: val =    75  h8 f8
move 21: val =    75  h8 h7
move 22: val =    76  c6 b8
move 23: val =    76  c6 d8
move 24: val =    76  c6 a7
move 25: val =    75  c6 e7
move 26: val =    76  c6 a5
move 27: val =    76  c6 d4
move 28: val =   175  d6 d5
move 29: val =    76  f6 g8
move 30: val =    76  f6 d7
move 31: val =    76  f6 h7
move 32: val =    97  f6 d5
move 33: val =    76  f6 h5
move 34: val =    76  a8 a6
move 35: val =    76  f6 g4
move 36: val =   162  g6 g5
move 37: val =   160  h6 h5
BEST MOVE:  e8 d7 val = 74, moveNum = 988383, time = 390 msec
Board("R.B....R ..bK.P.. ..NP.NPP ....P... .Pp.p... .n.b.... pp...ppp r....rk.", "033");
--- Human: c7 d6
BEST MOVE:  d7 x d6, val=-155, 33 moves in 5 msec
Principle Variation = d7 x d6
BEST MOVE:  d7 x d6, val=-149, 124 moves in 3 msec
Principle Variation = d7 x d6, f2 f4
BEST MOVE:  d7 x d6, val=-253, 1602 moves in 5 msec
Principle Variation = d7 x d6, f2 f3, f6 x e4
BEST MOVE:  d7 x d6, val=-145, 9044 moves in 14 msec
Principle Variation = d7 x d6, c4 c5, d6 e6, f2 f4
BEST MOVE:  d7 x d6, val=-249, 67598 moves in 42 msec
Principle Variation = d7 x d6, c4 c5, d6 e6, f2 f3, f6 x e4
BEST MOVE:  d7 x d6, val=-50, 307659 moves in 128 msec
Principle Variation = d7 x d6, f2 f4, e5 x f4, f1 x f4, d6 c5, f2 f4
R.B....R
...K.P..
..Nb.NPP
....P...
.Pp.p...
.n.b....
pp...ppp
r....rk.
move  1: val =   -50  d7 x d6
move  2: val =   -22  a8 x a2
move  3: val =    73  f6 x e4
move  4: val =   -43  a8 a5
move  5: val =   -49  a8 a4
move  6: val =   -46  a8 a3
move  7: val =   -49  a8 a7
move  8: val =   -49  c8 b7
move  9: val =   264  c8 a6
move 10: val =   -49  h8 g8
move 11: val =   -49  h8 f8
move 12: val =   -49  h8 e8
move 13: val =   -49  h8 d8
move 14: val =   -49  h8 h7
move 15: val =   -49  d7 d8
move 16: val =   -47  d7 e8
move 17: val =   -43  a8 b8
move 18: val =   -49  d7 e6
move 19: val =   -43  c6 b8
move 20: val =   -43  c6 d8
move 21: val =   -43  c6 a7
move 22: val =   -43  c6 e7
move 23: val =   -43  c6 a5
move 24: val =   -43  c6 d4
move 25: val =   -49  f6 e8
move 26: val =   -49  f6 g8
move 27: val =   -49  f6 h7
move 28: val =   -43  f6 d5
move 29: val =   -49  f6 h5
move 30: val =   -43  a8 a6
move 31: val =   -49  f6 g4
move 32: val =   -49  g6 g5
move 33: val =   -49  h6 h5
BEST MOVE:  d7 x d6 val = -50, moveNum = 307659, time = 128 msec
Board("R.B....R .....P.. ..NK.NPP ....P... .Pp.p... .n.b.... pp...ppp r....rk.", "033");
--- Human: c4 c5
BEST MOVE:  d6 e6, val=-151, 4 moves in 1 msec
Principle Variation = d6 e6
BEST MOVE:  d6 e6, val=-145, 74 moves in 1 msec
Principle Variation = d6 e6, f2 f4
BEST MOVE:  d6 e6, val=-249, 332 moves in 1 msec
Principle Variation = d6 e6, f2 f3, f6 x e4
BEST MOVE:  d6 c7, val=-143, 11689 moves in 18 msec
Principle Variation = d6 c7, h2 h4, h6 h5, c4 x f7
BEST MOVE:  d6 e7, val=-249, 48889 moves in 31 msec
Principle Variation = d6 e7, f2 f3, c8 e6, b3 c1, c7 x c8
BEST MOVE:  d6 e6, val=-46, 353433 moves in 153 msec
Principle Variation = d6 e6, f2 f4, e5 x f4, f2 f3, e6 x b3, a1 x a2
R.B....R
.....P..
..NK.NPP
..p.P...
.P..p...
.n.b....
pp...ppp
r....rk.
move  1: val =   -44  d6 e7
move  2: val =   -41  d6 d7
move  3: val =   -44  d6 c7
move  4: val =   -46  d6 e6
BEST MOVE:  d6 e6 val = -46, moveNum = 353433, time = 153 msec
Board("R.B....R .....P.. ..N.KNPP ..p.P... .P..p... .n.b.... pp...ppp r....rk.", "033");
--- Human: d3 c4
BEST MOVE:  f6 d5, val=-152, 3 moves in 0 msec
Principle Variation = f6 d5
BEST MOVE:  e6 d7, val=-51, 89 moves in 1 msec
Principle Variation = e6 d7, c4 x f7
BEST MOVE:  e6 e7, val=-247, 634 moves in 2 msec
Principle Variation = e6 e7, f2 f3, f6 x e4
BEST MOVE:  e6 e7, val=-49, 3027 moves in 4 msec
Principle Variation = e6 e7, f2 f3, h6 h5, c4 x f7
BEST MOVE:  e6 e7, val=-247, 19513 moves in 22 msec
Principle Variation = e6 e7, f2 f3, g6 g5, h2 h4, f6 x e4
BEST MOVE:  e6 e7, val=-44, 217737 moves in 113 msec
Principle Variation = e6 e7, f2 f4, e5 x f4, f1 x f4, a2 a7, a2 x f7
R.B....R
.....P..
..N.KNPP
..p.P...
.Pb.p...
.n......
pp...ppp
r....rk.
move  1: val =   -44  e6 e7
move  2: val =   -43  e6 d7
move  3: val =   176  f6 d5
BEST MOVE:  e6 e7 val = -44, moveNum = 217737, time = 113 msec
Board("R.B....R ....KP.. ..N..NPP ..p.P... .Pb.p... .n...... pp...ppp r....rk.", "033");
--- Human: c4 d5
BEST MOVE:  f6 x d5, val=-477, 38 moves in 4 msec
Principle Variation = f6 x d5
BEST MOVE:  f6 x d5, val=-145, 137 moves in 3 msec
Principle Variation = f6 x d5, e4 x d5
BEST MOVE:  c8 a6, val=-322, 2864 moves in 7 msec
Principle Variation = c8 a6, d5 x c6, a6 x f1
BEST MOVE:  c8 d7, val=-139, 13543 moves in 17 msec
Principle Variation = c8 d7, f2 f4, f6 x d5, f2 f4
BEST MOVE:  a8 a6, val=-245, 230916 moves in 109 msec
Principle Variation = a8 a6, f2 f3, f6 x d5, h2 h3, a8 x a2
BEST MOVE:  c8 d7, val=-59, 808864 moves in 298 msec
Principle Variation = c8 d7, f1 e1, h6 h5, f2 f3, h6 h5, f2 f4
R.B....R
....KP..
..N..NPP
..pbP...
.P..p...
.n......
pp...ppp
r....rk.
move  1: val =   -49  a8 a6
move  2: val =   -28  a8 x a2
move  3: val =   -43  f6 x d5
move  4: val =   -48  f6 x e4
move  5: val =    72  a8 a4
move  6: val =   -48  a8 a3
move  7: val =     1  a8 a7
move  8: val =   -59  c8 b7
move  9: val =     1  c8 a6
move 10: val =   -59  c8 d7
move 11: val =    70  c8 e6
move 12: val =   -52  c8 f5
move 13: val =   -53  c8 g4
move 14: val =   -53  c8 h3
move 15: val =    72  h8 g8
move 16: val =    72  h8 f8
move 17: val =   176  h8 e8
move 18: val =    72  h8 d8
move 19: val =    72  h8 h7
move 20: val =   -55  e7 d8
move 21: val =   501  e7 e8
move 22: val =    72  e7 f8
move 23: val =   -55  e7 d7
move 24: val =    26  c6 b8
move 25: val =    26  c6 d8
move 26: val =    26  c6 a7
move 27: val =    28  c6 a5
move 28: val =    28  c6 d4
move 29: val =   -49  f6 e8
move 30: val =   -47  f6 g8
move 31: val =   -49  f6 d7
move 32: val =   -49  f6 h7
move 33: val =     1  a8 b8
move 34: val =   -49  f6 h5
move 35: val =   -53  a8 a5
move 36: val =   -49  f6 g4
move 37: val =    68  g6 g5
move 38: val =    68  h6 h5
BEST MOVE:  c8 d7 val = -59, moveNum = 808864, time = 298 msec
Board("R......R ...BKP.. ..N..NPP ..pbP... .P..p... .n...... pp...ppp r....rk.", "033");
--- Human: f1 d1
BEST MOVE:  f6 x d5, val=-477, 42 moves in 5 msec
Principle Variation = f6 x d5
BEST MOVE:  f6 x d5, val=-145, 152 moves in 4 msec
Principle Variation = f6 x d5, e4 x d5
BEST MOVE:  d7 g4, val=-322, 3332 moves in 7 msec
Principle Variation = d7 g4, d5 x c6, g4 x d1
BEST MOVE:  d7 e8, val=-139, 22177 moves in 25 msec
Principle Variation = d7 e8, f2 f4, f6 x d5, d1 x d7
BEST MOVE:  a8 e8, val=-245, 440716 moves in 191 msec
Principle Variation = a8 e8, f2 f3, f6 x d5, e4 x d5, f6 x e4
BEST MOVE:  f6 x d5, val=-43, 1348996 moves in 448 msec
Principle Variation = f6 x d5, e4 x d5, c6 a7, f2 f4, c6 a7, f2 f4
R......R
...BKP..
..N..NPP
..pbP...
.P..p...
.n......
pp...ppp
r..r..k.
move  1: val =    74  a8 e8
move  2: val =    76  a8 x a2
move  3: val =   -43  f6 x d5
move  4: val =    67  f6 x e4
move  5: val =     1  a8 f8
move  6: val =     1  a8 g8
move  7: val =     1  a8 a7
move  8: val =   -41  a8 a6
move  9: val =    41  a8 a5
move 10: val =    74  a8 a4
move 11: val =    45  a8 a3
move 12: val =   -41  a8 c8
move 13: val =    74  h8 g8
move 14: val =    74  h8 f8
move 15: val =    74  h8 e8
move 16: val =   -41  h8 d8
move 17: val =   -41  h8 c8
move 18: val =    74  h8 b8
move 19: val =    74  h8 h7
move 20: val =   176  d7 c8
move 21: val =     1  d7 e8
move 22: val =   170  d7 e6
move 23: val =    50  d7 f5
move 24: val =     1  d7 g4
move 25: val =   178  d7 h3
move 26: val =    41  e7 d8
move 27: val =    74  e7 e8
move 28: val =    74  e7 f8
move 29: val =    30  c6 b8
move 30: val =   172  c6 d8
move 31: val =    24  c6 a7
move 32: val =   174  c6 a5
move 33: val =   128  c6 d4
move 34: val =   -42  f6 e8
move 35: val =   -42  f6 g8
move 36: val =   -41  f6 h7
move 37: val =   -41  a8 d8
move 38: val =   -42  f6 h5
move 39: val =     1  a8 b8
move 40: val =   -42  f6 g4
move 41: val =    70  g6 g5
move 42: val =    70  h6 h5
BEST MOVE:  f6 x d5 val = -43, moveNum = 1348996, time = 448 msec
Board("R......R ...BKP.. ..N...PP ..pNP... .P..p... .n...... pp...ppp r..r..k.", "033");
--- Human: f1 d1
BEST MOVE:  f6 x d5, val=-477, 42 moves in 5 msec
Principle Variation = f6 x d5
BEST MOVE:  f6 x d5, val=-145, 152 moves in 4 msec
Principle Variation = f6 x d5, e4 x d5
BEST MOVE:  d7 g4, val=-322, 3332 moves in 8 msec
Principle Variation = d7 g4, d5 x c6, g4 x d1
BEST MOVE:  d7 e8, val=-139, 22177 moves in 23 msec
Principle Variation = d7 e8, f2 f4, f6 x d5, d1 x d7
BEST MOVE:  a8 e8, val=-245, 440716 moves in 192 msec
Principle Variation = a8 e8, f2 f3, f6 x d5, e4 x d5, f6 x e4
BEST MOVE:  f6 x d5, val=-43, 1348996 moves in 450 msec
Principle Variation = f6 x d5, e4 x d5, c6 a7, f2 f4, c6 a7, f2 f4
R......R
...BKP..
..N..NPP
..pbP...
.P..p...
.n......
pp...ppp
r..r..k.
move  1: val =    74  a8 e8
move  2: val =    76  a8 x a2
move  3: val =   -43  f6 x d5
move  4: val =    67  f6 x e4
move  5: val =     1  a8 f8
move  6: val =     1  a8 g8
move  7: val =     1  a8 a7
move  8: val =   -41  a8 a6
move  9: val =    41  a8 a5
move 10: val =    74  a8 a4
move 11: val =    45  a8 a3
move 12: val =   -41  a8 c8
move 13: val =    74  h8 g8
move 14: val =    74  h8 f8
move 15: val =    74  h8 e8
move 16: val =   -41  h8 d8
move 17: val =   -41  h8 c8
move 18: val =    74  h8 b8
move 19: val =    74  h8 h7
move 20: val =   176  d7 c8
move 21: val =     1  d7 e8
move 22: val =   170  d7 e6
move 23: val =    50  d7 f5
move 24: val =     1  d7 g4
move 25: val =   178  d7 h3
move 26: val =    41  e7 d8
move 27: val =    74  e7 e8
move 28: val =    74  e7 f8
move 29: val =    30  c6 b8
move 30: val =   172  c6 d8
move 31: val =    24  c6 a7
move 32: val =   174  c6 a5
move 33: val =   128  c6 d4
move 34: val =   -42  f6 e8
move 35: val =   -42  f6 g8
move 36: val =   -41  f6 h7
move 37: val =   -41  a8 d8
move 38: val =   -42  f6 h5
move 39: val =     1  a8 b8
move 40: val =   -42  f6 g4
move 41: val =    70  g6 g5
move 42: val =    70  h6 h5
BEST MOVE:  f6 x d5 val = -43, moveNum = 1348996, time = 450 msec
Board("R......R ...BKP.. ..N...PP ..pNP... .P..p... .n...... pp...ppp r..r..k.", "033");
--- Human: e4 d5
BEST MOVE:  a8 x a2, val=-245, 39 moves in 3 msec
Principle Variation = a8 x a2
BEST MOVE:  c6 a7, val=-137, 766 moves in 3 msec
Principle Variation = c6 a7, f2 f4
BEST MOVE:  d7 g4, val=-243, 4136 moves in 7 msec
Principle Variation = d7 g4, d1 d3, a8 x a2
BEST MOVE:  c6 a7, val=-43, 64487 moves in 58 msec
Principle Variation = c6 a7, d1 e1, f7 f5, f2 f4
BEST MOVE:  c6 d8, val=-238, 150504 moves in 42 msec
Principle Variation = c6 d8, d5 d6, e7 e6, d5 x c6, b2 x b3
BEST MOVE:  c6 b8, val=-39, 727592 moves in 263 msec
Principle Variation = c6 b8, c5 c6, d7 c8, d1 e1, f7 f5, e1 x e5
R......R
...BKP..
..N...PP
..ppP...
.P......
.n......
pp...ppp
r..r..k.
move  1: val =   -39  c6 d8
move  2: val =    87  a8 x a2
move  3: val =    81  a8 d8
move  4: val =    80  a8 e8
move  5: val =    80  a8 f8
move  6: val =    80  a8 g8
move  7: val =    79  a8 a7
move  8: val =   -17  a8 a6
move  9: val =   137  a8 a5
move 10: val =    79  a8 a4
move 11: val =   137  a8 a3
move 12: val =   -17  a8 c8
move 13: val =    79  h8 g8
move 14: val =    79  h8 f8
move 15: val =    79  h8 e8
move 16: val =    81  h8 d8
move 17: val =   -17  h8 c8
move 18: val =    79  h8 b8
move 19: val =    79  h8 h7
move 20: val =    87  d7 c8
move 21: val =    79  d7 e8
move 22: val =    81  d7 e6
move 23: val =    87  d7 f5
move 24: val =   -13  d7 g4
move 25: val =    87  d7 h3
move 26: val =   316  e7 d8
move 27: val =    79  e7 e8
move 28: val =    79  e7 f8
move 29: val =    79  e7 f6
move 30: val =    75  f7 f6
move 31: val =    75  f7 f5
move 32: val =   -39  c6 b8
move 33: val =    80  a8 b8
move 34: val =   -35  c6 a7
move 35: val =   -34  c6 a5
move 36: val =   -37  c6 d4
move 37: val =    75  g6 g5
move 38: val =    75  h6 h5
move 39: val =    83  e5 e4
BEST MOVE:  c6 b8 val = -39, moveNum = 727592, time = 263 msec
Board("RN.....R ...BKP.. ......PP ..ppP... .P...... .n...... pp...ppp r..r..k.", "033");
--- Human: d1 e1
BEST MOVE:  a8 x a2, val=-243, 32 moves in 2 msec
Principle Variation = a8 x a2
BEST MOVE:  f7 f5, val=-43, 587 moves in 3 msec
Principle Variation = f7 f5, e1 x e5
BEST MOVE:  f7 f6, val=-243, 2958 moves in 6 msec
Principle Variation = f7 f6, f2 f3, a8 x a2
BEST MOVE:  f7 f6, val=-41, 11574 moves in 13 msec
Principle Variation = f7 f6, f2 f4, e5 e4, e1 x e5
BEST MOVE:  f7 f6, val=-243, 107221 moves in 60 msec
Principle Variation = f7 f6, h2 h4, h6 h5, h2 h4, f6 x e5
BEST MOVE:  f7 f6, val=-37, 509579 moves in 194 msec
Principle Variation = f7 f6, c5 c6, d7 c8, c5 c6, e7 f7, e1 x e5
RN.....R
...BKP..
......PP
..ppP...
.P......
.n......
pp...ppp
r...r.k.
move  1: val =   -37  f7 f6
move  2: val =   356  a8 x a2
move  3: val =   -35  a8 a5
move  4: val =   -31  a8 a4
move  5: val =   -35  a8 a3
move  6: val =   -31  a8 a6
move  7: val =   -31  b8 a6
move  8: val =   -33  b8 c6
move  9: val =   -31  h8 g8
move 10: val =   -31  h8 f8
move 11: val =   -36  h8 e8
move 12: val =   -31  h8 d8
move 13: val =   -31  h8 c8
move 14: val =   -31  h8 h7
move 15: val =   -36  d7 c8
move 16: val =   -34  d7 e8
move 17: val =   -31  d7 c6
move 18: val =   -36  d7 b5
move 19: val =   -36  d7 a4
move 20: val =   -31  d7 e6
move 21: val =   -34  d7 f5
move 22: val =   -36  d7 g4
move 23: val =   287  d7 h3
move 24: val =   -36  e7 d8
move 25: val =   -31  e7 e8
move 26: val =   -36  e7 f8
move 27: val =   -35  e7 f6
move 28: val =   -31  a8 a7
move 29: val =    58  f7 f5
move 30: val =   -36  g6 g5
move 31: val =   -36  h6 h5
move 32: val =    58  e5 e4
BEST MOVE:  f7 f6 val = -37, moveNum = 509579, time = 194 msec
Board("RN.....R ...BK... .....PPP ..ppP... .P...... .n...... pp...ppp r...r.k.", "033");
--- Human: d5 d6
BEST MOVE:  e7 e6, val=-148, 5 moves in 1 msec
Principle Variation = e7 e6
BEST MOVE:  e7 e6, val=-42, 40 moves in 0 msec
Principle Variation = e7 e6, e1 x e5
BEST MOVE:  e7 e6, val=-244, 1176 moves in 3 msec
Principle Variation = e7 e6, f2 f3, e6 x d6
BEST MOVE:  e7 e6, val=-40, 4357 moves in 5 msec
Principle Variation = e7 e6, f2 f4, e5 e4, e1 x e5
BEST MOVE:  e7 e6, val=-244, 80862 moves in 65 msec
Principle Variation = e7 e6, f2 f3, h6 h5, h2 h4, f6 x e5
BEST MOVE:  e7 d8, val=-40, 503691 moves in 196 msec
Principle Variation = e7 d8, a2 a3, b4 x a3, b3 c5, e6 d5, e1 x e5
RN.....R
...BK...
...p.PPP
..p.P...
.P......
.n......
pp...ppp
r...r.k.
move  1: val =   -25  e7 e6
move  2: val =   -38  e7 e8
move  3: val =   -40  e7 f8
move  4: val =   -38  e7 f7
move  5: val =   -40  e7 d8
BEST MOVE:  e7 d8 val = -40, moveNum = 503691, time = 196 msec
Board("RN.K...R ...B.... ...p.PPP ..p.P... .P...... .n...... pp...ppp r...r.k.", "033");
--- Human: b3 d2
BEST MOVE:  a8 x a2, val=-246, 28 moves in 4 msec
Principle Variation = a8 x a2
BEST MOVE:  b4 b3, val=-44, 502 moves in 3 msec
Principle Variation = b4 b3, e1 x e5
BEST MOVE:  h6 h5, val=-244, 4483 moves in 7 msec
Principle Variation = h6 h5, f2 f3, a5 x c5
BEST MOVE:  b8 a6, val=-44, 12792 moves in 13 msec
Principle Variation = b8 a6, a1 c1, b4 b3, e1 x a1
BEST MOVE:  b8 a6, val=-246, 119800 moves in 69 msec
Principle Variation = b8 a6, c5 c6, d7 x c6, g2 g4, a8 x a2
BEST MOVE:  h6 h5, val=-42, 1298931 moves in 533 msec
Principle Variation = h6 h5, f2 f3, h6 h5, c4 b6, h6 h5, f2 f4
RN.K...R
...B....
...p.PPP
..p.P...
.P......
........
pp.n.ppp
r...r.k.
move  1: val =   -42  b8 a6
move  2: val =   258  a8 x a2
move  3: val =   -41  a8 a5
move  4: val =   -40  a8 a4
move  5: val =   350  a8 a3
move  6: val =   -40  a8 a6
move  7: val =   -40  a8 a7
move  8: val =   -40  b8 c6
move  9: val =   -40  d8 c8
move 10: val =   -40  d8 e8
move 11: val =   -40  h8 g8
move 12: val =   -40  h8 f8
move 13: val =   -40  h8 e8
move 14: val =   -40  h8 h7
move 15: val =   -40  d7 c8
move 16: val =   -40  d7 e8
move 17: val =   -41  d7 c6
move 18: val =   -40  d7 b5
move 19: val =   -40  d7 a4
move 20: val =   -42  d7 e6
move 21: val =   -40  d7 f5
move 22: val =   -40  d7 g4
move 23: val =   -40  d7 h3
move 24: val =   -42  f6 f5
move 25: val =   -42  g6 g5
move 26: val =   -42  h6 h5
move 27: val =   -41  e5 e4
move 28: val =    48  b4 b3
BEST MOVE:  h6 h5 val = -42, moveNum = 1298931, time = 533 msec
Board("RN.K...R ...B.... ...p.PP. ..p.P..P .P...... ........ pp.n.ppp r...r.k.", "033");
--- Human: d2 e4
BEST MOVE:  a8 x a2, val=-247, 28 moves in 3 msec
Principle Variation = a8 x a2
BEST MOVE:  f6 f5, val=-145, 359 moves in 3 msec
Principle Variation = f6 f5, f2 f4
BEST MOVE:  f6 f5, val=-252, 1534 moves in 3 msec
Principle Variation = f6 f5, e4 f6, a8 x a2
BEST MOVE:  h8 f8, val=-48, 8282 moves in 11 msec
Principle Variation = h8 f8, e4 d2, d7 e6, e1 x e5
BEST MOVE:  h8 f8, val=-248, 172827 moves in 94 msec
Principle Variation = h8 f8, f2 f3, f6 f5, f2 f3, a5 x c5
BEST MOVE:  h8 f8, val=-48, 392677 moves in 110 msec
Principle Variation = h8 f8, e4 d2, b8 a6, a1 c1, f6 x g5, e1 x e5
RN.K...R
...B....
...p.PP.
..p.P..P
.P..n...
........
pp...ppp
r...r.k.
move  1: val =   -48  h8 f8
move  2: val =   -40  a8 x a2
move  3: val =   -46  a8 a5
move  4: val =   -46  a8 a4
move  5: val =   -46  a8 a3
move  6: val =   -46  a8 a6
move  7: val =   -46  b8 a6
move  8: val =   -47  b8 c6
move  9: val =   -46  d8 c8
move 10: val =   -46  d8 e8
move 11: val =   -46  h8 g8
move 12: val =   -46  a8 a7
move 13: val =   -46  h8 e8
move 14: val =   -46  h8 h7
move 15: val =   -46  h8 h6
move 16: val =   -46  d7 c8
move 17: val =   -46  d7 e8
move 18: val =   -44  d7 c6
move 19: val =   -42  d7 b5
move 20: val =   -46  d7 a4
move 21: val =   -40  d7 e6
move 22: val =   -46  d7 f5
move 23: val =   -47  d7 g4
move 24: val =   -46  d7 h3
move 25: val =   -47  f6 f5
move 26: val =   -46  g6 g5
move 27: val =   -46  h5 h4
move 28: val =   -47  b4 b3
BEST MOVE:  h8 f8 val = -48, moveNum = 392677, time = 110 msec
Board("RN.K.R.. ...B.... ...p.PP. ..p.P..P .P..n... ........ pp...ppp r...r.k.", "033");
--- Human: e4 g3
BEST MOVE:  a8 x a2, val=-250, 28 moves in 3 msec
Principle Variation = a8 x a2
BEST MOVE:  b4 b3, val=-48, 457 moves in 3 msec
Principle Variation = b4 b3, e1 x e5
BEST MOVE:  h5 h4, val=-251, 4191 moves in 7 msec
Principle Variation = h5 h4, g3 e4, a8 x a2
BEST MOVE:  a8 a5, val=-142, 20757 moves in 22 msec
Principle Variation = a8 a5, f2 f3, a5 x c5, e1 x a1
BEST MOVE:  h5 h4, val=-254, 148232 moves in 75 msec
Principle Variation = h5 h4, g3 h1, d7 c6, e1 x a1, b4 b3
BEST MOVE:  h5 h4, val=-145, 499893 moves in 176 msec
Principle Variation = h5 h4, g3 e4, b8 a6, h2 h3, g6 x h5, e1 x e5
RN.K.R..
...B....
...p.PP.
..p.P..P
.P......
......n.
pp...ppp
r...r.k.
move  1: val =  -145  h5 h4
move  2: val =   -54  a8 x a2
move  3: val =  -144  a8 a5
move  4: val =  -144  a8 a4
move  5: val =  -144  a8 a3
move  6: val =  -144  a8 a6
move  7: val =  -144  b8 a6
move  8: val =  -144  b8 c6
move  9: val =  -144  d8 c8
move 10: val =  -144  d8 e8
move 11: val =  -144  f8 e8
move 12: val =  -144  f8 g8
move 13: val =  -144  f8 h8
move 14: val =  -144  f8 f7
move 15: val =  -144  d7 c8
move 16: val =  -144  d7 e8
move 17: val =  -144  d7 c6
move 18: val =  -144  d7 b5
move 19: val =  -144  d7 a4
move 20: val =  -144  d7 e6
move 21: val =  -144  d7 f5
move 22: val =  -144  d7 g4
move 23: val =  -144  d7 h3
move 24: val =   -55  f6 f5
move 25: val =   -54  g6 g5
move 26: val =   -55  e5 e4
move 27: val =  -144  a8 a7
move 28: val =  -121  b4 b3
BEST MOVE:  h5 h4 val = -145, moveNum = 499893, time = 176 msec
Board("RN.K.R.. ...B.... ...p.PP. ..p.P... .P.....P ......n. pp...ppp r...r.k.", "033");
--- Human: g3 e4
BEST MOVE:  a8 x a2, val=-251, 27 moves in 3 msec
Principle Variation = a8 x a2
BEST MOVE:  f6 f5, val=-149, 345 moves in 3 msec
Principle Variation = f6 f5, f2 f4
BEST MOVE:  f6 f5, val=-258, 1604 moves in 4 msec
Principle Variation = f6 f5, e4 d2, a8 x a2
BEST MOVE:  b8 a6, val=-145, 9163 moves in 13 msec
Principle Variation = b8 a6, h2 h3, f6 f5, e1 x a1
BEST MOVE:  f6 f5, val=-258, 115210 moves in 70 msec
Principle Variation = f6 f5, e4 d2, e5 e4, h1 g1, f5 x e4
BEST MOVE:  a8 a5, val=-145, 514354 moves in 205 msec
Principle Variation = a8 a5, e1 e3, d7 c6, e1 x a1, f5 x e4, c7 x b8-q
RN.K.R..
...B....
...p.PP.
..p.P...
.P..n..P
........
pp...ppp
r...r.k.
move  1: val =   -56  f6 f5
move  2: val =   -44  a8 x a2
move  3: val =  -145  a8 a5
move  4: val =   -54  a8 a4
move  5: val =   -54  a8 a3
move  6: val =  -144  a8 a6
move  7: val =   -55  b8 a6
move  8: val =   -59  b8 c6
move  9: val =  -144  d8 c8
move 10: val =  -144  d8 e8
move 11: val =  -144  f8 e8
move 12: val =  -144  f8 g8
move 13: val =  -144  f8 h8
move 14: val =  -144  f8 f7
move 15: val =  -144  d7 c8
move 16: val =  -144  d7 e8
move 17: val =  -144  d7 c6
move 18: val =  -144  d7 b5
move 19: val =  -144  d7 a4
move 20: val =  -144  d7 e6
move 21: val =   -56  d7 f5
move 22: val =   -54  d7 g4
move 23: val =   -54  d7 h3
move 24: val =  -144  a8 a7
move 25: val =   -62  g6 g5
move 26: val =  -131  b4 b3
move 27: val =   -62  h4 h3
BEST MOVE:  a8 a5 val = -145, moveNum = 514354, time = 205 msec
Board(".N.K.R.. ...B.... ...p.PP. R.p.P... .P..n..P ........ pp...ppp r...r.k.", "033");
--- Human: e1 c1
BEST MOVE:  a5 x c5, val=-255, 29 moves in 1 msec
Principle Variation = a5 x c5
BEST MOVE:  f6 f5, val=-149, 413 moves in 2 msec
Principle Variation = f6 f5, f2 f4
BEST MOVE:  f6 f5, val=-262, 1866 moves in 4 msec
Principle Variation = f6 f5, e4 d2, a5 x c5
BEST MOVE:  f6 f5, val=-156, 6998 moves in 10 msec
Principle Variation = f6 f5, e4 g5, f5 f4, f2 f3
BEST MOVE:  f6 f5, val=-261, 158141 moves in 94 msec
Principle Variation = f6 f5, e4 d2, e5 e4, f2 f4, e4 f3
BEST MOVE:  d7 c6, val=-148, 841845 moves in 320 msec
Principle Variation = d7 c6, e4 d2, c6 d5, c1 x a1, e5 e4, f2 f4
.N.K.R..
...B....
...p.PP.
R.p.P...
.P..n..P
........
pp...ppp
r.r...k.
move  1: val =   -62  f6 f5
move  2: val =   -55  a5 x c5
move  3: val =    19  a5 x a2
move  4: val =   -60  d8 e8
move  5: val =   -52  f8 e8
move  6: val =   -50  f8 g8
move  7: val =   -56  f8 h8
move  8: val =   -60  f8 f7
move  9: val =   -50  d7 c8
move 10: val =   -54  d7 e8
move 11: val =  -148  d7 c6
move 12: val =  -146  d7 b5
move 13: val =  -146  d7 a4
move 14: val =  -147  d7 e6
move 15: val =  -146  d7 f5
move 16: val =  -146  d7 g4
move 17: val =  -146  d7 h3
move 18: val =  -147  b8 a6
move 19: val =   -66  g6 g5
move 20: val =  -146  a5 a6
move 21: val =  -146  a5 a7
move 22: val =  -146  a5 a8
move 23: val =  -146  a5 b5
move 24: val =  -146  b8 c6
move 25: val =  -146  a5 a4
move 26: val =  -146  a5 a3
move 27: val =  -146  d8 c8
move 28: val =  -131  b4 b3
move 29: val =  -147  h4 h3
BEST MOVE:  d7 c6 val = -148, moveNum = 841845, time = 320 msec
Board(".N.K.R.. ........ ..Bp.PP. R.p.P... .P..n..P ........ pp...ppp r.r...k.", "033");
--- Human: e4 d2
BEST MOVE:  a5 x c5, val=-260, 32 moves in 3 msec
Principle Variation = a5 x c5
BEST MOVE:  g6 g5, val=-154, 441 moves in 3 msec
Principle Variation = g6 g5, f2 f4
BEST MOVE:  e5 e4, val=-259, 2123 moves in 5 msec
Principle Variation = e5 e4, f2 f3, e4 x f3
BEST MOVE:  c6 d5, val=-148, 49922 moves in 45 msec
Principle Variation = c6 d5, d2 f3, d5 x f3, a1 x c1
BEST MOVE:  e5 e4, val=-257, 227431 moves in 86 msec
Principle Variation = e5 e4, c1 c4, b8 a6, h2 h3, a5 x c5
BEST MOVE:  c6 d5, val=-144, 804446 moves in 280 msec
Principle Variation = c6 d5, c5 c6, d8 c8, d2 x c4, e5 e4, d2 x c4
.N.K.R..
........
..Bp.PP.
R.p.P...
.P.....P
........
pp.n.ppp
r.r...k.
move  1: val =   -52  e5 e4
move  2: val =   -27  c6 x g2
move  3: val =    65  a5 x c5
move  4: val =    19  a5 x a2
move  5: val =   -54  d8 d7
move  6: val =   -54  f8 e8
move  7: val =   -54  f8 g8
move  8: val =   -54  f8 h8
move  9: val =   -54  f8 f7
move 10: val =   -52  c6 b7
move 11: val =   -52  c6 a8
move 12: val =   -52  c6 d7
move 13: val =   -52  c6 e8
move 14: val =   -52  c6 b5
move 15: val =   -53  c6 a4
move 16: val =  -144  c6 d5
move 17: val =   -56  c6 e4
move 18: val =   -62  c6 f3
move 19: val =   -64  b8 a6
move 20: val =   -68  f6 f5
move 21: val =   -64  g6 g5
move 22: val =   -64  a5 a6
move 23: val =   -64  a5 a7
move 24: val =   -64  a5 a8
move 25: val =   -64  a5 b5
move 26: val =   -64  d8 c8
move 27: val =   -64  a5 a4
move 28: val =   -60  a5 a3
move 29: val =   -64  d8 e8
move 30: val =   -64  b8 d7
move 31: val =  -125  b4 b3
move 32: val =   -64  h4 h3
BEST MOVE:  c6 d5 val = -144, moveNum = 804446, time = 280 msec
Board(".N.K.R.. ........ ...p.PP. R.pBP... .P.....P ........ pp.n.ppp r.r...k.", "033");
--- Human: a2 a4
BEST MOVE:  b4 a3, val=-257, 34 moves in 3 msec
Principle Variation = b4 a3
BEST MOVE:  b4 a3, val=-153, 148 moves in 2 msec
Principle Variation = b4 a3, b2 x a3
BEST MOVE:  b4 a3, val=-257, 1775 moves in 5 msec
Principle Variation = b4 a3, b2 x a3, a5 x c5
BEST MOVE:  b4 a3, val=-151, 9674 moves in 13 msec
Principle Variation = b4 a3, b2 x a3, g6 g5, f2 f4
BEST MOVE:  e5 e4, val=-256, 118878 moves in 67 msec
Principle Variation = e5 e4, h2 h3, b4 b3, f2 f3, d5 x g2
BEST MOVE:  b4 a3, val=-148, 940782 moves in 398 msec
Principle Variation = b4 a3, b2 x a3, g6 g5, c1 x a1, g6 g5, c7 x b8-q
.N.K.R..
........
...p.PP.
R.pBP...
pP.....P
........
.p.n.ppp
r.r...k.
move  1: val =   -51  e5 e4
move  2: val =    71  a5 x c5
move  3: val =   244  a5 x a4
move  4: val =   -23  d5 x g2
move  5: val =   -49  d8 e8
move  6: val =   -54  d8 d7
move  7: val =  -140  f8 e8
move  8: val =  -140  f8 g8
move  9: val =  -140  f8 h8
move 10: val =  -140  f8 f7
move 11: val =  -144  f6 f5
move 12: val =  -144  g6 g5
move 13: val =  -143  a5 a6
move 14: val =  -143  a5 a7
move 15: val =  -143  a5 a8
move 16: val =  -143  a5 b5
move 17: val =  -144  b8 a6
move 18: val =  -146  b8 c6
move 19: val =  -145  d5 c6
move 20: val =  -145  d5 b7
move 21: val =  -145  d5 a8
move 22: val =  -145  d5 e6
move 23: val =  -145  d5 f7
move 24: val =  -145  d5 g8
move 25: val =  -145  d5 c4
move 26: val =  -145  d5 b3
move 27: val =  -145  d5 a2
move 28: val =  -145  d5 e4
move 29: val =  -145  d5 f3
move 30: val =  -145  d8 c8
move 31: val =  -145  b8 d7
move 32: val =  -144  b4 b3
move 33: val =  -148  b4 a3
move 34: val =  -147  h4 h3
BEST MOVE:  b4 a3 val = -148, moveNum = 940782, time = 398 msec
Board(".N.K.R.. ........ ...p.PP. R.pBP... .......P P....... .p.n.ppp r.r...k.", "033");
--- Human: b2 a3
BEST MOVE:  a5 x c5, val=-257, 33 moves in 4 msec
Principle Variation = a5 x c5
BEST MOVE:  g6 g5, val=-151, 399 moves in 3 msec
Principle Variation = g6 g5, f2 f4
BEST MOVE:  e5 e4, val=-256, 2042 moves in 5 msec
Principle Variation = e5 e4, f2 f3, e4 x f3
BEST MOVE:  g6 g5, val=-148, 19099 moves in 23 msec
Principle Variation = g6 g5, d2 f3, d5 x f3, a1 x c1
BEST MOVE:  e5 e4, val=-256, 164872 moves in 79 msec
Principle Variation = e5 e4, h2 h3, g6 g5, c1 x a1, d5 x g2
BEST MOVE:  b8 a6, val=-144, 1500770 moves in 638 msec
Principle Variation = b8 a6, c5 c6, f6 f5, a1 x c1, g6 g5, c7 x b8-q
.N.K.R..
........
...p.PP.
R.pBP...
.......P
p.......
...n.ppp
r.r...k.
move  1: val =   -51  e5 e4
move  2: val =    71  a5 x c5
move  3: val =    23  a5 x a3
move  4: val =   -23  d5 x g2
move  5: val =   -49  d8 e8
move  6: val =   -53  d8 d7
move  7: val =   -53  f8 e8
move  8: val =   -53  f8 g8
move  9: val =   -53  f8 h8
move 10: val =   -53  f8 f7
move 11: val =   -57  f6 f5
move 12: val =   -57  g6 g5
move 13: val =   -56  a5 a6
move 14: val =   -56  a5 a7
move 15: val =   -56  a5 a8
move 16: val =  -139  a5 b5
move 17: val =  -144  b8 a6
move 18: val =  -143  a5 a4
move 19: val =  -143  b8 c6
move 20: val =  -143  d5 c6
move 21: val =  -143  d5 b7
move 22: val =  -143  d5 a8
move 23: val =  -143  d5 e6
move 24: val =  -143  d5 f7
move 25: val =  -143  d5 g8
move 26: val =  -143  d5 c4
move 27: val =  -143  d5 b3
move 28: val =  -143  d5 a2
move 29: val =  -143  d5 e4
move 30: val =  -143  d5 f3
move 31: val =   -54  d8 c8
move 32: val =  -143  b8 d7
move 33: val =  -143  h4 h3
BEST MOVE:  b8 a6 val = -144, moveNum = 1500770, time = 638 msec
Board("...K.R.. ........ N..p.PP. R.pBP... .......P p....... ...n.ppp r.r...k.", "033");
--- Human: c5 c6
BEST MOVE:  d5 x c6, val=-250, 28 moves in 3 msec
Principle Variation = d5 x c6
BEST MOVE:  g6 g5, val=-147, 294 moves in 3 msec
Principle Variation = g6 g5, f2 f4
BEST MOVE:  e5 e4, val=-250, 2632 moves in 5 msec
Principle Variation = e5 e4, h2 h3, d5 x c6
BEST MOVE:  g6 g5, val=-144, 16751 moves in 20 msec
Principle Variation = g6 g5, d2 f3, d5 x f3, c1 x a1
BEST MOVE:  e5 e4, val=-250, 151533 moves in 78 msec
Principle Variation = e5 e4, h2 h3, g6 g5, c1 x a1, f3 x c6
BEST MOVE:  f8 f7, val=-21, 1045156 moves in 432 msec
Principle Variation = f8 f7, a1 b1, a5 x a3, c1 x a1, a6 c5, c8 x f8
...K.R..
........
N.pp.PP.
R..BP...
.......P
p.......
...n.ppp
r.r...k.
move  1: val =   182  e5 e4
move  2: val =   255  a5 x a3
move  3: val =    85  d5 x c6
move  4: val =   108  d5 x g2
move  5: val =    86  f8 h8
move  6: val =   -21  f8 f7
move  7: val =   -20  a6 b8
move  8: val =    76  a6 c7
move  9: val =   -19  a6 c5
move 10: val =    81  a6 b4
move 11: val =    70  f6 f5
move 12: val =    72  g6 g5
move 13: val =   -20  a5 b5
move 14: val =   -20  a5 c5
move 15: val =   -20  a5 a4
move 16: val =   -20  d8 e8
move 17: val =   -20  f8 e8
move 18: val =    77  d5 e6
move 19: val =   -19  d5 f7
move 20: val =   -19  d5 g8
move 21: val =   178  d5 c4
move 22: val =    81  d5 b3
move 23: val =     4  d5 a2
move 24: val =    54  d5 e4
move 25: val =    52  d5 f3
move 26: val =   -20  f8 g8
move 27: val =   -20  d8 c8
move 28: val =    70  h4 h3
BEST MOVE:  f8 f7 val = -21, moveNum = 1045156, time = 432 msec
Board("...K.... .....R.. N.pp.PP. R..BP... .......P p....... ...n.ppp r.r...k.", "033");
--- Human: d2 f1
BEST MOVE:  d5 x c6, val=-250, 30 moves in 4 msec
Principle Variation = d5 x c6
BEST MOVE:  e5 e4, val=-147, 281 moves in 2 msec
Principle Variation = e5 e4, f2 f4
BEST MOVE:  e5 e4, val=-250, 1998 moves in 4 msec
Principle Variation = e5 e4, h2 h3, d5 x c6
BEST MOVE:  g6 g5, val=-145, 17944 moves in 23 msec
Principle Variation = g6 g5, f1 e3, d5 e4, f2 f4
BEST MOVE:  a6 c5, val=-247, 96469 moves in 53 msec
Principle Variation = a6 c5, c6 c7, d8 d7, e3 x d5, e4 x c6
BEST MOVE:  a5 b5, val=-45, 731505 moves in 320 msec
Principle Variation = a5 b5, c6 c7, d8 c8, f2 f4, d8 c8, f2 f4
...K....
.....R..
N.pp.PP.
R..BP...
.......P
p.......
.....ppp
r.r..nk.
move  1: val =    85  a6 c5
move  2: val =   255  a5 x a3
move  3: val =    85  d5 x c6
move  4: val =    84  d5 x g2
move  5: val =   159  f7 d7
move  6: val =   251  f7 c7
move  7: val =   162  f7 b7
move  8: val =    85  f7 a7
move  9: val =   -21  f7 g7
move 10: val =   -21  f7 h7
move 11: val =   -20  a6 b8
move 12: val =    76  a6 c7
move 13: val =   -20  d8 c8
move 14: val =    81  a6 b4
move 15: val =   -25  f6 f5
move 16: val =   -25  g6 g5
move 17: val =   -45  a5 b5
move 18: val =   -22  a5 c5
move 19: val =   -41  a5 a4
move 20: val =   -22  d8 e8
move 21: val =   -22  f7 f8
move 22: val =   -21  d5 e6
move 23: val =     4  d5 c4
move 24: val =   -19  d5 b3
move 25: val =     4  d5 a2
move 26: val =   -41  d5 e4
move 27: val =    10  d5 f3
move 28: val =    78  f7 e7
move 29: val =   -41  e5 e4
move 30: val =   -44  h4 h3
BEST MOVE:  a5 b5 val = -45, moveNum = 731505, time = 320 msec
Board("...K.... .....R.. N.pp.PP. .R.BP... .......P p....... .....ppp r.r..nk.", "033");
--- Human: f1 e3
BEST MOVE:  d5 x c6, val=-248, 35 moves in 3 msec
Principle Variation = d5 x c6
BEST MOVE:  d5 e4, val=-141, 219 moves in 2 msec
Principle Variation = d5 e4, f2 f4
BEST MOVE:  d5 e4, val=-242, 2982 moves in 7 msec
Principle Variation = d5 e4, f2 f3, e4 x f3
BEST MOVE:  d5 e6, val=-136, 13310 moves in 17 msec
Principle Variation = d5 e6, a3 a4, b5 b2, h2 h3
BEST MOVE:  d5 e6, val=-240, 93253 moves in 55 msec
Principle Variation = d5 e6, a1 b1, b5 a5, f2 f3, b6 x c6
BEST MOVE:  d5 e4, val=-40, 665178 moves in 294 msec
Principle Variation = d5 e4, f2 f3, e4 d3, c1 x b1, a6 x c7, f2 f4
...K....
.....R..
N.pp.PP.
.R.BP...
.......P
p...n...
.....ppp
r.r...k.
move  1: val =    85  d5 e6
move  2: val =   175  d5 x c6
move  3: val =    86  d5 x g2
move  4: val =   154  f7 e7
move  5: val =   149  f7 d7
move  6: val =   181  f7 c7
move  7: val =   181  f7 b7
move  8: val =    86  f7 a7
move  9: val =    86  f7 g7
move 10: val =    86  f7 h7
move 11: val =   152  a6 b8
move 12: val =   208  a6 c7
move 13: val =   110  a6 c5
move 14: val =    86  a6 b4
move 15: val =   174  f6 f5
move 16: val =   170  g6 g5
move 17: val =   181  b5 b6
move 18: val =   181  b5 b7
move 19: val =   178  b5 b8
move 20: val =    86  b5 a5
move 21: val =   177  b5 c5
move 22: val =   257  b5 b4
move 23: val =   177  b5 b3
move 24: val =   178  b5 b2
move 25: val =   258  b5 b1
move 26: val =    87  d8 e8
move 27: val =    87  d8 c8
move 28: val =   177  d5 c4
move 29: val =   154  d5 b3
move 30: val =   177  d5 a2
move 31: val =   -40  d5 e4
move 32: val =    12  d5 f3
move 33: val =   -16  f7 f8
move 34: val =   -20  e5 e4
move 35: val =   -39  h4 h3
BEST MOVE:  d5 e4 val = -40, moveNum = 665178, time = 294 msec
Board("...K.... .....R.. N.pp.PP. .R..P... ....B..P p...n... .....ppp r.r...k.", "033");
--- Human: c1 c4
BEST MOVE:  e4 x c6, val=-246, 35 moves in 4 msec
Principle Variation = e4 x c6
BEST MOVE:  e4 d3, val=-46, 174 moves in 3 msec
Principle Variation = e4 d3, c4 x h4
BEST MOVE:  f6 f5, val=-244, 1940 moves in 5 msec
Principle Variation = f6 f5, f2 f3, e4 x f3
BEST MOVE:  e4 d3, val=-44, 13803 moves in 17 msec
Principle Variation = e4 d3, c6 c7, e4 x b1, c4 x c6
BEST MOVE:  a6 c5, val=-238, 89849 moves in 49 msec
Principle Variation = a6 c5, a3 a4, b5 a5, h4 c4, h4 h3
BEST MOVE:  b5 b1, val=-42, 473204 moves in 194 msec
Principle Variation = b5 b1, a1 x b1, e4 x b1, f2 f3, a6 b4, c6 x b7
...K....
.....R..
N.pp.PP.
.R..P...
..r.B..P
p...n...
.....ppp
r.....k.
move  1: val =   187  a6 c5
move  2: val =   175  e4 x c6
move  3: val =   177  e4 x g2
move  4: val =   257  f7 e7
move  5: val =   262  f7 d7
move  6: val =   257  f7 c7
move  7: val =   188  f7 b7
move  8: val =   179  f7 a7
move  9: val =   179  f7 g7
move 10: val =   257  f7 h7
move 11: val =   176  a6 b8
move 12: val =   189  a6 c7
move 13: val =   179  d8 c8
move 14: val =   181  a6 b4
move 15: val =   176  f6 f5
move 16: val =   176  g6 g5
move 17: val =   177  b5 b6
move 18: val =   179  b5 b7
move 19: val =   179  b5 b8
move 20: val =   179  b5 a5
move 21: val =   177  b5 c5
move 22: val =   176  b5 d5
move 23: val =   176  b5 b4
move 24: val =   179  b5 b3
move 25: val =   179  b5 b2
move 26: val =   -42  b5 b1
move 27: val =   -41  e4 d5
move 28: val =   -40  d8 e8
move 29: val =   -40  e4 f5
move 30: val =   -41  e4 d3
move 31: val =   -40  e4 c2
move 32: val =   -40  e4 b1
move 33: val =   -38  e4 f3
move 34: val =   -40  f7 f8
move 35: val =   -38  h4 h3
BEST MOVE:  b5 b1 val = -42, moveNum = 473204, time = 194 msec
Board("...K.... .....R.. N.pp.PP. ....P... ..r.B..P p...n... .....ppp rR....k.", "033");
--- Human: a1 b1
BEST MOVE:  e4 x b1, val=-142, 25 moves in 3 msec
Principle Variation = e4 x b1
BEST MOVE:  e4 x b1, val=-44, 101 moves in 2 msec
Principle Variation = e4 x b1, c4 x h4
BEST MOVE:  e4 x b1, val=-48, 775 moves in 4 msec
Principle Variation = e4 x b1, c4 x h4, e5 e4
BEST MOVE:  e4 x b1, val=-42, 4780 moves in 7 msec
Principle Variation = e4 x b1, f2 f3, g6 g5, f2 f4
BEST MOVE:  e4 x b1, val=-142, 31169 moves in 25 msec
Principle Variation = e4 x b1, g2 g3, h4 x g3, c4 x h4, b8 x c6
BEST MOVE:  e4 x b1, val=87, 180811 moves in 88 msec
Principle Variation = e4 x b1, c6 c7, d8 c8, c4 c6, f5 e4, f2 f4
...K....
.....R..
N.pp.PP.
....P...
..r.B..P
p...n...
.....ppp
.r....k.
move  1: val =    87  e4 x b1
move  2: val =   185  e4 x c6
move  3: val =   154  e4 x g2
move  4: val =   362  f7 e7
move  5: val =   360  f7 d7
move  6: val =   360  f7 c7
move  7: val =   281  f7 b7
move  8: val =   277  f7 a7
move  9: val =   277  f7 g7
move 10: val =   277  f7 h7
move 11: val =    89  a6 b8
move 12: val =   187  a6 c7
move 13: val =   187  a6 c5
move 14: val =   185  a6 b4
move 15: val =   176  f6 f5
move 16: val =   275  g6 g5
move 17: val =   185  e4 d5
move 18: val =    89  d8 e8
move 19: val =   183  e4 f5
move 20: val =   173  e4 d3
move 21: val =   183  e4 c2
move 22: val =   277  d8 c8
move 23: val =   356  e4 f3
move 24: val =   277  f7 f8
move 25: val =   269  h4 h3
BEST MOVE:  e4 x b1 val = 87, moveNum = 180811, time = 88 msec
Board("...K.... .....R.. N.pp.PP. ....P... ..r....P p...n... .....ppp .B....k.", "033");
--- Human: c4 h4
BEST MOVE:  e5 e4, val=-48, 22 moves in 3 msec
Principle Variation = e5 e4
BEST MOVE:  g6 g5, val=-42, 324 moves in 2 msec
Principle Variation = g6 g5, f2 f4
BEST MOVE:  a6 b8, val=-142, 1984 moves in 4 msec
Principle Variation = a6 b8, c6 c7, f7 x c7
BEST MOVE:  f7 f8, val=56, 13251 moves in 16 msec
Principle Variation = f7 f8, e3 c4, g6 g5, h8 x f8
BEST MOVE:  d8 e8, val=-43, 94061 moves in 56 msec
Principle Variation = d8 e8, f2 f4, e5 x f4, h4 x f4, g5 g4
BEST MOVE:  f7 f8, val=183, 395126 moves in 142 msec
Principle Variation = f7 f8, h4 a4, b1 d3, h2 h3, e8 x d8, f2 f4
...K....
.....R..
N.pp.PP.
....P...
.......r
p...n...
.....ppp
.B....k.
move  1: val =   458  d8 e8
move  2: val =   560  d8 c8
move  3: val =   183  f7 f8
move  4: val =   260  f7 e7
move  5: val =   223  f7 d7
move  6: val =   354  f7 c7
move  7: val =   185  f7 b7
move  8: val =   185  f7 a7
move  9: val =   556  f7 g7
move 10: val =   221  f7 h7
move 11: val =   502  a6 b8
move 12: val =   184  a6 c7
move 13: val =   558  a6 c5
move 14: val =   275  a6 b4
move 15: val =   556  f6 f5
move 16: val =   556  g6 g5
move 17: val =   556  e5 e4
move 18: val =   560  b1 a2
move 19: val =   185  b1 c2
move 20: val =   558  b1 d3
move 21: val =   208  b1 e4
move 22: val =   184  b1 f5
BEST MOVE:  f7 f8 val = 183, moveNum = 395126, time = 142 msec
Board("...K.R.. ........ N.pp.PP. ....P... .......r p...n... .....ppp .B....k.", "033");
--- Human: h4 h7
BEST MOVE:  e5 e4, val=-48, 18 moves in 2 msec
Principle Variation = e5 e4
BEST MOVE:  g6 g5, val=-42, 262 moves in 2 msec
Principle Variation = g6 g5, f2 f4
BEST MOVE:  b1 e4, val=-142, 1717 moves in 3 msec
Principle Variation = b1 e4, f2 f3, b8 x c6
BEST MOVE:  b1 e4, val=-39, 5302 moves in 7 msec
Principle Variation = b1 e4, c6 c7, d8 c8, f2 f4
BEST MOVE:  b1 e4, val=-140, 46707 moves in 36 msec
Principle Variation = b1 e4, c6 c7, d8 c8, f2 f3, e4 x f3
BEST MOVE:  b1 e4, val=188, 196774 moves in 83 msec
Principle Variation = b1 e4, c6 c7, a6 x c7, d6 x c7, d8 c8, f2 f4
...K.R..
.......r
N.pp.PP.
....P...
........
p...n...
.....ppp
.B....k.
move  1: val =   188  b1 e4
move  2: val =   281  d8 e8
move  3: val =   189  f8 e8
move  4: val =   189  f8 g8
move  5: val =   354  f8 h8
move  6: val =   354  f8 f7
move  7: val =   189  a6 b8
move  8: val =   273  a6 c7
move  9: val =   273  a6 c5
move 10: val =   283  a6 b4
move 11: val =   256  f6 f5
move 12: val =   269  g6 g5
move 13: val =   269  e5 e4
move 14: val =   189  b1 a2
move 15: val =   277  b1 c2
move 16: val =   189  b1 d3
move 17: val =   273  d8 c8
move 18: val =   274  b1 f5
BEST MOVE:  b1 e4 val = 188, moveNum = 196774, time = 83 msec
Board("...K.R.. .......r N.pp.PP. ....P... ....B... p...n... .....ppp ......k.", "033");
--- Human: c6 c7
BEST MOVE:  a6 x c7, val=-145, 3 moves in 1 msec
Principle Variation = a6 x c7
BEST MOVE:  d8 c8, val=-39, 62 moves in 0 msec
Principle Variation = d8 c8, f2 f4
BEST MOVE:  d8 c8, val=-140, 318 moves in 0 msec
Principle Variation = d8 c8, f2 f3, e4 x f3
BEST MOVE:  a6 x c7, val=188, 3676 moves in 5 msec
Principle Variation = a6 x c7, d6 x c7, d8 c8, f3 x e4
BEST MOVE:  d8 c8, val=-136, 26916 moves in 29 msec
Principle Variation = d8 c8, f2 f3, e4 a8, h7 h3, c7 x e8
BEST MOVE:  a6 x c7, val=284, 157895 moves in 78 msec
Principle Variation = a6 x c7, d6 x c7, a6 x c7, h7 x c7, c8 d7, c7 c8-q
...K.R..
..p....r
N..p.PP.
....P...
....B...
p...n...
.....ppp
......k.
move  1: val =   284  d8 c8
move  2: val =   286  d8 e8
move  3: val =   284  a6 x c7
BEST MOVE:  a6 x c7 val = 284, moveNum = 157895, time = 78 msec
Board("...K.R.. ..N....r ...p.PP. ....P... ....B... p...n... .....ppp ......k.", "033");
--- Human: d6 c7
BEST MOVE:  d8 e8, val=182, 2 moves in 0 msec
Principle Variation = d8 e8
BEST MOVE:  d8 c8, val=188, 58 moves in 0 msec
Principle Variation = d8 c8, f2 f4
BEST MOVE:  d8 c8, val=87, 214 moves in 0 msec
Principle Variation = d8 c8, f2 f3, e4 x f3
BEST MOVE:  d8 c8, val=284, 2068 moves in 3 msec
Principle Variation = d8 c8, h7 e7, g6 g5, e7 x e5
BEST MOVE:  d8 c8, val=91, 9425 moves in 10 msec
Principle Variation = d8 c8, f2 f3, e4 a8, h2 h4, c8 x c7
BEST MOVE:  d8 c8, val=782, 58743 moves in 42 msec
Principle Variation = d8 c8, e3 c4, f8 f7, h7 x f7, c8 x c7, h2 h4
...K.R..
..p....r
.....PP.
....P...
....B...
p...n...
.....ppp
......k.
move  1: val =   782  d8 c8
move  2: val =  1089  d8 e8
BEST MOVE:  d8 c8 val = 782, moveNum = 58743, time = 42 msec
Board("..K..R.. ..p....r .....PP. ....P... ....B... p...n... .....ppp ......k.", "033");
--- Human: e3 c4
BEST MOVE:  e4 x g2, val=85, 18 moves in 1 msec
Principle Variation = e4 x g2
BEST MOVE:  g6 g5, val=282, 185 moves in 2 msec
Principle Variation = g6 g5, c4 x e5
BEST MOVE:  g6 g5, val=78, 1188 moves in 2 msec
Principle Variation = g6 g5, h7 h3, c8 x c7
BEST MOVE:  f8 f7, val=782, 15282 moves in 20 msec
Principle Variation = f8 f7, h7 x f7, g6 g5, c7 c8-q
BEST MOVE:  c8 b7, val=411, 128799 moves in 75 msec
Principle Variation = c8 b7, c4 d6, b7 c6, b6 c4, d2 x f2
BEST MOVE:  c8 b7, val=684, 259293 moves in 59 msec
Principle Variation = c8 b7, f2 f4, f8 c8, c4 d6, c6 d5, c8 x f8
..K..R..
..p....r
.....PP.
....P...
..n.B...
p.......
.....ppp
......k.
move  1: val =   684  c8 b7
move  2: val =   691  f8 e8
move  3: val =   686  f8 d8
move  4: val =   685  f8 g8
move  5: val =   737  f8 h8
move  6: val =   686  f8 f7
move  7: val =   685  f6 f5
move  8: val =   685  g6 g5
move  9: val =   689  e4 d5
move 10: val =   689  e4 c6
move 11: val =   689  e4 b7
move 12: val =   689  e4 a8
move 13: val =   733  e4 f5
move 14: val =   754  e4 d3
move 15: val =   756  e4 c2
move 16: val =   756  e4 b1
move 17: val =   689  e4 f3
move 18: val =   685  e4 x g2
BEST MOVE:  c8 b7 val = 684, moveNum = 259293, time = 59 msec
Board(".....R.. .Kp....r .....PP. ....P... ..n.B... p....... .....ppp ......k.", "033");
--- Human: c4 d6
BEST MOVE:  b7 c6, val=180, 5 moves in 1 msec
Principle Variation = b7 c6
BEST MOVE:  b7 c6, val=980, 52 moves in 1 msec
Principle Variation = b7 c6, c7 c8-q
BEST MOVE:  b7 b6, val=411, 583 moves in 2 msec
Principle Variation = b7 b6, d6 x e4, c6 x c7
BEST MOVE:  b7 c6, val=659, 7527 moves in 11 msec
Principle Variation = b7 c6, f2 f4, c6 x d6, e4 x f6
BEST MOVE:  b7 c6, val=481, 23053 moves in 18 msec
Principle Variation = b7 c6, c7 c8-q, f8 x c8, d6 x c8, f6 x e5
BEST MOVE:  b7 c6, val=612, 91174 moves in 46 msec
Principle Variation = b7 c6, d6 x e4, f8 c8, e4 x f6, f6 f5, d6 x f5
.....R..
.Kp....r
...n.PP.
....P...
....B...
p.......
.....ppp
......k.
move  1: val =   612  b7 c6
move  2: val =  1085  b7 a7
move  3: val =   613  b7 a6
move  4: val =   613  b7 b6
move  5: val =   613  b7 a8
BEST MOVE:  b7 c6 val = 612, moveNum = 91174, time = 46 msec
Board(".....R.. ..p....r ..Kn.PP. ....P... ....B... p....... .....ppp ......k.", "033");
--- Human: c7 c8-q
BEST MOVE:  f8 x c8, val=80, 4 moves in 1 msec
Principle Variation = f8 x c8
BEST MOVE:  f8 x c8, val=578, 79 moves in 1 msec
Principle Variation = f8 x c8, d6 x c8
BEST MOVE:  f8 x c8, val=481, 291 moves in 1 msec
Principle Variation = f8 x c8, d6 x c8, e4 x g2
BEST MOVE:  f8 x c8, val=580, 3093 moves in 4 msec
Principle Variation = f8 x c8, d6 x c8, g6 g5, c8 x f8
BEST MOVE:  f8 x c8, val=477, 10210 moves in 11 msec
Principle Variation = f8 x c8, d6 x c8, g6 g5, c8 x f8, e4 x g2
BEST MOVE:  f8 x c8, val=676, 79347 moves in 52 msec
Principle Variation = f8 x c8, d6 x c8, g6 g5, c8 x f8, c7 d6, a8 x e4
..q..R..
.......r
..Kn.PP.
....P...
....B...
p.......
.....ppp
......k.
move  1: val =  1263  c6 x d6
move  2: val =  1351  c6 b6
move  3: val =   676  f8 x c8
move  4: val =   773  c6 d5
BEST MOVE:  f8 x c8 val = 676, moveNum = 79347, time = 52 msec
Board("..R..... .......r ..Kn.PP. ....P... ....B... p....... .....ppp ......k.", "033");
--- Human: d6 c8
BEST MOVE:  e4 x g2, val=481, 12 moves in 1 msec
Principle Variation = e4 x g2
BEST MOVE:  g6 g5, val=580, 180 moves in 2 msec
Principle Variation = g6 g5, f2 f4
BEST MOVE:  g6 g5, val=477, 832 moves in 2 msec
Principle Variation = g6 g5, h7 h3, e4 x g2
BEST MOVE:  g6 g5, val=676, 5291 moves in 7 msec
Principle Variation = g6 g5, h7 e7, g5 g4, e7 x e5
BEST MOVE:  g6 g5, val=571, 26760 moves in 24 msec
Principle Variation = g6 g5, h7 g7, e4 f5, c8 a7, g4 g3
BEST MOVE:  g6 g5, val=679, 114832 moves in 60 msec
Principle Variation = g6 g5, h7 f7, g5 g4, f7 x f6, g5 g4, g2 x f3
..n.....
.......r
..K..PP.
....P...
....B...
p.......
.....ppp
......k.
move  1: val =   679  g6 g5
move  2: val =   680  c6 c5
move  3: val =   680  c6 d5
move  4: val =   682  f6 f5
move  5: val =   680  c6 b5
move  6: val =   680  e4 d5
move  7: val =   681  e4 f5
move  8: val =   680  e4 d3
move  9: val =   680  e4 c2
move 10: val =   680  e4 b1
move 11: val =   680  e4 f3
move 12: val =   801  e4 x g2
BEST MOVE:  g6 g5 val = 679, moveNum = 114832, time = 60 msec
Board("..n..... .......r ..K..P.. ....P.P. ....B... p....... .....ppp ......k.", "033");
--- Human: h7 f7
BEST MOVE:  e4 x g2, val=477, 14 moves in 1 msec
Principle Variation = e4 x g2
BEST MOVE:  g5 g4, val=674, 146 moves in 2 msec
Principle Variation = g5 g4, f7 x f6
BEST MOVE:  f6 f5, val=570, 715 moves in 1 msec
Principle Variation = f6 f5, g2 g3, g5 g4
BEST MOVE:  g5 g4, val=679, 4631 moves in 7 msec
Principle Variation = g5 g4, f7 x f6, c6 d5, f7 x f6
BEST MOVE:  f6 f5, val=577, 15484 moves in 15 msec
Principle Variation = f6 f5, f2 f3, e4 d3, f7 x f6, e4 x g2
BEST MOVE:  f6 f5, val=682, 62633 moves in 41 msec
Principle Variation = f6 f5, f7 e7, c6 d5, f2 f3, g5 g4, f3 x e4
..n.....
.....r..
..K..P..
....P.P.
....B...
p.......
.....ppp
......k.
move  1: val =   682  f6 f5
move  2: val =   683  c6 c5
move  3: val =   683  c6 d5
move  4: val =   684  c6 b5
move  5: val =   683  g5 g4
move  6: val =   683  e4 d5
move  7: val =   787  e4 f5
move  8: val =   781  e4 g6
move  9: val =   684  e4 h7
move 10: val =   683  e4 d3
move 11: val =   683  e4 c2
move 12: val =   683  e4 b1
move 13: val =   687  e4 f3
move 14: val =   901  e4 x g2
BEST MOVE:  f6 f5 val = 682, moveNum = 62633, time = 41 msec
Board("..n..... .....r.. ..K..... ....PPP. ....B... p....... .....ppp ......k.", "033");
--- Human: f2 f3
BEST MOVE:  e4 x f3, val=475, 10 moves in 0 msec
Principle Variation = e4 x f3
BEST MOVE:  e4 d5, val=680, 78 moves in 1 msec
Principle Variation = e4 d5, f7 x f5
BEST MOVE:  e4 d3, val=577, 965 moves in 2 msec
Principle Variation = e4 d3, h2 h3, g5 g4
BEST MOVE:  e4 d3, val=681, 2692 moves in 3 msec
Principle Variation = e4 d3, g2 g3, g5 g4, f7 x f4
BEST MOVE:  e4 d3, val=577, 16882 moves in 18 msec
Principle Variation = e4 d3, h2 h3, f5 f4, g3 g4, f5 x g4
BEST MOVE:  e4 b1, val=683, 118276 moves in 64 msec
Principle Variation = e4 b1, g2 g3, c6 c5, e7 x f5, c6 c5, h2 h4
..n.....
.....r..
..K.....
....PPP.
....B...
p....p..
......pp
......k.
move  1: val =   683  e4 d3
move  2: val =   685  c6 c5
move  3: val =   684  c6 d5
move  4: val =  1001  f5 f4
move  5: val =   796  g5 g4
move  6: val =   779  e4 d5
move  7: val =   685  c6 b5
move  8: val =   683  e4 c2
move  9: val =   683  e4 b1
move 10: val =   684  e4 x f3
BEST MOVE:  e4 b1 val = 683, moveNum = 118276, time = 64 msec
Board("..n..... .....r.. ..K..... ....PPP. ........ p....p.. ......pp .B....k.", "033");
--- Human: c8 e7
BEST MOVE:  c6 c5, val=579, 7 moves in 0 msec
Principle Variation = c6 c5
BEST MOVE:  c6 d6, val=683, 59 moves in 1 msec
Principle Variation = c6 d6, f7 x f5
BEST MOVE:  c6 d6, val=575, 553 moves in 1 msec
Principle Variation = c6 d6, e7 c8, g5 g4
BEST MOVE:  c6 c5, val=683, 2409 moves in 3 msec
Principle Variation = c6 c5, h2 h3, f5 f4, f7 x f5
BEST MOVE:  c6 d6, val=575, 22727 moves in 26 msec
Principle Variation = c6 d6, e7 c8, d7 e6, e7 g8, g5 g4
BEST MOVE:  c6 d6, val=683, 79566 moves in 40 msec
Principle Variation = c6 d6, g2 g3, g5 g4, f5 h6, b1 d3, h2 h4
........
....nr..
..K.....
....PPP.
........
p....p..
......pp
.B....k.
move  1: val =   683  c6 d6
move  2: val =   684  c6 c7
move  3: val =   684  c6 d7
move  4: val =   684  c6 b6
move  5: val =   684  c6 b7
move  6: val =   684  c6 b5
move  7: val =   684  c6 c5
BEST MOVE:  c6 d6 val = 683, moveNum = 79566, time = 40 msec
Board("........ ....nr.. ...K.... ....PPP. ........ p....p.. ......pp .B....k.", "033");
--- Human: e7 f5
BEST MOVE:  b1 x f5, val=354, 5 moves in 1 msec
Principle Variation = b1 x f5
BEST MOVE:  b1 x f5, val=683, 65 moves in 0 msec
Principle Variation = b1 x f5, f7 x f5
BEST MOVE:  d6 e6, val=354, 634 moves in 1 msec
Principle Variation = d6 e6, f7 h7, b1 x f5
BEST MOVE:  d6 e6, val=683, 2473 moves in 3 msec
Principle Variation = d6 e6, f5 h6, b1 d3, f8 x f5
BEST MOVE:  d6 e6, val=569, 7234 moves in 8 msec
Principle Variation = d6 e6, f5 h6, g5 g4, f7 f8, g4 x f3
BEST MOVE:  d6 e6, val=777, 44249 moves in 36 msec
Principle Variation = d6 e6, f5 h6, b1 d3, f7 g7, g5 g4, h2 h4
........
.....r..
...K....
....PnP.
........
p....p..
......pp
.B....k.
move  1: val =   777  d6 e6
move  2: val =   778  d6 c6
move  3: val =   778  d6 c5
move  4: val =   778  d6 d5
move  5: val =   778  b1 x f5
BEST MOVE:  d6 e6 val = 777, moveNum = 44249, time = 36 msec
Board("........ .....r.. ....K... ....PnP. ........ p....p.. ......pp .B....k.", "033");
--- Human: f5 h6
BEST MOVE:  g5 g4, val=677, 11 moves in 1 msec
Principle Variation = g5 g4
BEST MOVE:  b1 d3, val=683, 155 moves in 2 msec
Principle Variation = b1 d3, h2 h4
BEST MOVE:  g5 g4, val=569, 991 moves in 2 msec
Principle Variation = g5 g4, f7 f8, g4 x f3
BEST MOVE:  b1 d3, val=777, 7586 moves in 10 msec
Principle Variation = b1 d3, f7 g7, g5 g4, h2 h4
BEST MOVE:  b1 d3, val=675, 20937 moves in 16 msec
Principle Variation = b1 d3, f7 g7, e6 f6, g7 g8, g5 g4
BEST MOVE:  b1 g6, val=783, 153388 moves in 82 msec
Principle Variation = b1 g6, f7 a7, d3 c4, h6 g4, f6 f5, h2 h4
........
.....r..
....K..n
....P.P.
........
p....p..
......pp
.B....k.
move  1: val =   783  b1 d3
move  2: val =   785  e6 d5
move  3: val =   783  e5 e4
move  4: val =   879  g5 g4
move  5: val =   784  b1 a2
move  6: val =   783  b1 c2
move  7: val =   784  e6 d6
move  8: val =   879  b1 e4
move  9: val =   786  b1 f5
move 10: val =   783  b1 g6
move 11: val =   883  b1 h7
BEST MOVE:  b1 g6 val = 783, moveNum = 153388, time = 82 msec
Board("........ .....r.. ....K.Bn ....P.P. ........ p....p.. ......pp ......k.", "033");
--- Human: f7 b7
BEST MOVE:  g5 g4, val=677, 14 moves in 1 msec
Principle Variation = g5 g4
BEST MOVE:  g6 d3, val=683, 218 moves in 1 msec
Principle Variation = g6 d3, h2 h4
BEST MOVE:  g6 h5, val=585, 2292 moves in 4 msec
Principle Variation = g6 h5, g2 g4, h5 x g4
BEST MOVE:  g6 d3, val=783, 8870 moves in 10 msec
Principle Variation = g6 d3, h6 g4, g5 g4, b5 x e5
BEST MOVE:  g6 d3, val=678, 80770 moves in 55 msec
Principle Variation = g6 d3, b7 b2, e6 d5, h2 h3, g4 x f3
BEST MOVE:  g6 h5, val=787, 473927 moves in 175 msec
Principle Variation = g6 h5, h2 h3, d3 c4, h6 g4, d5 c4, h2 h4
........
.r......
....K.Bn
....P.P.
........
p....p..
......pp
......k.
move  1: val =   787  g6 d3
move  2: val =  1002  e6 f6
move  3: val =   883  e6 d5
move  4: val =  1005  g6 f7
move  5: val =   787  g6 e8
move  6: val =  1005  g6 h7
move  7: val =  1008  g6 f5
move  8: val =  1011  g6 e4
move  9: val =   883  e6 d6
move 10: val =   787  g6 c2
move 11: val =  1005  g6 b1
move 12: val =   787  g6 h5
move 13: val =   996  e5 e4
move 14: val =   879  g5 g4
BEST MOVE:  g6 h5 val = 787, moveNum = 473927, time = 175 msec
Board("........ .r...... ....K..n ....P.PB ........ p....p.. ......pp ......k.", "033");
--- Human: g1 f2
BEST MOVE:  h5 x f3, val=577, 10 moves in 1 msec
Principle Variation = h5 x f3
BEST MOVE:  e6 d5, val=684, 172 moves in 1 msec
Principle Variation = e6 d5, h2 h4
BEST MOVE:  e6 d5, val=584, 1475 moves in 3 msec
Principle Variation = e6 d5, g2 g4, h5 x g4
BEST MOVE:  g5 g4, val=783, 8380 moves in 10 msec
Principle Variation = g5 g4, f3 x g4, g5 g4, b5 x e5
BEST MOVE:  e6 d6, val=676, 57755 moves in 41 msec
Principle Variation = e6 d6, b7 g7, d5 d4, h2 h4, e5 e4
BEST MOVE:  g5 g4, val=783, 319042 moves in 121 msec
Principle Variation = g5 g4, f3 x g4, h5 e8, h6 f5, d6 d5, h2 h4
........
.r......
....K..n
....P.PB
........
p....p..
.....kpp
........
move  1: val =   789  e6 d6
move  2: val =   787  e6 f6
move  3: val =   788  e6 d5
move  4: val =   788  e5 e4
move  5: val =   783  g5 g4
move  6: val =  1101  h5 g6
move  7: val =  1005  h5 f7
move  8: val =   784  h5 e8
move  9: val =   787  h5 g4
move 10: val =   905  h5 x f3
BEST MOVE:  g5 g4 val = 783, moveNum = 319042, time = 121 msec
Board("........ .r...... ....K..n ....P..B ......P. p....p.. .....kpp ........", "033");
--- Human: f3 g4
BEST MOVE:  h5 x g4, val=679, 8 moves in 1 msec
Principle Variation = h5 x g4
BEST MOVE:  h5 e8, val=783, 108 moves in 2 msec
Principle Variation = h5 e8, h2 h4
BEST MOVE:  h5 g6, val=779, 646 moves in 2 msec
Principle Variation = h5 g6, h2 h3, e5 e4
BEST MOVE:  h5 e8, val=783, 4295 moves in 5 msec
Principle Variation = h5 e8, h2 h4, e5 e4, g2 g3
BEST MOVE:  h5 e8, val=778, 18699 moves in 18 msec
Principle Variation = h5 e8, b7 b6, e6 d5, h2 h4, e5 e4
BEST MOVE:  h5 e8, val=884, 113350 moves in 60 msec
Principle Variation = h5 e8, h6 f5, e6 d5, b7 e7, e8 c6, e8 x e4
........
.r......
....K..n
....P..B
......p.
p.......
.....kpp
........
move  1: val =   884  h5 e8
move  2: val =  1010  e6 f6
move  3: val =  1103  e6 d5
move  4: val =  1103  e5 e4
move  5: val =  1099  h5 g6
move  6: val =   885  h5 f7
move  7: val =   885  e6 d6
move  8: val =   999  h5 x g4
BEST MOVE:  h5 e8 val = 884, moveNum = 113350, time = 60 msec
Board("....B... .r...... ....K..n ....P... ......p. p....... .....kpp ........", "033");
--- Human: h6 f5
BEST MOVE:  e5 e4, val=777, 10 moves in 1 msec
Principle Variation = e5 e4
BEST MOVE:  e5 e4, val=781, 161 moves in 1 msec
Principle Variation = e5 e4, h2 h4
BEST MOVE:  e8 c6, val=452, 851 moves in 2 msec
Principle Variation = e8 c6, b7 b8, e6 x f5
BEST MOVE:  e6 d5, val=884, 11815 moves in 15 msec
Principle Variation = e6 d5, b7 e7, e8 c6, h2 h4
BEST MOVE:  e6 f6, val=685, 54109 moves in 40 msec
Principle Variation = e6 f6, f5 e7, f6 g5, e7 h7, e4 e3
BEST MOVE:  e6 d5, val=884, 389894 moves in 151 msec
Principle Variation = e6 d5, h2 h4, e6 d5, b6 e6, e8 c6, h2 h4
....B...
.r......
....K...
....Pn..
......p.
p.......
.....kpp
........
move  1: val =   889  e6 f6
move  2: val =   884  e8 c6
move  3: val =  1101  e8 b5
move  4: val =   886  e8 a4
move  5: val =   888  e8 f7
move  6: val =  1101  e8 g6
move  7: val =   885  e8 h5
move  8: val =   886  e8 d7
move  9: val =   884  e6 d5
move 10: val =   885  e5 e4
BEST MOVE:  e6 d5 val = 884, moveNum = 389894, time = 151 msec
Board("....B... .r...... ........ ...KPn.. ......p. p....... .....kpp ........", "033");
--- Human: f5 e7
BEST MOVE:  d5 e4, val=778, 6 moves in 0 msec
Principle Variation = d5 e4
BEST MOVE:  d5 d4, val=782, 136 moves in 1 msec
Principle Variation = d5 d4, h2 h4
BEST MOVE:  d5 e6, val=775, 525 moves in 1 msec
Principle Variation = d5 e6, e7 g8, e5 e4
BEST MOVE:  d5 d4, val=784, 9882 moves in 13 msec
Principle Variation = d5 d4, f2 f3, e8 f7, h2 h4
BEST MOVE:  d5 e6, val=776, 38670 moves in 30 msec
Principle Variation = d5 e6, h2 h4, e5 e4, h2 h4, e5 e4
BEST MOVE:  d5 e4, val=881, 363492 moves in 150 msec
Principle Variation = d5 e4, e7 g8, e8 c6, e7 g6, e6 e5, g2 g3
....B...
.r..n...
........
...KP...
......p.
p.......
.....kpp
........
move  1: val =   885  d5 e6
move  2: val =   884  d5 d6
move  3: val =   883  d5 c5
move  4: val =   884  d5 c4
move  5: val =   884  d5 d4
move  6: val =   881  d5 e4
BEST MOVE:  d5 e4 val = 881, moveNum = 363492, time = 150 msec
Board("....B... .r..n... ........ ....P... ....K.p. p....... .....kpp ........", "033");
--- Human: g4 g5
BEST MOVE:  e8 c6, val=780, 10 moves in 1 msec
Principle Variation = e8 c6
BEST MOVE:  e4 d4, val=786, 253 moves in 2 msec
Principle Variation = e4 d4, h2 h4
BEST MOVE:  e4 f4, val=689, 660 moves in 2 msec
Principle Variation = e4 f4, h2 h3, f4 x g5
BEST MOVE:  e4 f4, val=787, 5833 moves in 7 msec
Principle Variation = e4 f4, h2 h4, e5 e4, h2 h4
BEST MOVE:  e4 d4, val=783, 45407 moves in 41 msec
Principle Variation = e4 d4, h2 h3, e5 e4, b7 b1, b7 d5
BEST MOVE:  e4 d3, val=1012, 380827 moves in 152 msec
Principle Variation = e4 d3, g5 g6, e8 x g6, b7 b4, d4 e5, h3 h4
....B...
.r..n...
........
....P.p.
....K...
p.......
.....kpp
........
move  1: val =  1012  e4 d4
move  2: val =  1105  e8 c6
move  3: val =  1103  e8 b5
move  4: val =  1013  e8 a4
move  5: val =  1013  e8 f7
move  6: val =  1103  e8 g6
move  7: val =  1013  e8 h5
move  8: val =  1013  e8 d7
move  9: val =  1014  e4 f4
move 10: val =  1012  e4 d3
BEST MOVE:  e4 d3 val = 1012, moveNum = 380827, time = 152 msec
Board("....B... .r..n... ........ ....P.p. ........ p..K.... .....kpp ........", "033");
--- Human: g2 g4
BEST MOVE:  e5 e4, val=783, 14 moves in 1 msec
Principle Variation = e5 e4
BEST MOVE:  e5 e4, val=787, 141 moves in 2 msec
Principle Variation = e5 e4, h2 h4
BEST MOVE:  e5 e4, val=784, 496 moves in 1 msec
Principle Variation = e5 e4, h2 h3, e4 e3
BEST MOVE:  d3 d4, val=792, 9105 moves in 13 msec
Principle Variation = d3 d4, f2 f3, d3 d4, h3 h4
BEST MOVE:  e5 e4, val=784, 53518 moves in 39 msec
Principle Variation = e5 e4, h2 h4, e4 e3, f3 f4, e5 e4
BEST MOVE:  e5 e4, val=888, 304006 moves in 116 msec
Principle Variation = e5 e4, b7 b3, d3 d4, b3 e3, e4 e3, a3 a4
....B...
.r..n...
........
....P.p.
......p.
p..K....
.....k.p
........
move  1: val =   888  e5 e4
move  2: val =   889  e8 c6
move  3: val =  1107  e8 b5
move  4: val =   889  e8 a4
move  5: val =   890  e8 f7
move  6: val =   889  e8 g6
move  7: val =  1111  e8 h5
move  8: val =  1108  e8 d7
move  9: val =   889  d3 c4
move 10: val =   890  d3 d4
move 11: val =   889  d3 e4
move 12: val =  1012  d3 c3
move 13: val =   889  d3 c2
move 14: val =   889  d3 d2
BEST MOVE:  e5 e4 val = 888, moveNum = 304006, time = 116 msec
Board("....B... .r..n... ........ ......p. ....P.p. p..K.... .....k.p ........", "033");
--- Human: h2 h4
BEST MOVE:  e4 e3, val=784, 13 moves in 1 msec
Principle Variation = e4 e3
BEST MOVE:  d3 d4, val=790, 208 moves in 2 msec
Principle Variation = d3 d4, a3 a4
BEST MOVE:  e4 e3, val=784, 1512 moves in 2 msec
Principle Variation = e4 e3, f2 f3, e3 e2
BEST MOVE:  e4 e3, val=882, 7311 moves in 9 msec
Principle Variation = e4 e3, f2 f3, e3 e2, f3 x e2
BEST MOVE:  e4 e3, val=781, 85591 moves in 60 msec
Principle Variation = e4 e3, f2 e1, d3 e4, e1 f1, e8 x c6
BEST MOVE:  e4 e3, val=885, 390628 moves in 135 msec
Principle Variation = e4 e3, f2 e1, e3 e2, h4 h5, e3 e2, h4 h5
....B...
.r..n...
........
......p.
....P.pp
p..K....
.....k..
........
move  1: val =   885  e4 e3
move  2: val =  1113  e8 c6
move  3: val =  1111  e8 b5
move  4: val =   886  e8 a4
move  5: val =   891  e8 f7
move  6: val =  1111  e8 g6
move  7: val =  1115  e8 h5
move  8: val =  1112  e8 d7
move  9: val =   887  d3 c4
move 10: val =   887  d3 d4
move 11: val =   888  d3 c3
move 12: val =   888  d3 c2
move 13: val =   888  d3 d2
BEST MOVE:  e4 e3 val = 885, moveNum = 390628, time = 135 msec
Board("....B... .r..n... ........ ......p. ......pp p..KP... .....k.. ........", "033");
--- Human: f2 e1
BEST MOVE:  e3 e2, val=782, 13 moves in 1 msec
Principle Variation = e3 e2
BEST MOVE:  d3 e4, val=787, 204 moves in 1 msec
Principle Variation = d3 e4, a3 a4
BEST MOVE:  d3 e4, val=781, 1101 moves in 3 msec
Principle Variation = d3 e4, e1 f1, e3 e2
BEST MOVE:  e3 e2, val=885, 14875 moves in 16 msec
Principle Variation = e3 e2, h4 h5, e3 e2, a3 a4
BEST MOVE:  d3 e4, val=694, 50955 moves in 31 msec
Principle Variation = d3 e4, g5 g6, e4 f3, b7 b1, d3 e4
BEST MOVE:  d3 c3, val=1016, 205494 moves in 75 msec
Principle Variation = d3 c3, g5 g6, e8 x g6, e7 x g6, e4 d4, g7 g8-q
....B...
.r..n...
........
......p.
......pp
p..KP...
........
....k...
move  1: val =  1016  d3 e4
move  2: val =  1017  e8 c6
move  3: val =  1017  e8 b5
move  4: val =  1017  e8 a4
move  5: val =  1016  e8 f7
move  6: val =  1108  e8 g6
move  7: val =  1112  e8 h5
move  8: val =  1016  d3 c4
move  9: val =  1016  d3 d4
move 10: val =  1017  e8 d7
move 11: val =  1016  d3 c3
move 12: val =  1017  d3 c2
move 13: val =  1017  e3 e2
BEST MOVE:  d3 c3 val = 1016, moveNum = 205494, time = 75 msec
Board("....B... .r..n... ........ ......p. ......pp p.K.P... ........ ....k...", "033");
--- Human: e1 e2
BEST MOVE:  e8 c6, val=782, 10 moves in 0 msec
Principle Variation = e8 c6
BEST MOVE:  c3 d4, val=887, 207 moves in 1 msec
Principle Variation = c3 d4, e2 x e3
BEST MOVE:  c3 d4, val=783, 595 moves in 1 msec
Principle Variation = c3 d4, e2 f3, e3 e2
BEST MOVE:  e8 f7, val=890, 4821 moves in 7 msec
Principle Variation = e8 f7, a3 a4, f7 c4, f1 x e2
BEST MOVE:  c3 d4, val=789, 18131 moves in 18 msec
Principle Variation = c3 d4, g5 g6, d4 e4, e2 x e3, f7 d5
BEST MOVE:  e8 f7, val=894, 104994 moves in 55 msec
Principle Variation = e8 f7, g5 g6, f7 c4, g6 g7, e8 g6, g7 g8-q
....B...
.r..n...
........
......p.
......pp
p.K.P...
....k...
........
move  1: val =  1116  c3 d4
move  2: val =  1214  e8 c6
move  3: val =  1212  e8 b5
move  4: val =  1116  e8 a4
move  5: val =   894  e8 f7
move  6: val =  1212  e8 g6
move  7: val =  1216  e8 h5
move  8: val =   895  c3 c4
move  9: val =  1115  e8 d7
move 10: val =   895  c3 c2
BEST MOVE:  e8 f7 val = 894, moveNum = 104994, time = 55 msec
Board("........ .r..nB.. ........ ......p. ......pp p.K.P... ....k... ........", "033");
--- Human: e2 e3
BEST MOVE:  f7 d5, val=885, 11 moves in 1 msec
Principle Variation = f7 d5
BEST MOVE:  f7 c4, val=890, 191 moves in 1 msec
Principle Variation = f7 c4, a3 a4
BEST MOVE:  f7 e6, val=792, 630 moves in 1 msec
Principle Variation = f7 e6, h4 h5, e6 x g4
BEST MOVE:  f7 e6, val=892, 2702 moves in 4 msec
Principle Variation = f7 e6, b7 b4, c3 c2, a3 a4
BEST MOVE:  f7 e6, val=794, 24569 moves in 26 msec
Principle Variation = f7 e6, a3 a4, e6 x g4, a3 a4, e6 x g4
BEST MOVE:  c3 c4, val=1120, 315765 moves in 139 msec
Principle Variation = c3 c4, g5 g6, f7 x g6, g6 g7, e6 d7, c7 x c4
........
.r..nB..
........
......p.
......pp
p.K.k...
........
........
move  1: val =  1221  f7 e6
move  2: val =  1221  f7 g8
move  3: val =  1121  f7 e8
move  4: val =  1216  f7 d5
move  5: val =  1123  f7 c4
move  6: val =  1122  f7 b3
move  7: val =  1123  f7 a2
move  8: val =  1212  f7 g6
move  9: val =  1217  f7 h5
move 10: val =  1120  c3 c4
move 11: val =  1121  c3 c2
BEST MOVE:  c3 c4 val = 1120, moveNum = 315765, time = 139 msec
Board("........ .r..nB.. ........ ......p. ..K...pp p...k... ........ ........", "033");
--- Human: g5 g6
BEST MOVE:  f7 x g6, val=792, 7 moves in 1 msec
Principle Variation = f7 x g6
BEST MOVE:  f7 e6, val=894, 86 moves in 1 msec
Principle Variation = f7 e6, a3 a4
BEST MOVE:  f7 d5, val=891, 417 moves in 2 msec
Principle Variation = f7 d5, e7 x d5, c4 x d5
BEST MOVE:  f7 x g6, val=1120, 3958 moves in 5 msec
Principle Variation = f7 x g6, e7 x g6, c4 d5, e7 x d5
BEST MOVE:  f7 e6, val=895, 14759 moves in 16 msec
Principle Variation = f7 e6, g4 g5, e6 d5, g4 g5, c3 d4
BEST MOVE:  f7 x g6, val=1124, 93365 moves in 56 msec
Principle Variation = f7 x g6, e7 x g6, c4 c5, a3 a4, c4 c3, a3 a4
........
.r..nB..
......p.
........
..K...pp
p...k...
........
........
move  1: val =  1225  f7 e6
move  2: val =  1124  f7 x g6
move  3: val =  1198  f7 e8
move  4: val =  1125  f7 d5
move  5: val =  1125  f7 g8
move  6: val =  1445  c4 c5
move  7: val =  1125  c4 c3
BEST MOVE:  f7 x g6 val = 1124, moveNum = 93365, time = 56 msec
Board("........ .r..n... ......B. ........ ..K...pp p...k... ........ ........", "033");
--- Human: e7 g6
BEST MOVE:  c4 d5, val=1116, 3 moves in 0 msec
Principle Variation = c4 d5
BEST MOVE:  c4 d5, val=1120, 76 moves in 1 msec
Principle Variation = c4 d5, a3 a4
BEST MOVE:  c4 c3, val=1120, 333 moves in 0 msec
Principle Variation = c4 c3, h4 h5, d5 e4
BEST MOVE:  c4 c5, val=1124, 3842 moves in 6 msec
Principle Variation = c4 c5, a3 a4, c5 d5, a3 a4
BEST MOVE:  c4 d5, val=1120, 18597 moves in 20 msec
Principle Variation = c4 d5, b7 b8, c5 c4, b7 b1, c6 d5
BEST MOVE:  c4 c5, val=1125, 210991 moves in 104 msec
Principle Variation = c4 c5, a3 a4, d5 c6, a3 a4, c4 d5, a3 a4
........
.r......
......n.
........
..K...pp
p...k...
........
........
move  1: val =  1125  c4 d5
move  2: val =  1125  c4 c5
move  3: val =  1126  c4 c3
BEST MOVE:  c4 c5 val = 1125, moveNum = 210991, time = 104 msec
Board("........ .r...... ......n. ..K..... ......pp p...k... ........ ........", "033");
--- Human: b7 d7
BEST MOVE:  c5 c4, val=1117, 4 moves in 0 msec
Principle Variation = c5 c4
BEST MOVE:  c5 c6, val=1121, 88 moves in 1 msec
Principle Variation = c5 c6, a3 a4
BEST MOVE:  c5 c6, val=1119, 335 moves in 0 msec
Principle Variation = c5 c6, d7 d4, c6 d5
BEST MOVE:  c5 c6, val=1124, 3985 moves in 5 msec
Principle Variation = c5 c6, g6 e5, c6 c5, a3 a4
BEST MOVE:  c5 b5, val=1119, 26933 moves in 28 msec
Principle Variation = c5 b5, d7 d4, b5 c5, a3 a4, c5 d4
BEST MOVE:  c5 c4, val=1128, 150792 moves in 67 msec
Principle Variation = c5 c4, a3 a4, b5 c6, a3 a4, b6 c5, a3 a4
........
...r....
......n.
..K.....
......pp
p...k...
........
........
move  1: val =  1128  c5 b5
move  2: val =  1129  c5 c6
move  3: val =  1129  c5 b6
move  4: val =  1128  c5 c4
BEST MOVE:  c5 c4 val = 1128, moveNum = 150792, time = 67 msec
Board("........ ...r.... ......n. ........ ..K...pp p...k... ........ ........", "033");
--- Human: g6 e5
BEST MOVE:  c4 c3, val=1120, 4 moves in 1 msec
Principle Variation = c4 c3
BEST MOVE:  c4 c5, val=1124, 90 moves in 0 msec
Principle Variation = c4 c5, a3 a4
BEST MOVE:  c4 b3, val=1026, 404 moves in 1 msec
Principle Variation = c4 b3, h4 h5, b3 x a3
BEST MOVE:  c4 b3, val=1128, 2087 moves in 2 msec
Principle Variation = c4 b3, d7 d3, b3 c2, a3 a4
BEST MOVE:  c4 b5, val=1122, 15285 moves in 18 msec
Principle Variation = c4 b5, d7 d4, b5 c5, f2 f3, c2 d3
BEST MOVE:  c4 c3, val=1132, 158945 moves in 78 msec
Principle Variation = c4 c3, h4 h5, b5 a4, d7 d3, c5 b4, a3 a4
........
...r....
........
....n...
..K...pp
p...k...
........
........
move  1: val =  1132  c4 b5
move  2: val =  1133  c4 c5
move  3: val =  1132  c4 b3
move  4: val =  1132  c4 c3
BEST MOVE:  c4 c3 val = 1132, moveNum = 158945, time = 78 msec
Board("........ ...r.... ........ ....n... ......pp p.K.k... ........ ........", "033");
--- Human: g4 g5
BEST MOVE:  c3 c2, val=1126, 3 moves in 0 msec
Principle Variation = c3 c2
BEST MOVE:  c3 b3, val=1130, 102 moves in 0 msec
Principle Variation = c3 b3, a3 a4
BEST MOVE:  c3 b3, val=1030, 208 moves in 1 msec
Principle Variation = c3 b3, h4 h5, b3 x a3
BEST MOVE:  c3 c2, val=1132, 4044 moves in 4 msec
Principle Variation = c3 c2, a3 a4, b3 c2, a3 a4
BEST MOVE:  c3 b3, val=1127, 13974 moves in 16 msec
Principle Variation = c3 b3, d7 a7, b3 c3, h4 h5, c3 d4
BEST MOVE:  c3 c2, val=1834, 169343 moves in 90 msec
Principle Variation = c3 c2, g5 g6, b3 b2, g6 g7, c2 c3, a3 a4
........
...r....
........
....n.p.
.......p
p.K.k...
........
........
move  1: val =  1834  c3 b3
move  2: val =  1834  c3 b2
move  3: val =  1834  c3 c2
BEST MOVE:  c3 c2 val = 1834, moveNum = 169343, time = 90 msec
Board("........ ...r.... ........ ....n.p. .......p p...k... ..K..... ........", "033");
--- Human: g5 g6
BEST MOVE:  c2 c3, val=1128, 5 moves in 0 msec
Principle Variation = c2 c3
BEST MOVE:  c2 c3, val=1132, 81 moves in 0 msec
Principle Variation = c2 c3, a3 a4
BEST MOVE:  c2 b3, val=1034, 277 moves in 1 msec
Principle Variation = c2 b3, h4 h5, b3 x a3
BEST MOVE:  c2 b2, val=1834, 4400 moves in 7 msec
Principle Variation = c2 b2, g6 g7, b3 x a3, g7 g8-q
BEST MOVE:  c2 c1, val=1834, 15241 moves in 17 msec
Principle Variation = c2 c1, g6 g7, b2 a2, g7 g8-q, a3 b2
BEST MOVE:  c2 b3, val=1936, 196700 moves in 98 msec
Principle Variation = c2 b3, d7 d3, c1 c2, a3 a4, b2 c3, g7 g8-q
........
...r....
......p.
....n...
.......p
p...k...
..K.....
........
move  1: val =  1936  c2 c1
move  2: val =  1936  c2 c3
move  3: val =  1936  c2 b2
move  4: val =  1936  c2 b1
move  5: val =  1936  c2 b3
BEST MOVE:  c2 b3 val = 1936, moveNum = 196700, time = 98 msec
Board("........ ...r.... ......p. ....n... .......p pK..k... ........ ........", "033");
--- Human: d7 d3
BEST MOVE:  b3 c2, val=1132, 4 moves in 0 msec
Principle Variation = b3 c2
BEST MOVE:  b3 a4, val=1136, 107 moves in 0 msec
Principle Variation = b3 a4, h4 h5
BEST MOVE:  b3 a4, val=1036, 284 moves in 1 msec
Principle Variation = b3 a4, g6 g7, a4 x a3
BEST MOVE:  b3 c2, val=1936, 3742 moves in 5 msec
Principle Variation = b3 c2, g6 g7, a4 a5, g7 g8-q
BEST MOVE:  b3 b2, val=1432, 8652 moves in 9 msec
Principle Variation = b3 b2, g6 g7, b2 c2, g7 g8-q, b2 x a3
BEST MOVE:  b3 a4, val=1938, 96687 moves in 60 msec
Principle Variation = b3 a4, h4 h5, a4 b5, a3 a4, c2 c1, a3 a4
........
........
......p.
....n...
.......p
pK.rk...
........
........
move  1: val =  1940  b3 b2
move  2: val =  1940  b3 a2
move  3: val =  1938  b3 a4
move  4: val =  1939  b3 c2
BEST MOVE:  b3 a4 val = 1938, moveNum = 96687, time = 60 msec
Board("........ ........ ......p. ....n... K......p p..rk... ........ ........", "033");
--- Human: g6 g7
BEST MOVE:  a4 b5, val=1136, 2 moves in 0 msec
Principle Variation = a4 b5
BEST MOVE:  a4 a5, val=1936, 62 moves in 0 msec
Principle Variation = a4 a5, g7 g8-q
BEST MOVE:  a4 b5, val=1934, 191 moves in 0 msec
Principle Variation = a4 b5, g7 g8-q, b5 c4
BEST MOVE:  a4 b5, val=1938, 1488 moves in 3 msec
Principle Variation = a4 b5, h4 h5, b5 c5, a3 a4
BEST MOVE:  a4 b5, val=1840, 7884 moves in 11 msec
Principle Variation = a4 b5, a3 a4, b5 b4, g7 g8-q, a4 x a3
BEST MOVE:  a4 a5, val=1943, 97856 moves in 65 msec
Principle Variation = a4 a5, g7 g8-q, b5 b6, g8 d5, c4 c5, g7 g8-q
........
......p.
........
....n...
K......p
p..rk...
........
........
move  1: val =  1943  a4 b5
move  2: val =  1943  a4 a5
BEST MOVE:  a4 a5 val = 1943, moveNum = 97856, time = 65 msec
Board("........ ......p. ........ K...n... .......p p..rk... ........ ........", "033");
--- Human: h4 h5
BEST MOVE:  a5 a4, val=1140, 4 moves in 1 msec
Principle Variation = a5 a4
BEST MOVE:  a5 a6, val=1940, 123 moves in 0 msec
Principle Variation = a5 a6, g7 g8-q
BEST MOVE:  a5 a4, val=1840, 379 moves in 1 msec
Principle Variation = a5 a4, g7 g8-q, a4 x a3
BEST MOVE:  a5 b5, val=1942, 4199 moves in 5 msec
Principle Variation = a5 b5, h5 h6, b6 c5, a3 a4
BEST MOVE:  a5 b5, val=1844, 12252 moves in 11 msec
Principle Variation = a5 b5, a3 a4, b5 b4, g7 g8-q, a4 x a3
BEST MOVE:  a5 a4, val=1947, 191282 moves in 97 msec
Principle Variation = a5 a4, g7 g8-q, b5 b6, g8 d5, c4 c5, g7 g8-q
........
......p.
........
K...n..p
........
p..rk...
........
........
move  1: val =  1947  a5 b5
move  2: val =  1947  a5 b6
move  3: val =  1947  a5 a6
move  4: val =  1947  a5 a4
BEST MOVE:  a5 a4 val = 1947, moveNum = 191282, time = 97 msec
Board("........ ......p. ........ ....n..p K....... p..rk... ........ ........", "033");
--- Human: h5 h6
BEST MOVE:  a4 b5, val=1144, 2 moves in 0 msec
Principle Variation = a4 b5
BEST MOVE:  a4 a5, val=1944, 62 moves in 0 msec
Principle Variation = a4 a5, g7 g8-q
BEST MOVE:  a4 b5, val=1942, 191 moves in 1 msec
Principle Variation = a4 b5, g7 g8-q, b5 c4
BEST MOVE:  a4 b5, val=1946, 1504 moves in 2 msec
Principle Variation = a4 b5, h6 h7, b5 c5, a3 a4
BEST MOVE:  a4 b5, val=1848, 7981 moves in 12 msec
Principle Variation = a4 b5, a3 a4, b5 b4, h7 h8-q, a4 x a3
BEST MOVE:  a4 a5, val=2746, 102785 moves in 65 msec
Principle Variation = a4 a5, h6 h7, b5 b6, h6 h7, a4 b4, g7 g8-q
........
......p.
.......p
....n...
K.......
p..rk...
........
........
move  1: val =  2746  a4 b5
move  2: val =  2746  a4 a5
BEST MOVE:  a4 a5 val = 2746, moveNum = 102785, time = 65 msec
Board("........ ......p. .......p K...n... ........ p..rk... ........ ........", "033");
--- Human: h6 h7
BEST MOVE:  a5 a4, val=1148, 4 moves in 0 msec
Principle Variation = a5 a4
BEST MOVE:  a5 a6, val=1948, 135 moves in 0 msec
Principle Variation = a5 a6, h7 h8-q
BEST MOVE:  a5 a4, val=1848, 437 moves in 1 msec
Principle Variation = a5 a4, g7 g8-q, a4 x a3
BEST MOVE:  a5 b5, val=2746, 4950 moves in 6 msec
Principle Variation = a5 b5, h7 h8-q, b6 c5, h7 h8-q
BEST MOVE:  a5 b5, val=2648, 8716 moves in 6 msec
Principle Variation = a5 b5, g7 g8-q, b5 a4, g7 g8-q, a4 x a3
BEST MOVE:  a5 a4, val=2751, 234990 moves in 121 msec
Principle Variation = a5 a4, g7 g8-q, b5 a5, g8 d5, b6 a6, h7 h8-q
........
......pp
........
K...n...
........
p..rk...
........
........
move  1: val =  2751  a5 b5
move  2: val =  2751  a5 b6
move  3: val =  2751  a5 a6
move  4: val =  2751  a5 a4
BEST MOVE:  a5 a4 val = 2751, moveNum = 234990, time = 121 msec
Board("........ ......pp ........ ....n... K....... p..rk... ........ ........", "033");
--- Human: h7 h8-q
BEST MOVE:  a4 b5, val=1948, 2 moves in 1 msec
Principle Variation = a4 b5
BEST MOVE:  a4 a5, val=2748, 88 moves in 0 msec
Principle Variation = a4 a5, g7 g8-q
BEST MOVE:  a4 b5, val=2746, 269 moves in 1 msec
Principle Variation = a4 b5, g7 g8-q, b5 c4
BEST MOVE:  a4 b5, val=2750, 2576 moves in 4 msec
Principle Variation = a4 b5, g7 g8-q, b5 c5, a3 a4
BEST MOVE:  a4 b5, val=2745, 10043 moves in 13 msec
Principle Variation = a4 b5, h8 e8, b5 c5, g7 g8-q, a4 x a3
BEST MOVE:  a4 a5, val=2754, 238578 moves in 118 msec
Principle Variation = a4 a5, g7 g8-q, b5 a4, h8 f6, c4 c5, g7 g8-q
.......q
......p.
........
....n...
K.......
p..rk...
........
........
move  1: val =  2754  a4 b5
move  2: val =  2754  a4 a5
BEST MOVE:  a4 a5 val = 2754, moveNum = 238578, time = 118 msec
Board(".......q ......p. ........ K...n... ........ p..rk... ........ ........", "033");
--- Human: h8 a8
BEST MOVE:  a5 b5, val=1948, 2 moves in 0 msec
Principle Variation = a5 b5
BEST MOVE:  a5 b6, val=2748, 96 moves in 1 msec
Principle Variation = a5 b6, g7 g8-q
BEST MOVE:  a5 b5, val=2746, 296 moves in 1 msec
Principle Variation = a5 b5, g7 g8-q, b6 c5
BEST MOVE:  a5 b6, val=2751, 5731 moves in 9 msec
Principle Variation = a5 b6, a8 d5, b5 a4, g7 g8-q
BEST MOVE:  a5 b5, val=2750, 16871 moves in 17 msec
Principle Variation = a5 b5, a8 c6, b6 a5, g7 g8-q, c5 d4
BEST MOVE:  a5 b6, val=15995, 303118 moves in 139 msec
Principle Variation = a5 b6, d3 b3, b5 c5, a3 a4, c4 x d3, a3 a4
q.......
......p.
........
K...n...
........
p..rk...
........
........
move  1: val = 15995  a5 b5
move  2: val = 15995  a5 b6
BEST MOVE:  a5 b6 val = 15995, moveNum = 303118, time = 139 msec
Board("q....... ......p. .K...... ....n... ........ p..rk... ........ ........", "033");
--- Human: d3 b3
BEST MOVE:  b6 c5, val=1944, 2 moves in 1 msec
Principle Variation = b6 c5
BEST MOVE:  b6 c5, val=2744, 56 moves in 0 msec
Principle Variation = b6 c5, g7 g8-q
BEST MOVE:  b6 c5, val=2743, 170 moves in 0 msec
Principle Variation = b6 c5, g7 g8-q, c5 d4
BEST MOVE:  b6 c7, val=15997, 5984 moves in 8 msec
Principle Variation = b6 c7, a8 b8, c5 b6, g7 g8-q
BEST MOVE:  b6 c5, val=15997, 17300 moves in 16 msec
Principle Variation = b6 c5, a8 c6, c7 d6, g7 g8-q, `: `:
BEST MOVE:  b6 c7, val=15997, 179363 moves in 84 msec
Principle Variation = b6 c7, a8 b8, c5 d4, g7 g8-q, c6 d5, `: `:
q.......
......p.
.K......
....n...
........
pr..k...
........
........
move  1: val = 15997  b6 c5
move  2: val = 15997  b6 c7
BEST MOVE:  b6 c7 val = 15997, moveNum = 179363, time = 84 msec
Board("q....... ..K...p. ........ ....n... ........ pr..k... ........ ........", "033");
--- Human: a8 b8

///
///
/// ////////////////

---- elbukja a vezert, hogyhogy ez 6 lepes melysegben nem latszik???

08:00:08: Starting /Users/bereg/qt-workspace/build-chess-Qt_6_3_1_for_macOS-Release/chess.app/Contents/MacOS/chess...
boards: 1
--- Human: e2 e4
BEST MOVE:  e7 e5, val=0, 20 moves in 2 msec
Principle Variation = e7 e5
BEST MOVE:  e7 e5, val=7, 153 moves in 1 msec
Principle Variation = e7 e5, d2 d4
BEST MOVE:  e7 e5, val=-1, 1257 moves in 1 msec
Principle Variation = e7 e5, f2 f3, d7 d5
BEST MOVE:  c7 c6, val=95, 62715 moves in 27 msec
Principle Variation = c7 c6, d1 h5, e7 e6, d2 d4
BEST MOVE:  e7 e5, val=-94, 241620 moves in 81 msec
Principle Variation = e7 e5, d2 d4, f8 b4, h5 e5, e7 e5
BEST MOVE:  d7 d5, val=96, 2849806 moves in 1216 msec
Principle Variation = d7 d5, e4 e5, e7 e6, f1 d3, f7 f6, d2 d4
RNBQKBNR
PPPPPPPP
........
........
....p...
........
pppp.ppp
rnbqkbnr
move  1: val =   100  e7 e5
move  2: val =   101  b8 c6
move  3: val =   101  g8 f6
move  4: val =   102  g8 h6
move  5: val =   100  a7 a6
move  6: val =   100  a7 a5
move  7: val =    99  b7 b6
move  8: val =   100  b7 b5
move  9: val =    97  c7 c6
move 10: val =    98  c7 c5
move 11: val =   100  d7 d6
move 12: val =    96  d7 d5
move 13: val =    97  e7 e6
move 14: val =   101  b8 a6
move 15: val =    97  f7 f6
move 16: val =   101  f7 f5
move 17: val =    97  g7 g6
move 18: val =   101  g7 g5
move 19: val =   101  h7 h6
move 20: val =   100  h7 h5
BEST MOVE:  d7 d5 val = 96, moveNum = 2849806, time = 1216 msec
Board("RNBQKBNR PPP.PPPP ........ ...P.... ....p... ........ pppp.ppp rnbqkbnr", "000");
--- Human: e4 d5
BEST MOVE:  d8 x d5, val=1, 28 moves in 5 msec
Principle Variation = d8 x d5
BEST MOVE:  d8 x d5, val=8, 112 moves in 3 msec
Principle Variation = d8 x d5, d2 d4
BEST MOVE:  d8 x d5, val=-90, 1366 moves in 3 msec
Principle Variation = d8 x d5, f2 f4, d5 x d2
BEST MOVE:  d8 x d5, val=95, 12940 moves in 7 msec
Principle Variation = d8 x d5, d1 e2, f7 f5, e2 x e7
BEST MOVE:  d8 x d5, val=-94, 141940 moves in 55 msec
Principle Variation = d8 x d5, d1 f3, d5 e5, e1 f2, c6 x c2
BEST MOVE:  d8 x d5, val=11, 694552 moves in 278 msec
Principle Variation = d8 x d5, d1 e2, d5 e6, d2 d4, a6 c5, f2 f4
RNBQKBNR
PPP.PPPP
........
...p....
........
........
pppp.ppp
rnbqkbnr
move  1: val =    11  d8 x d5
move  2: val =    99  b8 a6
move  3: val =    98  b8 c6
move  4: val =    98  c8 d7
move  5: val =    94  c8 e6
move  6: val =    13  c8 f5
move  7: val =   299  c8 g4
move  8: val =   101  c8 h3
move  9: val =    95  d8 d7
move 10: val =    91  d8 d6
move 11: val =    98  b8 d7
move 12: val =   101  e8 d7
move 13: val =    93  g8 f6
move 14: val =    95  g8 h6
move 15: val =    90  a7 a6
move 16: val =    91  a7 a5
move 17: val =    91  b7 b6
move 18: val =    93  b7 b5
move 19: val =    86  c7 c6
move 20: val =    89  c7 c5
move 21: val =    87  e7 e6
move 22: val =    88  e7 e5
move 23: val =    91  f7 f6
move 24: val =    91  f7 f5
move 25: val =    91  g7 g6
move 26: val =    91  g7 g5
move 27: val =    91  h7 h6
move 28: val =    91  h7 h5
BEST MOVE:  d8 x d5 val = 11, moveNum = 694552, time = 278 msec
Board("RNB.KBNR PPP.PPPP ........ ...Q.... ........ ........ pppp.ppp rnbqkbnr", "000");
--- Human: g1 f3
BEST MOVE:  d5 x f3, val=-323, 46 moves in 6 msec
Principle Variation = d5 x f3
BEST MOVE:  f7 f5, val=4, 529 moves in 3 msec
Principle Variation = f7 f5, d2 d4
BEST MOVE:  d5 e4, val=-323, 6209 moves in 4 msec
Principle Variation = d5 e4, f1 e2, e4 x f3
BEST MOVE:  d5 e6, val=6, 64533 moves in 34 msec
Principle Variation = d5 e6, d1 e2, e4 x e2, f1 x e2
BEST MOVE:  d5 e4, val=-322, 1251688 moves in 485 msec
Principle Variation = d5 e4, f1 e2, f7 f5, h2 h4, a1 x b1
BEST MOVE:  d5 e6, val=7, 5875996 moves in 3011 msec
Principle Variation = d5 e6, d1 e2, e6 x e2, e2 b5, e8 d8, f2 f4
RNB.KBNR
PPP.PPPP
........
...Q....
........
.....n..
pppp.ppp
rnbqkb.r
move  1: val =     9  d5 e4
move  2: val =   401  d5 x a2
move  3: val =   356  d5 x f3
move  4: val =    10  c8 d7
move  5: val =    10  c8 e6
move  6: val =    10  c8 f5
move  7: val =    10  c8 g4
move  8: val =    11  c8 h3
move  9: val =    10  e8 d8
move 10: val =    10  e8 d7
move 11: val =    10  g8 f6
move 12: val =    10  g8 h6
move 13: val =    10  a7 a6
move 14: val =     9  a7 a5
move 15: val =    10  b7 b6
move 16: val =    11  b7 b5
move 17: val =    82  c7 c6
move 18: val =    10  c7 c5
move 19: val =    10  e7 e6
move 20: val =    84  e7 e5
move 21: val =     8  f7 f6
move 22: val =    84  f7 f5
move 23: val =     9  g7 g6
move 24: val =     9  g7 g5
move 25: val =     9  h7 h6
move 26: val =     9  h7 h5
move 27: val =     9  d5 c6
move 28: val =     7  d5 e6
move 29: val =     8  d5 c4
move 30: val =     8  d5 b3
move 31: val =     8  b8 a6
move 32: val =     8  b8 d7
move 33: val =     8  b8 c6
move 34: val =     8  d5 d6
move 35: val =     8  d5 d7
move 36: val =     8  d5 d8
move 37: val =     8  d5 c5
move 38: val =     8  d5 b5
move 39: val =     8  d5 a5
move 40: val =     8  d5 e5
move 41: val =     8  d5 f5
move 42: val =   200  d5 g5
move 43: val =     8  d5 h5
move 44: val =     8  d5 d4
move 45: val =     8  d5 d3
move 46: val =   575  d5 x d2
BEST MOVE:  d5 e6 val = 7, moveNum = 5875996, time = 3011 msec
Board("RNB.KBNR PPP.PPPP ....Q... ........ ........ .....n.. pppp.ppp rnbqkb.r", "000");
--- Human: f1 e2
BEST MOVE:  e6 x e2, val=-319, 39 moves in 1 msec
Principle Variation = e6 x e2
BEST MOVE:  f7 f5, val=5, 454 moves in 1 msec
Principle Variation = f7 f5, d2 d4
BEST MOVE:  f7 f6, val=-318, 3206 moves in 3 msec
Principle Variation = f7 f6, d2 d4, e6 x e2
BEST MOVE:  f7 f6, val=5, 12727 moves in 11 msec
Principle Variation = f7 f6, c2 c4, c7 c5, c2 c4
BEST MOVE:  f7 f6, val=-318, 164580 moves in 72 msec
Principle Variation = f7 f6, d2 d4, c7 c6, d2 d4, e6 x e2
BEST MOVE:  e6 g4, val=12, 1656794 moves in 1228 msec
Principle Variation = e6 g4, g2 g3, f7 f6, e2 b5, e8 d8, d2 d4
RNB.KBNR
PPP.PPPP
....Q...
........
........
.....n..
ppppbppp
rnbqk..r
move  1: val =    96  f7 f6
move  2: val =   401  e6 x a2
move  3: val =    98  b8 c6
move  4: val =    97  c8 d7
move  5: val =    17  e8 d8
move  6: val =    18  e8 d7
move  7: val =    18  g8 f6
move  8: val =    18  g8 h6
move  9: val =    92  a7 a6
move 10: val =    92  a7 a5
move 11: val =    92  b7 b6
move 12: val =    93  b7 b5
move 13: val =    13  c7 c6
move 14: val =    14  c7 c5
move 15: val =    14  b8 d7
move 16: val =    90  f7 f5
move 17: val =    14  g7 g6
move 18: val =    95  g7 g5
move 19: val =    15  h7 h6
move 20: val =    14  h7 h5
move 21: val =    14  e6 d7
move 22: val =    14  e6 d5
move 23: val =    14  e6 c4
move 24: val =    14  e6 b3
move 25: val =    15  b8 a6
move 26: val =    14  e6 f5
move 27: val =    12  e6 g4
move 28: val =    13  e6 h3
move 29: val =    13  e6 d6
move 30: val =    13  e6 c6
move 31: val =    13  e6 b6
move 32: val =    13  e6 a6
move 33: val =    13  e6 f6
move 34: val =    13  e6 g6
move 35: val =    13  e6 h6
move 36: val =    13  e6 e5
move 37: val =    13  e6 e4
move 38: val =    13  e6 e3
move 39: val =   110  e6 x e2
BEST MOVE:  e6 g4 val = 12, moveNum = 1656794, time = 1228 msec
Board("RNB.KBNR PPP.PPPP ........ ........ ......Q. .....n.. ppppbppp rnbqk..r", "000");
--- Human: e1 g1
BEST MOVE:  g4 x f3, val=-323, 41 moves in 5 msec
Principle Variation = g4 x f3
BEST MOVE:  f7 f5, val=7, 550 moves in 3 msec
Principle Variation = f7 f5, d2 d4
BEST MOVE:  f7 f6, val=-322, 2540 moves in 2 msec
Principle Variation = f7 f6, d2 d4, g4 x f3
BEST MOVE:  f7 f6, val=8, 18053 moves in 9 msec
Principle Variation = f7 f6, h2 h3, g4 e4, d2 d4
BEST MOVE:  f7 f6, val=-318, 160834 moves in 63 msec
Principle Variation = f7 f6, h2 h3, g4 e4, d2 d4, e4 x f3
BEST MOVE:  c7 c5, val=98, 2352063 moves in 1105 msec
Principle Variation = c7 c5, c2 c4, f7 f5, e2 h5, e4 d5, h2 h4
RNB.KBNR
PPP.PPPP
........
........
......Q.
.....n..
ppppbppp
rnbq.rk.
move  1: val =   100  f7 f6
move  2: val =   104  g4 x f3
move  3: val =   101  b8 c6
move  4: val =   101  c8 d7
move  5: val =   101  c8 e6
move  6: val =   101  c8 f5
move  7: val =   101  e8 d8
move  8: val =   101  e8 d7
move  9: val =   101  g8 f6
move 10: val =   101  g8 h6
move 11: val =   101  a7 a6
move 12: val =   101  a7 a5
move 13: val =   101  b7 b6
move 14: val =   101  b7 b5
move 15: val =   100  c7 c6
move 16: val =    98  c7 c5
move 17: val =    99  e7 e6
move 18: val =   100  e7 e5
move 19: val =    99  b8 d7
move 20: val =    99  f7 f5
move 21: val =    99  g7 g6
move 22: val =   100  g7 g5
move 23: val =    99  h7 h6
move 24: val =   100  h7 h5
move 25: val =    99  g4 f5
move 26: val =    99  g4 e6
move 27: val =    99  g4 d7
move 28: val =    99  g4 h5
move 29: val =    99  b8 a6
move 30: val =   408  g4 h3
move 31: val =   676  g4 g5
move 32: val =    99  g4 g6
move 33: val =    99  g4 f4
move 34: val =    99  g4 e4
move 35: val =   570  g4 d4
move 36: val =   672  g4 c4
move 37: val =    99  g4 b4
move 38: val =    99  g4 a4
move 39: val =   572  g4 h4
move 40: val =   678  g4 g3
move 41: val =   472  g4 x g2
BEST MOVE:  c7 c5 val = 98, moveNum = 2352063, time = 1105 msec
Board("RNB.KBNR PP..PPPP ........ ..P..... ......Q. .....n.. ppppbppp rnbq.rk.", "030");
--- Human: d2 d4
BEST MOVE:  g4 x f3, val=-322, 38 moves in 5 msec
Principle Variation = g4 x f3
BEST MOVE:  c5 x d4, val=5, 176 moves in 3 msec
Principle Variation = c5 x d4, d1 x d4
BEST MOVE:  c5 x d4, val=-328, 1885 moves in 2 msec
Principle Variation = c5 x d4, f3 x d4, g4 x d4
BEST MOVE:  c5 x d4, val=6, 9593 moves in 5 msec
Principle Variation = c5 x d4, h2 h3, g4 e4, f2 f4
BEST MOVE:  f7 f6, val=-219, 218223 moves in 99 msec
Principle Variation = f7 f6, h2 h3, g4 e4, c2 c4, e7 e5
BEST MOVE:  c5 x d4, val=96, 767853 moves in 295 msec
Principle Variation = c5 x d4, f3 x d4, g4 h4, d4 x c5, c5 x d4, c2 c4
RNB.KBNR
PP..PPPP
........
..P.....
...p..Q.
.....n..
ppp.bppp
rnbq.rk.
move  1: val =   112  f7 f6
move  2: val =    96  c5 x d4
move  3: val =   353  g4 x f3
move  4: val =   468  g4 x d4
move  5: val =    99  c8 e6
move  6: val =    98  c8 f5
move  7: val =   110  e8 d8
move  8: val =   110  e8 d7
move  9: val =   101  g8 f6
move 10: val =   100  g8 h6
move 11: val =    98  a7 a6
move 12: val =    99  a7 a5
move 13: val =    97  b7 b6
move 14: val =    97  b7 b5
move 15: val =    98  e7 e6
move 16: val =    99  e7 e5
move 17: val =    99  b8 d7
move 18: val =    98  f7 f5
move 19: val =    99  g7 g6
move 20: val =    97  g7 g5
move 21: val =    98  h7 h6
move 22: val =    98  h7 h5
move 23: val =    99  c5 c4
move 24: val =   100  b8 a6
move 25: val =    98  g4 f5
move 26: val =   104  g4 e6
move 27: val =   106  g4 d7
move 28: val =    99  g4 h5
move 29: val =    98  b8 c6
move 30: val =   106  g4 h3
move 31: val =   103  g4 g5
move 32: val =   100  g4 g6
move 33: val =   103  g4 f4
move 34: val =    97  g4 e4
move 35: val =   110  c8 d7
move 36: val =   103  g4 h4
move 37: val =   109  g4 g3
move 38: val =   795  g4 x g2
BEST MOVE:  c5 x d4 val = 96, moveNum = 767853, time = 295 msec
Board("RNB.KBNR PP..PPPP ........ ........ ...P..Q. .....n.. ppp.bppp rnbq.rk.", "030");
--- Human: f3 d4
BEST MOVE:  g4 x d4, val=-328, 37 moves in 3 msec
Principle Variation = g4 x d4
BEST MOVE:  g4 e4, val=6, 299 moves in 1 msec
Principle Variation = g4 e4, f2 f4
BEST MOVE:  g4 d7, val=-322, 2357 moves in 2 msec
Principle Variation = g4 d7, f2 f3, e4 x d4
BEST MOVE:  g4 h4, val=96, 29075 moves in 14 msec
Principle Variation = g4 h4, d1 d3, e7 e5, c2 c4
BEST MOVE:  g4 e4, val=-98, 238357 moves in 93 msec
Principle Variation = g4 e4, e2 f3, e4 e5, f2 f4, d3 x f1
BEST MOVE:  g4 g6, val=199, 2308167 moves in 971 msec
Principle Variation = g4 g6, c1 f4, e7 e5, c1 f4, e7 e5, e6 x f8
RNB.KBNR
PP..PPPP
........
........
...n..Q.
........
ppp.bppp
rnbq.rk.
move  1: val =   331  g4 e4
move  2: val =   346  g4 x e2
move  3: val =   442  g4 x d4
move  4: val =   418  c8 d7
move  5: val =   418  c8 e6
move  6: val =   399  c8 f5
move  7: val =   769  e8 d8
move  8: val =   769  e8 d7
move  9: val =   569  g8 f6
move 10: val =   569  g8 h6
move 11: val =   765  a7 a6
move 12: val =   765  a7 a5
move 13: val =   416  b7 b6
move 14: val =   414  b7 b5
move 15: val =   765  e7 e6
move 16: val =   664  e7 e5
move 17: val =   896  f7 f6
move 18: val =   340  f7 f5
move 19: val =   765  g7 g6
move 20: val =   765  g7 g5
move 21: val =   765  h7 h6
move 22: val =   336  h7 h5
move 23: val =   574  g4 f5
move 24: val =   572  g4 e6
move 25: val =   329  g4 d7
move 26: val =   428  g4 h5
move 27: val =   428  g4 f3
move 28: val =   769  b8 a6
move 29: val =   404  g4 h3
move 30: val =   564  g4 g5
move 31: val =   199  g4 g6
move 32: val =   896  g4 f4
move 33: val =   769  b8 d7
move 34: val =   227  b8 c6
move 35: val =   227  g4 h4
move 36: val =   496  g4 g3
move 37: val =   466  g4 x g2
BEST MOVE:  g4 g6 val = 199, moveNum = 2308167, time = 971 msec
Board("RNB.KBNR PP..PPPP ......Q. ........ ...n.... ........ ppp.bppp rnbq.rk.", "030");
--- Human: c1 f4
BEST MOVE:  g6 x g2, val=-95, 38 moves in 7 msec
Principle Variation = g6 x g2
BEST MOVE:  b8 d7, val=11, 700 moves in 4 msec
Principle Variation = b8 d7, f2 f3
BEST MOVE:  b8 d7, val=-89, 3916 moves in 3 msec
Principle Variation = b8 d7, f2 f3, g6 x g2
BEST MOVE:  e7 e5, val=199, 67677 moves in 31 msec
Principle Variation = e7 e5, f4 x e5, b8 d7, c2 x c8
BEST MOVE:  b8 d7, val=-9, 531272 moves in 215 msec
Principle Variation = b8 d7, e2 b5, e7 e5, e5 x b8, e5 x f4
BEST MOVE:  a7 a6, val=105, 2354840 moves in 838 msec
Principle Variation = a7 a6, f2 f3, b8 d7, c2 c7, c6 x b5, d1 x c2
RNB.KBNR
PP..PPPP
......Q.
........
...n.b..
........
ppp.bppp
rn.q.rk.
move  1: val =  1123  g6 x c2
move  2: val =   324  b8 a6
move  3: val =   325  b8 c6
move  4: val =   324  c8 d7
move  5: val =   325  c8 e6
move  6: val =   325  c8 f5
move  7: val =   325  c8 g4
move  8: val =   325  c8 h3
move  9: val =   325  e8 d8
move 10: val =   327  e8 d7
move 11: val =   325  g8 f6
move 12: val =   326  g8 h6
move 13: val =   105  a7 a6
move 14: val =   223  a7 a5
move 15: val =   226  b7 b6
move 16: val =   107  b7 b5
move 17: val =   196  e7 e6
move 18: val =   107  e7 e5
move 19: val =   221  f7 f6
move 20: val =   191  f7 f5
move 21: val =   223  h7 h6
move 22: val =   223  h7 h5
move 23: val =   328  g6 f5
move 24: val =   227  g6 e4
move 25: val =   106  g6 d3
move 26: val =   195  b8 d7
move 27: val =   328  g6 h5
move 28: val =   227  g6 f6
move 29: val =   328  g6 e6
move 30: val =   328  g6 d6
move 31: val =   579  g6 c6
move 32: val =   230  g6 b6
move 33: val =   325  g6 a6
move 34: val =   328  g6 h6
move 35: val =   328  g6 g5
move 36: val =   328  g6 g4
move 37: val =   328  g6 g3
move 38: val =   796  g6 x g2
BEST MOVE:  a7 a6 val = 105, moveNum = 2354840, time = 838 msec
Board("RNB.KBNR .P..PPPP P.....Q. ........ ...n.b.. ........ ppp.bppp rn.q.rk.", "030");
--- Human: b1 c3
BEST MOVE:  g6 x g2, val=-97, 36 moves in 7 msec
Principle Variation = g6 x g2
BEST MOVE:  e7 e5, val=100, 605 moves in 3 msec
Principle Variation = e7 e5, f4 x e5
BEST MOVE:  b8 d7, val=-91, 3780 moves in 3 msec
Principle Variation = b8 d7, f2 f3, g6 x g2
BEST MOVE:  b8 d7, val=101, 28095 moves in 13 msec
Principle Variation = b8 d7, e2 h5, g6 f6, e2 x a6
BEST MOVE:  b8 d7, val=-101, 209575 moves in 81 msec
Principle Variation = b8 d7, e2 g4, f7 f5, g4 f3, f6 x f4
BEST MOVE:  e7 e6, val=102, 3101927 moves in 1341 msec
Principle Variation = e7 e6, h2 h4, g6 f6, g4 x d1, b8 d7, f1 x d1
RNB.KBNR
.P..PPPP
P.....Q.
........
...n.b..
..n.....
ppp.bppp
r..q.rk.
move  1: val =   227  b8 d7
move  2: val =   570  g6 x c2
move  3: val =   317  b8 c6
move  4: val =   228  c8 d7
move  5: val =   313  c8 e6
move  6: val =   317  c8 f5
move  7: val =   319  c8 g4
move  8: val =   316  c8 h3
move  9: val =   317  e8 d8
move 10: val =   319  e8 d7
move 11: val =   228  g8 f6
move 12: val =   228  g8 h6
move 13: val =   266  b7 b6
move 14: val =   271  b7 b5
move 15: val =   102  e7 e6
move 16: val =   187  e7 e5
move 17: val =   184  f7 f6
move 18: val =   186  f7 f5
move 19: val =   187  h7 h6
move 20: val =   184  h7 h5
move 21: val =   187  a6 a5
move 22: val =   671  g6 f5
move 23: val =   103  g6 e4
move 24: val =   576  g6 d3
move 25: val =   103  a8 a7
move 26: val =   103  g6 h5
move 27: val =   104  g6 f6
move 28: val =   103  g6 e6
move 29: val =   340  g6 d6
move 30: val =   151  g6 c6
move 31: val =   103  g6 b6
move 32: val =   201  g6 h6
move 33: val =   103  g6 g5
move 34: val =   324  g6 g4
move 35: val =   671  g6 g3
move 36: val =   573  g6 x g2
BEST MOVE:  e7 e6 val = 102, moveNum = 3101927, time = 1341 msec
Board("RNB.KBNR .P...PPP P...P.Q. ........ ...n.b.. ..n..... ppp.bppp r..q.rk.", "030");
--- Human: e2 h5
BEST MOVE:  g6 x h5, val=-328, 33 moves in 2 msec
Principle Variation = g6 x h5
BEST MOVE:  g6 f6, val=318, 326 moves in 1 msec
Principle Variation = g6 f6, f4 x b8
BEST MOVE:  g6 f6, val=-11, 2184 moves in 3 msec
Principle Variation = g6 f6, f4 x b8, f6 x d4
BEST MOVE:  g6 f6, val=98, 13962 moves in 7 msec
Principle Variation = g6 f6, g2 g3, e6 e5, f4 x e5
BEST MOVE:  g6 f6, val=-231, 155087 moves in 61 msec
Principle Variation = g6 f6, g2 g3, e6 e5, f4 x e5, f6 x e5
BEST MOVE:  g6 f6, val=101, 826005 moves in 329 msec
Principle Variation = g6 f6, g2 g3, e6 e5, c3 e4, f6 b6, f4 x e5
RNB.KBNR
.P...PPP
P...P.Q.
.......b
...n.b..
..n.....
ppp..ppp
r..q.rk.
move  1: val =   101  g6 f6
move  2: val =   568  g6 x c2
move  3: val =   316  g6 x h5
move  4: val =   102  c8 d7
move  5: val =   102  e8 d8
move  6: val =   102  e8 d7
move  7: val =   102  e8 e7
move  8: val =   102  f8 e7
move  9: val =   102  f8 d6
move 10: val =   102  f8 c5
move 11: val =   102  f8 b4
move 12: val =   102  f8 a3
move 13: val =   102  g8 e7
move 14: val =   189  g8 f6
move 15: val =   102  g8 h6
move 16: val =   166  b7 b6
move 17: val =   166  b7 b5
move 18: val =   188  f7 f6
move 19: val =   185  f7 f5
move 20: val =   102  h7 h6
move 21: val =   187  a6 a5
move 22: val =   186  e6 e5
move 23: val =   102  g6 f5
move 24: val =   102  g6 e4
move 25: val =   775  g6 d3
move 26: val =   102  b8 d7
move 27: val =   103  b8 c6
move 28: val =   102  a8 a7
move 29: val =   102  g6 h6
move 30: val =   102  g6 g5
move 31: val =   767  g6 g4
move 32: val =   185  g6 g3
move 33: val =   669  g6 x g2
BEST MOVE:  g6 f6 val = 101, moveNum = 826005, time = 329 msec
Board("RNB.KBNR .P...PPP P...PQ.. .......b ...n.b.. ..n..... ppp..ppp r..q.rk.", "030");
--- Human: f4 c7
BEST MOVE:  f6 x d4, val=-336, 32 moves in 3 msec
Principle Variation = f6 x d4
BEST MOVE:  b8 d7, val=94, 329 moves in 1 msec
Principle Variation = b8 d7, d4 x e6
BEST MOVE:  b8 d7, val=-236, 3486 moves in 3 msec
Principle Variation = b8 d7, h5 x f7, f6 x d4
BEST MOVE:  f6 e7, val=99, 60029 moves in 27 msec
Principle Variation = f6 e7, c7 e5, b8 d7, d4 x e6
BEST MOVE:  f8 c5, val=-238, 304463 moves in 117 msec
Principle Variation = f8 c5, h5 x f7, e8 x f7, f1 e1, e5 x c3
BEST MOVE:  b8 c6, val=95, 1942166 moves in 733 msec
Principle Variation = b8 c6, c3 e4, f6 h6, c3 e4, a8 x b8, e4 x c5
RNB.KBNR
.Pb..PPP
P...PQ..
.......b
...n....
..n.....
ppp..ppp
r..q.rk.
move  1: val =   320  f8 c5
move  2: val =   342  f6 x d4
move  3: val =    95  b8 c6
move  4: val =    96  c8 d7
move  5: val =    96  e8 d7
move  6: val =    96  e8 e7
move  7: val =    96  f8 e7
move  8: val =    96  f8 d6
move  9: val =    96  a8 a7
move 10: val =    96  f8 b4
move 11: val =    96  f8 a3
move 12: val =    96  g8 e7
move 13: val =    96  g8 h6
move 14: val =   180  b7 b6
move 15: val =    96  b7 b5
move 16: val =    96  g7 g6
move 17: val =    96  g7 g5
move 18: val =    96  h7 h6
move 19: val =    96  a6 a5
move 20: val =   168  e6 e5
move 21: val =    96  f6 e7
move 22: val =   665  f6 d8
move 23: val =   416  f6 e5
move 24: val =    96  b8 d7
move 25: val =    99  f6 g5
move 26: val =    97  f6 h4
move 27: val =   659  f6 g6
move 28: val =    96  f6 h6
move 29: val =    96  f6 f5
move 30: val =   769  f6 f4
move 31: val =    96  f6 f3
move 32: val =   663  f6 x f2
BEST MOVE:  b8 c6 val = 95, moveNum = 1942166, time = 733 msec
Board("R.B.KBNR .Pb..PPP P.N.PQ.. .......b ...n.... ..n..... ppp..ppp r..q.rk.", "030");
--- Human: d4 c6
BEST MOVE:  b7 x c6, val=-16, 31 moves in 6 msec
Principle Variation = b7 x c6
BEST MOVE:  b7 x c6, val=84, 138 moves in 2 msec
Principle Variation = b7 x c6, h5 x f7
BEST MOVE:  b7 x c6, val=-113, 1627 moves in 3 msec
Principle Variation = b7 x c6, c3 e4, f6 x f2
BEST MOVE:  b7 x c6, val=86, 16241 moves in 8 msec
Principle Variation = b7 x c6, f2 f4, c6 c5, h5 x f7
BEST MOVE:  b7 x c6, val=-235, 129906 moves in 55 msec
Principle Variation = b7 x c6, d1 f3, f6 h4, f3 x c6, f6 x c3
BEST MOVE:  b7 x c6, val=89, 797808 moves in 306 msec
Principle Variation = b7 x c6, c3 e4, f6 h4, f2 f4, h4 c4, c6 x a8
R.B.KBNR
.Pb..PPP
P.n.PQ..
.......b
........
..n.....
ppp..ppp
r..q.rk.
move  1: val =    89  b7 x c6
move  2: val =   178  f6 x c3
move  3: val =    90  c8 d7
move  4: val =    90  f8 e7
move  5: val =    92  f8 d6
move  6: val =    90  f8 c5
move  7: val =    90  f8 b4
move  8: val =    90  f8 a3
move  9: val =    90  g8 e7
move 10: val =    90  g8 h6
move 11: val =    90  b7 b6
move 12: val =   180  b7 b5
move 13: val =    90  a8 b8
move 14: val =    90  g7 g6
move 15: val =    90  g7 g5
move 16: val =    90  h7 h6
move 17: val =   176  a6 a5
move 18: val =    93  e6 e5
move 19: val =    92  f6 e7
move 20: val =    92  f6 d8
move 21: val =    92  f6 e5
move 22: val =   181  f6 d4
move 23: val =    90  a8 a7
move 24: val =   184  f6 g5
move 25: val =   184  f6 h4
move 26: val =   186  f6 g6
move 27: val =   184  f6 h6
move 28: val =    90  f6 f5
move 29: val =    90  f6 f4
move 30: val =   765  f6 f3
move 31: val =   982  f6 x f2
BEST MOVE:  b7 x c6 val = 89, moveNum = 797808, time = 306 msec
Board("R.B.KBNR ..b..PPP P.P.PQ.. .......b ........ ..n..... ppp..ppp r..q.rk.", "030");
--- Human: c3 e4
BEST MOVE:  f6 x f2, val=-113, 32 moves in 7 msec
Principle Variation = f6 x f2
BEST MOVE:  f6 x b2, val=-13, 191 moves in 3 msec
Principle Variation = f6 x b2, h5 x f7
BEST MOVE:  f6 x b2, val=-513, 1650 moves in 2 msec
Principle Variation = f6 x b2, h5 x f7, b2 x a1
BEST MOVE:  f6 h4, val=89, 54174 moves in 25 msec
Principle Variation = f6 h4, f2 f4, a6 a5, h5 x f7
BEST MOVE:  f6 h4, val=-21, 227940 moves in 86 msec
Principle Variation = f6 h4, d1 g4, g7 g5, g4 x h4, h4 x h5
BEST MOVE:  f6 h4, val=316, 2811950 moves in 1131 msec
Principle Variation = f6 h4, g2 g3, h4 e7, c7 d6, f7 f5, h5 x f7
R.B.KBNR
..b..PPP
P.P.PQ..
.......b
....n...
........
ppp..ppp
r..q.rk.
move  1: val =   316  f6 h4
move  2: val =   383  f6 x b2
move  3: val =   328  c8 b7
move  4: val =   653  c8 d7
move  5: val =   328  e8 e7
move  6: val =   328  f8 e7
move  7: val =   402  f8 d6
move  8: val =   326  f8 c5
move  9: val =   328  f8 b4
move 10: val =   414  f8 a3
move 11: val =   328  g8 e7
move 12: val =   328  g8 h6
move 13: val =   324  g7 g6
move 14: val =   328  g7 g5
move 15: val =   324  h7 h6
move 16: val =   408  a6 a5
move 17: val =   324  c6 c5
move 18: val =   356  e6 e5
move 19: val =   332  f6 e7
move 20: val =   657  f6 d8
move 21: val =   758  f6 e5
move 22: val =   408  f6 d4
move 23: val =   408  f6 c3
move 24: val =   328  a8 a7
move 25: val =   408  f6 g5
move 26: val =   358  a8 b8
move 27: val =   552  f6 g6
move 28: val =   318  f6 h6
move 29: val =   405  f6 f5
move 30: val =   655  f6 f4
move 31: val =   412  f6 f3
move 32: val =   551  f6 x f2
BEST MOVE:  f6 h4 val = 316, moveNum = 2811950, time = 1131 msec
Board("R.B.KBNR ..b..PPP P.P.P... .......b ....n..Q ........ ppp..ppp r..q.rk.", "030");
--- Human: g2 g3
BEST MOVE:  h4 x e4, val=-340, 30 moves in 6 msec
Principle Variation = h4 x e4
BEST MOVE:  h4 x e4, val=-240, 130 moves in 3 msec
Principle Variation = h4 x e4, h5 x f7
BEST MOVE:  h4 x e4, val=-340, 1843 moves in 2 msec
Principle Variation = h4 x e4, c2 c3, f7 f5
BEST MOVE:  h4 e7, val=316, 37971 moves in 18 msec
Principle Variation = h4 e7, c7 d6, e7 a7, h5 x f7
BEST MOVE:  h4 e7, val=-12, 167448 moves in 66 msec
Principle Variation = h4 e7, e4 d6, e8 d7, d6 x c8, f8 x c5
BEST MOVE:  h4 e7, val=563, 939973 moves in 361 msec
Principle Variation = h4 e7, e4 d6, e8 d7, d6 f5, d7 x c7, f5 x e7
R.B.KBNR
..b..PPP
P.P.P...
.......b
....n..Q
......p.
ppp..p.p
r..q.rk.
move  1: val =   563  h4 e7
move  2: val =   564  h4 x g3
move  3: val =   566  h4 x h5
move  4: val =   659  h4 x e4
move  5: val =   657  e8 e7
move  6: val =   565  f8 e7
move  7: val =   634  f8 d6
move  8: val =   638  f8 c5
move  9: val =   565  f8 b4
move 10: val =   570  f8 a3
move 11: val =   627  g8 e7
move 12: val =   567  g8 f6
move 13: val =   565  g8 h6
move 14: val =   656  g7 g6
move 15: val =   564  g7 g5
move 16: val =   564  h7 h6
move 17: val =   564  a6 a5
move 18: val =   639  c6 c5
move 19: val =   585  e6 e5
move 20: val =   565  h4 g5
move 21: val =   661  h4 f6
move 22: val =   570  a8 b8
move 23: val =   565  h4 d8
move 24: val =   565  a8 a7
move 25: val =   565  c8 b7
move 26: val =   565  h4 g4
move 27: val =   659  h4 f4
move 28: val =   567  c8 d7
move 29: val = 15995  h4 h3
move 30: val =   564  h4 x h2
BEST MOVE:  h4 e7 val = 563, moveNum = 939973, time = 361 msec
Board("R.B.KBNR ..b.QPPP P.P.P... .......b ....n... ......p. ppp..p.p r..q.rk.", "030");
--- Human: e4 d6
BEST MOVE:  e7 x d6, val=-339, 2 moves in 0 msec
Principle Variation = e7 x d6
BEST MOVE:  e8 d7, val=313, 84 moves in 1 msec
Principle Variation = e8 d7, d6 x c8
BEST MOVE:  e8 d7, val=-12, 219 moves in 0 msec
Principle Variation = e8 d7, d6 x c8, d7 x c7
BEST MOVE:  e8 d7, val=563, 2659 moves in 2 msec
Principle Variation = e8 d7, d6 f5, d7 x c7, f5 x e7
BEST MOVE:  e8 d7, val=258, 8560 moves in 4 msec
Principle Variation = e8 d7, d6 x f7, d7 x c7, f7 x h8, g8 x e7
BEST MOVE:  e8 d7, val=563, 111712 moves in 44 msec
Principle Variation = e8 d7, c7 b8, a8 x b8, d6 f5, d7 x e7, f7 x h8
R.B.KBNR
..b.QPPP
P.PnP...
.......b
........
......p.
ppp..p.p
r..q.rk.
move  1: val =   563  e8 d7
move  2: val =   655  e7 x d6
BEST MOVE:  e8 d7 val = 563, moveNum = 111712, time = 44 msec
Board("R.B..BNR ..bKQPPP P.PnP... .......b ........ ......p. ppp..p.p r..q.rk.", "033");
--- Human: d6 f5
BEST MOVE:  d7 x c7, val=-335, 3 moves in 1 msec
Principle Variation = d7 x c7
BEST MOVE:  d7 x c7, val=563, 49 moves in 0 msec
Principle Variation = d7 x c7, f5 x e7
BEST MOVE:  d7 x c7, val=238, 339 moves in 1 msec
Principle Variation = d7 x c7, f5 x e7, g8 x e7
BEST MOVE:  d7 x c7, val=338, 10470 moves in 8 msec
Principle Variation = d7 x c7, f5 x e7, f8 x e7, h5 x f7
BEST MOVE:  d7 x c7, val=333, 26958 moves in 9 msec
Principle Variation = d7 x c7, f5 x e7, g8 x e7, h5 x f7, e7 x f7
BEST MOVE:  d7 x c7, val=339, 820095 moves in 339 msec
Principle Variation = d7 x c7, f5 x e7, g8 x e7, h5 x f7, d6 e5, g6 x f7
R.B..BNR
..bKQPPP
P.P.P...
.....n.b
........
......p.
ppp..p.p
r..q.rk.
move  1: val =   339  d7 x c7
move  2: val =   340  d7 e8
move  3: val =   436  e7 d6
BEST MOVE:  d7 x c7 val = 339, moveNum = 820095, time = 339 msec
Board("R.B..BNR ..K.QPPP P.P.P... .....n.b ........ ......p. ppp..p.p r..q.rk.", "033");
--- Human: f5 e7
BEST MOVE:  g8 x e7, val=238, 19 moves in 4 msec
Principle Variation = g8 x e7
BEST MOVE:  f8 x e7, val=338, 123 moves in 2 msec
Principle Variation = f8 x e7, h5 x f7
BEST MOVE:  g8 x e7, val=333, 906 moves in 3 msec
Principle Variation = g8 x e7, h5 x f7, e6 e5
BEST MOVE:  g8 x e7, val=339, 5423 moves in 3 msec
Principle Variation = g8 x e7, h5 x f7, e6 e5, f2 f4
BEST MOVE:  g8 x e7, val=244, 40718 moves in 17 msec
Principle Variation = g8 x e7, h5 x f7, a8 b8, f2 f4, b8 x b2
BEST MOVE:  f8 x e7, val=339, 611834 moves in 256 msec
Principle Variation = f8 x e7, d1 d4, f7 f6, f1 e1, e6 e5, c2 c4
R.B..BNR
..K.nPPP
P.P.P...
.......b
........
......p.
ppp..p.p
r..q.rk.
move  1: val =   435  g8 x e7
move  2: val =   339  f8 x e7
move  3: val =   342  c8 b7
move  4: val =   340  c8 d7
move  5: val =   340  a8 a7
move  6: val =   340  a8 b8
move  7: val =   341  g8 f6
move  8: val =   340  g8 h6
move  9: val =   340  c7 b8
move 10: val =   340  c7 b7
move 11: val =   340  c7 b6
move 12: val =   340  f7 f6
move 13: val =   340  f7 f5
move 14: val =   430  g7 g6
move 15: val =   340  g7 g5
move 16: val =   340  h7 h6
move 17: val =   340  a6 a5
move 18: val =   340  c6 c5
move 19: val =   340  e6 e5
BEST MOVE:  f8 x e7 val = 339, moveNum = 611834, time = 256 msec
Board("R.B...NR ..K.BPPP P.P.P... .......b ........ ......p. ppp..p.p r..q.rk.", "033");
*/
