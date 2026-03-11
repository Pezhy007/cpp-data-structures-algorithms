#include "Rock.h"

Rock::Rock(/* args */)
{
this->input = "Rock";
}

bool Rock::lose(Move& opp){
if (opp.getName() == "Paper")
{
return true;
}
return false;
}

Rock::~Rock()
{
}
