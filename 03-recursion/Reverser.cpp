// Reverser.cpp
#include "Reverser.h"
#include <stdexcept>
#include <string>

int Reverser::reverseDigit(int value) {
    if (value < 0) return -1; // Handle invalid input
    return reverseDigitHelper(value, 0);
}

int Reverser::reverseDigitHelper(int value, int reversed) {
    if (value == 0) {
        return reversed;
    }
    reversed = reversed * 10 + (value % 10);
    return reverseDigitHelper(value / 10, reversed);
}

std::string Reverser::reverseString(const std::string& characters) {
    if (characters.empty()) return "ERROR"; // Handle invalid input
    if (characters.length() <= 1) return characters;
    return characters.back() + reverseString(characters.substr(0, characters.length() - 1));
}