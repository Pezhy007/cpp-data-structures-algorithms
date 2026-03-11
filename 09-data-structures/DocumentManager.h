#ifndef DOCUMENT_MANAGER_H
#define DOCUMENT_MANAGER_H

#include <unordered_map>
#include <unordered_set>
#include <string>

class DocumentManager {
private:
    std::unordered_map<std::string, std::pair<int, int>> documents;
    std::unordered_set<int> patrons;
    std::unordered_map<int, std::unordered_set<int>> borrowed_docs;

public:
    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name);
    bool borrowDocument(int docid, int patronID);
    void returnDocument(int docid, int patronID);
};

#endif 

