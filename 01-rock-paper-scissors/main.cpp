#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Referee referee;
    
    std::string playerName;
    std::cout << "Enter player name: ";
    std::cin >> playerName;
    
    Human human(playerName);
    Computer computer;

    char continueGame = 'y';

    while (continueGame == 'y' || continueGame == 'Y') {
        std::cout << "Choose your move (R for Rock, P for Paper, S for Scissors):" << std::endl;
        
        Player* winner = referee.refGame(&human, &computer);

        if (winner == nullptr) {
            std::cout << "It's a Tie" << std::endl;
        } else {
            std::cout << winner->getName() << " Wins" << std::endl;
        }

        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> continueGame;
    }

    return 0;
}
