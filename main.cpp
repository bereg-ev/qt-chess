#include "chesswindow.h"

#include <QApplication>

#include <stdio.h>
#include "test.h"

#include "board.h"

int main(int argc, char *argv[])
{
#if 0
//    Test test;
//    return 0;
    printf("sizeof(Pawn) = %d\n", sizeof(Pawn));
#else
    QApplication a(argc, argv);
    ChessWindow w;
    w.show();
    return a.exec();
#endif
}
