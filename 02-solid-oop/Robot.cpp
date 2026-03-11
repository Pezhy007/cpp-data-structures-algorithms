#include "Robot.h"

Robot::Robot(/* args */)
{
this->input = "Robot";
}

bool Robot::lose(Move& opp){
if (opp.getName() == "Monkey" || opp.getName() == "Pirate")
{
return true;
}
return false;
}

Robot::~Robot()
{
}
