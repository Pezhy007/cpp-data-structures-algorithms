#include "Autocomplete.h"

Autocomplete::Autocomplete() : root(new TrieNode()) {}

Autocomplete::~Autocomplete() {
    // TODO: Implement destructor to free allocated memory
}

void Autocomplete::insert(std::string word) {
    TrieNode* current = root;
    for (char c : word) {
        if (current->children.find(c) == current->children.end()) {
            current->children[c] = new TrieNode();
        }
        current = current->children[c];
    }
    current->isEndOfWord = true;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> suggestions;
    TrieNode* node = root;
    
    for (char c : partialWord) {
        if (node->children.find(c) == node->children.end()) {
            return suggestions; // No match found
        }
        node = node->children[c];
    }
    
    collectWords(node, partialWord, suggestions);
    return suggestions;
}

void Autocomplete::collectWords(TrieNode* node, std::string& prefix, std::vector<std::string>& result) {
    if (node->isEndOfWord) {
        result.push_back(prefix);
    }
    
    for (const auto& pair : node->children) {
        prefix.push_back(pair.first);
        collectWords(pair.second, prefix, result);
        prefix.pop_back();
    }
}

