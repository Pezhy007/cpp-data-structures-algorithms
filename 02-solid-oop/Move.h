#ifndef MOVE_H
#define MOVE_H

#include <string>
#include <iostream>

class Move
{
protected:
    std::string input;

public:
    Move();
    virtual ~Move();
    virtual bool lose(Move& player2) = 0;
    std::string getName() ;
};

#endif // MOVE_H