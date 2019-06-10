#include "a.h"
#include "b.h"

#include <stdio.h>

int main()
{
  printf("%p\n%p\n", &A::get(), &B::get());
}
