#include <stdio.h>
#include <math.h>

int main () {

  double T, y, h;
  
  printf("y=");
  scanf("%lf", &y);

  printf("h=");
  scanf("%lf", &h);
  
  T = exp(y + h) + sqrt(fabs(6.4 * y));
  
  printf("\nT=%lf", T);
  
  return 0;
}