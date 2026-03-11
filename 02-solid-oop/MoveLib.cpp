#include "MoveLib.h"

MoveLib::MoveLib(){

}

bool MoveLib::ValidMoves(Move* player1, Move *player2){
bool check1 = false;
bool check2 = false;
this->i1 = 0;
this->i2 = 0;

for (auto j = moveName.begin(); j != moveName.end();j++)
{
if(moveName[i1] == player1->getName()){
check1 = true;
}
i1++;

}

for (auto k = moveName.begin(); k != moveName.end();k++)
{
if(moveName[i2] == player2->getName()){
check2 = true;
}
i2++;
}

if(check1 == true && check2 == true){
return true;
}
return false;
}

void MoveLib::init_MoveName(){

moveName.push_back("Rock");
moveName.push_back("Paper");
moveName.push_back("Scissors");

moveName.push_back("Ninja");
moveName.push_back("Robot");
moveName.push_back("Zombie");
moveName.push_back("Pirate");
moveName.push_back("Monkey");
}

MoveLib::~MoveLib(){

}

