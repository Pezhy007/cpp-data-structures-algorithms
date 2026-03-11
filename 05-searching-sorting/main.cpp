// main.cpp
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> list;
    int num;

    while (iss >> num) {
        list.push_back(num);
    }

    QuickSort qs;
    std::vector<int> sortedList = qs.sort(list);

    RecursiveBinarySearch rbs;
    bool found = rbs.search(sortedList, 1);

    std::cout << (found ? "true" : "false");
    for (int i : sortedList) {
        std::cout << " " << i;
    }
    std::cout << std::endl;

    return 0;
}
