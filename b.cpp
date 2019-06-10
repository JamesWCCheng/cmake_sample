
#include "b.h"
#include "s1.h"

namespace B{
int& get()
{
  return S::get();
}
}
