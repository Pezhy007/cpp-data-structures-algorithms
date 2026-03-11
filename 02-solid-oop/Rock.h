#ifndef ROCK_H
#define ROCK_H

#include "Move.h"

class Rock : public Move
{

public:
    Rock();
    bool lose(Move& opp);
    ~Rock();
};
#endif // ROCK_H