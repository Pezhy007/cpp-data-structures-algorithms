#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit) {
    documents[name] = {id, license_limit};
}

void DocumentManager::addPatron(int patronID) {
    patrons.insert(patronID);
}

int DocumentManager::search(std::string name) {
    if (documents.find(name) != documents.end()) {
        return documents[name].first;
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {
    if (patrons.find(patronID) == patrons.end()) {
        return false;
    }

    for (const auto& doc : documents) {
        if (doc.second.first == docid) {
            int license_limit = doc.second.second;
            if (borrowed_docs[docid].size() < license_limit) {
                borrowed_docs[docid].insert(patronID);
                return true;
            }
            return false;
        }
    }
    return false;
}

void DocumentManager::returnDocument(int docid, int patronID) {
    if (borrowed_docs.find(docid) != borrowed_docs.end() &&
        borrowed_docs[docid].find(patronID) != borrowed_docs[docid].end()) {
        borrowed_docs[docid].erase(patronID);
    }
}
