#pragma once

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

  void CoroutineUpdate();

private:
  Node *mHead, *mTail;
  unsigned int mSize;
};

