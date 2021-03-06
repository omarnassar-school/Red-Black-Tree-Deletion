#include <iostream>
#include "node.h"

using namespace std;

Node::Node() {
  parent = NULL;
  left = NULL;
  right = NULL;
  sibling = NULL;
  color = true;
}

Node::~Node() {
  delete &value;
  parent = NULL;
  left = NULL;
  right = NULL;
  sibling = NULL;
}

//Getters

Node* Node::getParent() {
  return parent;
}

Node* Node::getLeft() {
  return left;
}

Node* Node::getRight() {
  return right;
}

int Node::getValue() {
  return value;
}

Node* Node::getSibling() {
  return sibling;
}

bool Node::getColor() {
  return color;
}

//Setters

void Node::setParent(Node* inParent) {
  parent = inParent;
}

void Node::setLeft(Node* inLeft) {
  left = inLeft;
}

void Node::setRight(Node* inRight) {
  right = inRight;
}

void Node::setValue(int inValue) {
  value = inValue;
}

void Node::setSibling(Node* inSibling) {
  sibling = inSibling;
}

void Node::setColor(bool inColor) {
  color = inColor;
}
