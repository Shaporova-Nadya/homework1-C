#include "sorting.h"
#include <stdio.h>
#include <stdlib.h>

int CompareFunc(const void *a, const void *b) 
{
  int ia = *((int *)a);
  int ib = *((int *)b);
  if (ia < ib)
  {
    return -1;
  }
  if (ia > ib)
  {
    return 1;
  }
  return 0;
}
