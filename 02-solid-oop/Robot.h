#ifndef ROBOT_H
#define ROBOT_H

#include "Move.h"

class Robot : public Move
{

public:
    Robot();
    bool lose(Move& opp);
    ~Robot();
};
#endif // ROBOT_H