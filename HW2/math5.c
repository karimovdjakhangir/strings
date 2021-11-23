#include <stdio.h>
#include <math.h>

int main () {

  double L, x;
  
  printf("x=");
  scanf("%lf", &x);
  
  L = 1.51 * cos(pow(x, 2)) + 2 * pow(x, 3);
  
  printf("\nL=%lf", L);
  
  return 0;
}
