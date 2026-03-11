#include "Computer.h"

Computer::Computer(){
this->uName = "Computer";
this->rock = new Rock();
}

Move* Computer::makeMove(){
return this->rock;
}

std::string Computer::getName(){
return this->uName;
}

Computer::~Computer(){
delete this->rock;
}
