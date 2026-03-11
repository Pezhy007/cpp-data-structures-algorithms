#ifndef PAPER_H
#define PAPER_H

#include "Move.h"


class Paper : public Move
{

public:
    Paper();
    bool lose(Move& opp);
    ~Paper();
};
#endif // PAPER_H