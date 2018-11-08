#include <stdio.h>
#include <stdlib.h>

int main(){
  int m = 2;
  int n = 5;
  double x = 5.6;

  printf("m/n = %d\n", m/n);
  printf("v-int: x/m = %d\n", x/m);
  printf("v-double: x/m = %lf\n", x/m);

  double y = m;
  printf("v-int: y = %d\n", y);
  printf("v-double: y = %lf\n", y);

  int k = x;
  printf("v-int: ");
}
