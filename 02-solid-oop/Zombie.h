#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "Move.h"

class Zombie : public Move
{

public:
    Zombie();
    bool lose(Move& opp);
    ~Zombie();
};
#endif // ZOMBIE_H