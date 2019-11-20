#pragma once

#include <iostream>

struct Node
{
  void (*data)();
  Node* next;
};

class List
{
public:
  List() { mHead = nullptr, mTail = nullptr; };

  void CreateNode(void (*value)());

  void test();

private:
  Node *mHead, *mTail;
  unsigned int mSize;
};

