#include "Paper.h"

Paper::Paper(/* args */)
{
this->input = "Paper";
}

bool Paper::lose(Move& opp){
if (opp.getName() == "Scissors")
{
return true;
}
return false;
}

Paper::~Paper()
{
}
