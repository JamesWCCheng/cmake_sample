
#include "s1.h"
#include <stdio.h>

namespace
{
  static int k = 0;

}
namespace S{
int& get()
{
  //static int i = 0;

  //return i;
  printf("S1\n");

  return k;
}
}
