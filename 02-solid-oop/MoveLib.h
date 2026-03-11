#ifndef MOVELIB_H
#define MOVELIB_H

#include "Move.h"
#include <vector>

class MoveLib
{
private:
    std::vector<std::string> moveName;
    int i1;
    int i2;

public:
    MoveLib();
    void init_MoveName();
    bool ValidMoves(Move* player1, Move* player2);
    ~MoveLib();
};
#endif // MOVELIB_H 