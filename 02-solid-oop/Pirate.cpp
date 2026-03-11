#include "Pirate.h"

Pirate::Pirate(/* args */)
{
this->input = "Pirate";
}

bool Pirate::lose(Move& opp){
if (opp.getName() == "Ninja" || opp.getName() == "Zombie")
{
return true;
}
return false;
}

Pirate::~Pirate()
{
}
