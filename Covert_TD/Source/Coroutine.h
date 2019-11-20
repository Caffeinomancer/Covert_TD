#pragma once

#include <map>
#include <string>

using namespace std;

class Coroutine
{
public:
  Coroutine();
  ~Coroutine();




private:

  void Update();

  std::map<string, void*> mFunctions;
  std::map<string, string> mFunctionsToUpdate;
};