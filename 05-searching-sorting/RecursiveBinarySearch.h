// RecursiveBinarySearch.h
#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
private:
    int binarySearch(std::vector<int>& list, int item, int start, int end);

public:
    bool search(std::vector<int> list, int item);
};

#endif
