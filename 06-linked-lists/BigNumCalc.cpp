#include "BigNumCalc.h"
#include <algorithm>
#include <stdexcept>  

BigNumCalc::BigNumCalc() {}

BigNumCalc::~BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(std::string numString) {
    std::list<int> result;
    for (char c : numString) {
        result.push_back(c - '0');
    }
    return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int carry = 0;
    
    num1.reverse();
    num2.reverse();
    
    auto it1 = num1.begin();
    auto it2 = num2.begin();
    
    while (it1 != num1.end() || it2 != num2.end() || carry) {
        int sum = carry;
        if (it1 != num1.end()) {
            sum += *it1;
            ++it1;
        }
        if (it2 != num2.end()) {
            sum += *it2;
            ++it2;
        }
        result.push_front(sum % 10);
        carry = sum / 10;
    }
    
    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }
    
    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) {
    std::list<int> result;
    int borrow = 0;
    
    num1.reverse();
    num2.reverse();
    
    auto it1 = num1.begin();
    auto it2 = num2.begin();
    
    while (it1 != num1.end()) {
        int diff = *it1 - borrow;
        if (it2 != num2.end()) {
            diff -= *it2;
            ++it2;
        }
        
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        
        result.push_front(diff);
        ++it1;
    }
    
    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }
    
    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    if (num2.size() != 1) {
        throw std::invalid_argument("num2 must be a single digit");
    }
    
    int multiplier = num2.front();
    std::list<int> result;
    int carry = 0;
    
    num1.reverse();
    
    for (int digit : num1) {
        int product = digit * multiplier + carry;
        result.push_front(product % 10);
        carry = product / 10;
    }
    
    if (carry > 0) {
        result.push_front(carry);
    }
    
    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }
    
    return result;
}