#ifndef NINJA_H
#define NINJA_H

#include "Move.h"

class Ninja : public Move
{

public:
    Ninja();
    bool lose(Move& opp);
    ~Ninja();
};
#endif // NINJA_H