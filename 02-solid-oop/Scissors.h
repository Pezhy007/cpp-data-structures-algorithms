#ifndef SCISSORS_H
#define SCISSORS_H

#include "Move.h"

class Scissors : public Move
{

  
public:
    Scissors();
    bool lose(Move& opp);
    ~Scissors();
};
#endif // SCISSORS_H