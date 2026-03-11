// RecursiveBinarySearch.cpp
#include "RecursiveBinarySearch.h"

int RecursiveBinarySearch::binarySearch(std::vector<int>& list, int item, int start, int end) {
    if (start > end) return -1;
    int mid = start + (end - start) / 2;
    if (list[mid] == item) return mid;
    if (list[mid] > item) return binarySearch(list, item, start, mid - 1);
    return binarySearch(list, item, mid + 1, end);
}

bool RecursiveBinarySearch::search(std::vector<int> list, int item) {
    int result = binarySearch(list, item, 0, list.size() - 1);
    return result != -1;
}
