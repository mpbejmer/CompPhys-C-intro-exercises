#include "fun_scalar_prod.h"

long int scalar_prod(int *a, int *b, int length){

  long int prod = 0;
  for(int ix=0; ix<length; ix++){
    prod += a[ix] * b[ix];
  }

  return prod;
}
