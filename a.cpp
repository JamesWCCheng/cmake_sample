

#include "a.h"
#include "s.h"

namespace A{
int& get()
{
  return S::get();
}
}
