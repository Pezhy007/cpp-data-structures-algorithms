#ifndef PIRATE_H
#define PIRATE_H

#include "Move.h"

class Pirate : public Move
{

public:
    Pirate();
    bool lose(Move& opp);
    ~Pirate();
};
#endif // PIRATE_H