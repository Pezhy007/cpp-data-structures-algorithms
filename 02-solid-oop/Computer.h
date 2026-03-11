#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"
#include "Rock.h"

class Computer : public Player
{
private:
    Rock* rock;

public:
    Computer();
    Move* makeMove();
    std::string getName();
    virtual ~Computer();
};

#endif // COMPUTER_H