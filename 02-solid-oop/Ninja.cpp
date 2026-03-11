#include "Ninja.h"

Ninja::Ninja(){
this->input = "Ninja";
}

bool Ninja::lose(Move& opp){
if (opp.getName() == "Robot" || opp.getName() == "Monkey")
{
return true;
}
return false;
}

Ninja::~Ninja(){

}
