#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "Move.h"
#include "Ninja.h"
#include "Robot.h"
#include "Monkey.h"
#include "Zombie.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Pirate.h"

class Player
{
protected:
    std::string uName;
    
public:
    Player();
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
    
    ~Player();
};

#endif // PLAYER_H 