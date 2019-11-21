#include "LinkedList.h"

void List::CreateNode(void (*value)())
{
  Node* temp = new Node;
  temp->data = value;
  temp->next = nullptr;
  if (mHead == nullptr)
  {
    mHead = temp;
    mTail = temp;
    temp = nullptr;
  }
  else
  {
    mTail->next = temp;
    mTail = temp;
  }
}

void List::CoroutineUpdate()
{
  Node *temp = new Node;
  temp = mHead;
  while (temp != nullptr)
  {
    void (*update)() = temp->data;
    update();

    temp = temp->next;
  }
}