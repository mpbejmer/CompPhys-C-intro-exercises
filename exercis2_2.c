#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "fun_scalar_prod.h"

int main(){
  int len;
  printf("Enter length of array(integer): ");
  scanf("%d", &len);
  printf("Entered int: %d\n", len);

  int *arr1 = (int*) malloc(sizeof(int)*len);
  int *arr2 = (int*) malloc(sizeof(int)*len);

  for(size_t ix=0; ix<len; ix++){
    arr1[ix] = ix;
    arr2[ix] = ix*2;
  }

  for(size_t ix=0; ix<len; ix++){
    printf("%d, ", arr1[ix]);
  }
  printf("\n");
  for(size_t ix=0; ix<len; ix++){
    printf("%d, ", arr2[ix]);
  }
  printf("\n");

  long int s_prod;
  s_prod = scalar_prod(arr1, arr2, len);

  printf("Scalar prod is: %li\n", s_prod);

}
