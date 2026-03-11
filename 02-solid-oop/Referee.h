#ifndef REFEREE_H
#define REFEREE_H

#include "Player.h"
#include "MoveLib.h"
#include <vector>

class Referee
{
private:
    MoveLib* moveLib;
public:
    Referee();
    virtual Player* refGame(Player * player1, Player * player2);
    

    ~Referee();
};

#endif // REFEREE_H