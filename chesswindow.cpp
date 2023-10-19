#include "chesswindow.h"
#include "./ui_chesswindow.h"

#include "ai/board.h"
#include "ai/evaluate.h"
#include "ai/movegen.h"
#include "ai/ai.h"
#include "game.h"

#include <QPixmap>
#include <QLabel>

#define GRID_SIZE   (scale / 10)

ChessWindow::ChessWindow(QWidget *parent) : QWidget(parent), ui(new Ui::ChessWindow)
{

    ui->setupUi(this);
    QScreen *screen = qApp->screens().at(0);

    scale = (screen->geometry().width() > screen->geometry().height() ? screen->geometry().height() : screen->geometry().width()) * 0.8;

    this->parent = parent;
    timerId  = startTimer(100);
    state = 0;
    fromPos = 0;
    toPos = 0;

    for (int i = 0; i < sizeof(greenPositions) / sizeof(int); i++)
        greenPositions[i] = 0;

    boards.clear();

//    Board b = Board("........ .Q...N.. ...k.P.. ........ ......B. ....K... ........ ........", "033");    // !! huszart leutteti
//    Board b("N..QK... ........ B.n.p..N ..q.p..R ..b..... .....n.P .......P ..kr....", "033");
//    Board b("........ .B...... ........ .....K.. ........ ....k... ..Q..P.. ........", "033");


    Board b;

//    Board b("........ ........ ....q... ........ ...P..PP ......K. ........ ....k..r", "033");
    state = 0;  // gep kezd!

    boards.push_back(Game(b, 0));

    printf("boards: %lu\n", boards.size());

}

void ChessWindow::eventOnScreen(int x, int y)
{
    if (x >= 50 && x <= 50 + 8 * GRID_SIZE && y >= 50 && y <= 50 + 8 * GRID_SIZE)
    {
        int newPos = 20 + 10 * int((y - 50) / GRID_SIZE) + int((x - 50) / GRID_SIZE) + 1;

        if (fromPos == 0)
        {
            MoveGen m = MoveGen(boards.back().board, CHECK_VALIDITY, 1);


            for (auto it = m.movesv.begin(); it != m.movesv.end(); it++)
                if (it->from == newPos)
                    fromPos = newPos;

            for (auto it = m.movesv.begin(); it != m.movesv.end(); it++)
            {
                if (it->from == fromPos)
                {
                    greenPositions[it->to] = 1;
                    isPromote[it->to] = ((it->flags & CHESS_FLAG_PROMOTION) != 0);
                }
            }
        }
        else if (fromPos == newPos && toPos == 0)
        {
            for (int i = 0; i < sizeof(greenPositions) / sizeof(int); i++)
                greenPositions[i] = 0;

            fromPos = 0;
        }
        else if (greenPositions[newPos] != 0)
        {
            printf("--- Human: ");
            Move m = Move(fromPos, newPos, isPromote[newPos] ? CHESS_FLAG_PROMOTION : 0, isPromote[newPos] ? PIECE_QUEEN : 0);
            m.println();
            Board newBoard;
            Evaluate e = Evaluate(boards.back().board, newBoard, m, 1);
            boards.push_back(Game(newBoard, 0));
            keyInputStr = "... please wait ...";
            update();
            state = 1;

            for (int i = 0; i < sizeof(greenPositions) / sizeof(int); i++)
                greenPositions[i] = 0;

            fromPos = 0;
        }

        update();
    }

}

void ChessWindow::mousePressEvent(QMouseEvent *event)
{
    int x = event->pos().x();
    int y = event->pos().y();
    eventOnScreen(x, y);
}

#define GRID_SIZE   (scale / 10)

void ChessWindow::paintEvent(QPaintEvent *event)
{

    char txt[128];

    QPainter painter(this);
    QPen pen;
    QFont font = painter.font();
//    font.setPointSize(24);
    pen.setWidth(2);
    pen.setColor(Qt::black);
    painter.setPen(pen);

//    sprintf(txt, "%s       ", keyInputStr.c_str());        // https://doc.qt.io/QtForMCUs-2.2/quickultralite-chess-chess-qml.html

//    painter.drawText(20, 20, txt);

    font.setPointSize(GRID_SIZE / 1.5);
    painter.setFont(font);

    for (int row = 0; row < 8; row++)
    {
        for (int col = 0; col < 8; col++)
        {
            char txt [16];
            unsigned char c = boards.back().board.getPieceType(10 * (row + 2) + col + 1);
            std::string piece;

            switch (c & 0x7f)
            {
                case EMPTY_POSITION: piece = " "; break;
                case PIECE_KING: piece = "♚"; break;
                case PIECE_QUEEN: piece = "♛"; break;
                case PIECE_ROOK: piece = "♜"; break;
                case PIECE_BISHOP: piece = "♝"; break;
                case PIECE_KNIGHT: piece = "♞"; break;
                case PIECE_PAWN: piece = "♟"; break;
            }

            pen.setColor(Qt::gray);
            painter.setPen(pen);

            painter.setBrush(((row + col) % 2) == 0 ? Qt::NoBrush : Qt::Dense4Pattern);
            painter.drawRect(QRect(50 + col * GRID_SIZE, 50 + row * GRID_SIZE, GRID_SIZE - 1, GRID_SIZE - 1));

            pen.setColor(c >= 0x80 ? Qt::black : Qt::green);
            painter.setPen(pen);

            painter.drawText(30 + col * GRID_SIZE + GRID_SIZE / 2, 50 + row * GRID_SIZE + GRID_SIZE / 1.5, piece.c_str());

            if (greenPositions[(row + 2) * 10 + 1 + col] != 0)
            {
                pen.setColor(Qt::green);
                painter.setPen(pen);
                painter.drawRect(QRect(50 + 4 + col * GRID_SIZE, 50 + 4 + row * GRID_SIZE, GRID_SIZE - 1 - 8, GRID_SIZE - 1 - 8));
            }
        }
    }

    pen.setColor(Qt::black);
    painter.setPen(pen);
    painter.drawRect(QRect(49, 49, GRID_SIZE * 8 + 1, GRID_SIZE * 8 + 1));
    font.setPointSize(GRID_SIZE / 6);
    painter.setFont(font);

    for (int i = 0; i < 8; i++)
    {
        sprintf(txt, "%c", 'A' + i);
        painter.drawText(50 + i * GRID_SIZE + GRID_SIZE / 2.5, 20 + 8 * GRID_SIZE + GRID_SIZE / 1.5, txt);
        sprintf(txt, "%c", '1' + i);
        painter.drawText(20, 15 + (8 - i) * GRID_SIZE, txt);
    }

    if (fromPos)
    {
        int y = (fromPos % 10) - 1;
        int x = (fromPos / 10) - 2;
        pen.setColor(Qt::red);
        painter.setPen(pen);
        painter.drawRect(QRect(50 + 4 + y * GRID_SIZE, 50 + 4 + x * GRID_SIZE, GRID_SIZE - 1 - 8, GRID_SIZE - 1 - 8));
    }
    resize(scale, scale);
}

void ChessWindow::timerEvent(QTimerEvent *event)
{
    if (state == 1)
    {
        Board newBoard;
        Ai ai = Ai(boards.back().board, 6, AI_FLAG_ALL, boards);

        if (ai.aiMoveNum)
        {
            ai.print();
            Evaluate e = Evaluate(boards.back().board, newBoard, ai.aiBestMove, 1);
            newBoard.println();
            fflush(0);
            boards.push_back(Game(newBoard, 0));
            keyInputStr = "";
            state = 0;
        }
        else
            state = 2;
    }

    update();
}

void ChessWindow::keyInput(char c)
{
    keyInputStr += c;
}

void ChessWindow::keyPressEvent( QKeyEvent* event )
{
    switch (event->key())
    {
        case Qt::Key_U:
            if (boards.size() >= 2)
            {
                fromPos = 0;                // fix

                for (int i = 0; i < sizeof(greenPositions) / sizeof(int); i++)      // fix
                    greenPositions[i] = 0;

                boards.pop_back();
                boards.pop_back();
                update();
            }

            break;

        default:
            event->ignore();
    }

    update();
}

void ChessWindow::touchEvent(QTouchEvent *ev)
{

    switch (ev->type())
    {
        case QEvent::TouchBegin:
        {
            int x = ev->touchPoints().first().position().x();
            int y = ev->touchPoints().first().position().y();
            eventOnScreen(x, y);
            break;
        }

        case QEvent::TouchEnd:
            break;

        case QEvent::TouchUpdate:
            break;

        default:
            break;
    }
}

ChessWindow::~ChessWindow()
{
    delete ui;
}

