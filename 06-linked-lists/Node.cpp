#include "Node.h"

Node::Node(int value) : data(value), link(nullptr) {}

int Node::getData() const {
    return data;
}

Node* Node::getLink() const {
    return link;
}

void Node::setData(int value) {
    data = value;
}

void Node::setLink(Node* next) {
    link = next;
}