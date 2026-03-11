// EfficientTruckloads.h
#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <unordered_map>

class EfficientTruckloads {
public:
    int numTrucks(int numItems, int truckCapacity);

private:
    std::unordered_map<int, int> memo;
    int numTrucksMemo(int numItems, int truckCapacity);
};

#endif // EFFICIENTTRUCKLOADS_H