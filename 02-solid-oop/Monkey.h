#ifndef MONKEY_H
#define MONKEY_H

#include "Move.h"

class Monkey : public Move
{

public:
    Monkey();
    bool lose(Move& opp);
    ~Monkey();
};
#endif // MONKEY_H