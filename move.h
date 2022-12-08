#ifndef MOVE_H
#define MOVE_H

#include <string>

class Move
{
    private:

    public:
        unsigned char flags;
        unsigned char from;
        unsigned char to;
        unsigned char promotion;

        Move();
        Move(unsigned char from, unsigned char to, unsigned char flags, unsigned char param);
        Move(std::string s);
        void print();
        void println();
        void printPosition(int p);
        bool operator== (const Move& m);
};

#endif // MOVE_H
