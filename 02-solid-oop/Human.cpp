#include "Human.h"

Human::Human(){
this->uName = "Human";
}

Human::Human(std::string name){

this->uName = name;
}

Move* Human::makeMove(){

//std::cout << "Enter Move: ";
std::cin >> input;

if(input == "Ninja"){
moveName = new Ninja();
}
else if(input == "Robot"){
moveName = new Robot();
}
else if(input == "Pirate"){
moveName = new Pirate();
}
else if(input == "Monkey"){
moveName = new Monkey();
}
else if(input == "Zombie"){
moveName = new Zombie();
}
else if(input == "Rock"){
moveName = new Rock();
}
else if(input == "Paper"){
moveName = new Paper();
}
else if(input == "Scissors"){
moveName = new Scissors();
}
else{
moveName = nullptr;
}


return moveName;

}

std::string Human::getName(){
return uName;
}

Human::~Human(){
delete moveName;
}
