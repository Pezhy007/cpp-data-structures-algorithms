#include "Zombie.h"

Zombie::Zombie(/* args */)
{
this->input = "Zombie";
}

bool Zombie::lose(Move& opp){
if (opp.getName() == "Ninja" || opp.getName() == "Robot")
{
return true;
}
return false;
}

Zombie::~Zombie()
{
}
