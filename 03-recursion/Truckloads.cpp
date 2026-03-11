// Truckloads.cpp
#include "Truckloads.h"

int Truckloads::numTrucks(int numItems, int truckCapacity) {
    if (numItems <= truckCapacity) {
        return 1;
    }
    int half = (numItems + 1) / 2;
    return numTrucks(half, truckCapacity) + numTrucks(numItems - half, truckCapacity);
}