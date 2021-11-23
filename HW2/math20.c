#include <stdio.h>
#include <math.h>

int main () {

  double U, k, x, y;
  
  printf("k=");
  scanf("%lf", &k);

  printf("x=");
  scanf("%lf", &x);
  
  printf("y=");
  scanf("%lf", &y);

  U = exp(k + y) + tan(x * sqrt(y));
  
  printf("\nU=%lf", U);
  
  return 0;
}