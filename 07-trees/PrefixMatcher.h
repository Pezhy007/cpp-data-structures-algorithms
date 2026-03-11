#ifndef PREFIX_MATCHER_H
#define PREFIX_MATCHER_H

#include <string>
#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    int routerNumber;
    
    TrieNode() : routerNumber(-1) {}
};

class PrefixMatcher {
private:
    TrieNode* root;
    
public:
    PrefixMatcher();
    ~PrefixMatcher();
    
    void insert(std::string address, int routerNumber);
    int selectRouter(std::string networkAddress);
};

#endif
