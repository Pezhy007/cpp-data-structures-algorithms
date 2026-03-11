// main.cpp
#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"
#include "EfficientTruckloads.h"

int main() {
    // Testing Truckloads
    Truckloads truckloads;
    std::cout << "Truckloads: " << truckloads.numTrucks(14, 3) << std::endl;

    // Testing Reverser
    Reverser reverser;
    std::cout << "Reversed Digit: " << reverser.reverseDigit(12345) << std::endl;
    std::cout << "Reversed String: " << reverser.reverseString("hello") << std::endl;

    // Testing EfficientTruckloads
    EfficientTruckloads efficientTruckloads;
    std::cout << "Efficient Truckloads: " << efficientTruckloads.numTrucks(14, 3) << std::endl;

    return 0;
}