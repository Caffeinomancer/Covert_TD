#include "Coroutine.h"

Coroutine::Coroutine()
{
  mFunctionsToUpdate = new List;
}

Coroutine::~Coroutine()
{
  delete mFunctionsToUpdate;
}


void Coroutine::Update()
{
  mFunctionsToUpdate->CoroutineUpdate();
}

void Coroutine::AddCoroutine(void(*func)())
{
  mFunctionsToUpdate->CreateNode(func);
}

