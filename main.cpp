#include "chesswindow.h"

#include <QApplication>

#include <stdio.h>
#include "test.h"

int main(int argc, char *argv[])
{

//    Test test;
//    return 0;

    QApplication a(argc, argv);
    ChessWindow w;
    w.show();
    return a.exec();

}
