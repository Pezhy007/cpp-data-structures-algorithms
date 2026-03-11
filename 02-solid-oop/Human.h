#ifndef E09A156A_5864_4855_BFFC_EFC65F56B168
#define E09A156A_5864_4855_BFFC_EFC65F56B168
#include "Player.h"

class Human : public Player
{
private:
    std::string input;
    Move* moveName;

public:
    Human();
    Human(std::string name);
    Move* makeMove();
    std::string getName();
    virtual ~Human();
};



#endif /* E09A156A_5864_4855_BFFC_EFC65F56B168 */
