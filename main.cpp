
#include "chesswindow.h"

#include <QApplication>

#include <stdio.h>
#include "test.h"

#include "ai/board.h"

#include "piece/piece.h"

/*

https://github.com/nanochess/Toledo-Atomchess
qemu-system-x86_64 -fda toledo_atomchess_bootos.img

http://www.tckerrigan.com/

*/

int main(int argc, char *argv[])
{
#if 0
    Test test;
    printf("sizeof(Pawn) = %d\n", sizeof(Pawn));
    printf("sizeof(King) = %d\n", sizeof(King));
    return 0;
#else
    QApplication a(argc, argv);
    ChessWindow w;
    w.show();
    return a.exec();
#endif
}
