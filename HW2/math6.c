#include <stdio.h>
#include <math.h>

int main () {

  double M, x, y;
  
  printf("x=");
  scanf("%lf", &x);

  printf("y=");
  scanf("%lf", &y);

  M = cos(2*y) + 3.6 * exp(x);
  
  printf("\nM=%lf", M);
  
  return 0;
}
