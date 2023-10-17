
#include <cassert>
#include "board.h"
#include "move.h"

Move::Move()
{

}

Move::Move(unsigned char from, unsigned char to, unsigned char flags, unsigned char promotion)
{
    this->from = from;
    this->to = to;
    this->flags = flags;
    this->promotion = promotion;
}

Move::Move(std::string s)
{
    assert(s.length() >= 4 && s.length() <= 6);
    assert(s[0] >= 'a' && s[0] <= 'h');
    assert(s[1] >= '1' && s[1] <= '8');
    assert(s[2] >= 'a' && s[2] <= 'h');
    assert(s[3] >= '1' && s[3] <= '8');

    assert(s.length() < 6 || s[4] == 'x');

    flags = promotion = 0;

    if (s.length() == 5)
    {
        if (s[4] == 'x')
            flags |= CHESS_FLAG_HIT;
        else
            promotion = s[4] - '0';
    }

    if (s.length() == 6)
        promotion = s[5] - '0';

    assert(promotion < 7);

    if (promotion)
        flags |= CHESS_FLAG_PROMOTION;

    from = (90 - 10 * (s[1] - '1')) + (s[0] - 'a' + 1);
    to = (90 - 10 * (s[3] - '1')) + (s[2] - 'a' + 1);
}

void Move::printPosition(int p)
{
    printf("%c%c", (p % 10) + 'a' - 1, 10 - (p / 10) + '0');
}

void Move::print()
{
    const char promotionChar[] = {' ', 'k', 'q', 'r', 'n', 'b', 'p'};

    printPosition(from);
    printf(" ");

    if ((flags & CHESS_FLAG_HIT) != 0)
        printf("x ");

    printPosition(to);

    if ((flags & CHESS_FLAG_PROMOTION) != 0)
        printf("-%c", promotionChar[promotion]);
}

void Move::println()
{
    print();
    printf("\n");
}

bool Move::operator== (const Move& m)
{
    return m.from == from && (m.flags & CHESS_FLAG_PROMOTION) == (flags & CHESS_FLAG_PROMOTION) && m.promotion == promotion && m.to == to;
}

