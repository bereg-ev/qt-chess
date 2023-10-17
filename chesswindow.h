#ifndef CHESSWINDOW_H
#define CHESSWINDOW_H

#include <QWidget>
#include <QPainter>
#include <QTimer>
#include <QKeyEvent>
#include <QTouchEvent>
#include <list>

#include "ai/board.h"
#include "game.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ChessWindow; }
QT_END_NAMESPACE

class ChessWindow : public QWidget
{
    Q_OBJECT

public:
    ChessWindow(QWidget *parent = nullptr);
    ~ChessWindow();


public slots:
    void touchEvent(QTouchEvent *ev);
    virtual void paintEvent(QPaintEvent *event);
    virtual void mousePressEvent(QMouseEvent *event);

protected:
    void timerEvent(QTimerEvent *event);
    void keyPressEvent(QKeyEvent* event);

private:
    Ui::ChessWindow *ui;
    int timerId;
    QWidget *parent;
    float scale;
//    Board board;
    int fromPos;
    int toPos;
    std::string keyInputStr;
    void keyInput(char c);
    int state;
    int greenPositions[120];
    int isPromote[120];
    std::list<Game> boards;
    void eventOnScreen(int x, int y);
};
#endif // CHESSWINDOW_H

