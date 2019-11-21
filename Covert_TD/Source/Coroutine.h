#pragma once

#include <map>
#include <string>
#include "../Source/LinkedList.h"


using namespace std;

class Coroutine
{
public:
  Coroutine();
  ~Coroutine();

  void Update();

  void AddCoroutine(void(*func)());

private:

  List* mFunctionsToUpdate;
  std::map<string, void*> mFunctionsRefs;
  std::map<string, string> mFunctionsNames;
};