#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>
#include <unordered_map>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool isEndOfWord;
    
    TrieNode() : isEndOfWord(false) {}
};

class Autocomplete {
private:
    TrieNode* root;
    
    void collectWords(TrieNode* node, std::string& prefix, std::vector<std::string>& result);
    
public:
    Autocomplete();
    ~Autocomplete();
    
    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);
};

#endif
