#include <stdio.h>
#include <math.h>

int main () {

  double R, x, y;
  
  printf("x=");
  scanf("%lf", &x);

  printf("y=");
  scanf("%lf", &y);

  R = fabs(sqrt(pow(sin(y), 2) + 6.835) + exp(x));
  
  printf("\nR=%lf", R);
  
  return 0;
}