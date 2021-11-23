#include <stdio.h>
#include <math.h>

int main () {

  double W, v, x, y;
  
  printf("v=");
  scanf("%lf", &v);

  printf("x=");
  scanf("%lf", &x);
  
  printf("y=");
  scanf("%lf", &y);

  W = 1.03 * v + exp(2*y) + tan(fabs(x));
  
  printf("\nW=%lf", W);
  
  return 0;
}