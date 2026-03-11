#include "Monkey.h"

Monkey::Monkey()
{
this->input = "Monkey";
}

bool Monkey::lose(Move& opp){
if (opp.getName() == "Pirate" || opp.getName() == "Zombie")
{
return true;
}
return false;
}


Monkey::~Monkey()
{
}
