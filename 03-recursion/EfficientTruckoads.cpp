// EfficientTruckloads.cpp
#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numItems, int truckCapacity) {
    return numTrucksMemo(numItems, truckCapacity);
}

int EfficientTruckloads::numTrucksMemo(int numItems, int truckCapacity) {
    int key = numItems * 1000 + truckCapacity;
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    if (numItems <= truckCapacity) {
        return memo[key] = 1;
    }
    int half = (numItems + 1) / 2;
    return memo[key] = numTrucksMemo(half, truckCapacity) + numTrucksMemo(numItems - half, truckCapacity);
}