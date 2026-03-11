#include "Scissors.h"

Scissors::Scissors(/* args */)
{
this->input = "Scissors";
}

bool Scissors::lose(Move& opp){
if (opp.getName() == "Rock")
{
return true;
}
return false;
}

Scissors::~Scissors()
{
}
