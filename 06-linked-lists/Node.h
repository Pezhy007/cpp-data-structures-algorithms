#ifndef NODE_H
#define NODE_H

class Node {
private:
    int data;
    Node* link;

public:
    Node(int value);
    int getData() const;
    Node* getLink() const;
    void setData(int value);
    void setLink(Node* next);
};

#endif // NODE_H