#include "Referee.h"

Referee::Referee(){
this->moveLib = new MoveLib();
moveLib->init_MoveName();
}

Player* Referee::refGame(Player * player1, Player * player2){
Move* usr1 = player1->makeMove();
Move* usr2= player2->makeMove();
Player* winner = nullptr;

if(moveLib->ValidMoves(usr1,usr2) == true){
if(usr1->lose(*usr2)){
winner = player2;
return winner;
}
else if(usr2->lose(*usr1)){
winner = player1;
return winner;
}
else if(usr1->getName() == usr2->getName()){
//std::cout << "Tie" << std::endl;
winner = nullptr;
return winner;
}
}
return winner;
}

Referee::~Referee(){
delete moveLib;
}
