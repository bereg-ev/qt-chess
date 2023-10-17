#ifndef GAME_H
#define GAME_H

#include "ai/board.h"

class Game
{
    public:
        Game(Board b, int occasion);

        Board board;
        Move move;
        int occasion;
};

#endif // GAME_H
