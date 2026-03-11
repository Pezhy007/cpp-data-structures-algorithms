#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() : root(new TrieNode()) {}

PrefixMatcher::~PrefixMatcher() {
    // TODO: Implement destructor to free allocated memory
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    TrieNode* current = root;
    for (char bit : address) {
        if (current->children.find(bit) == current->children.end()) {
            current->children[bit] = new TrieNode();
        }
        current = current->children[bit];
    }
    current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    TrieNode* current = root;
    int lastMatchedRouter = -1;
    
    for (char bit : networkAddress) {
        if (current->children.find(bit) == current->children.end()) {
            break;
        }
        current = current->children[bit];
        if (current->routerNumber != -1) {
            lastMatchedRouter = current->routerNumber;
        }
    }
    
    return lastMatchedRouter;
}
   
