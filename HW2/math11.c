#include <stdio.h>
#include <math.h>

int main () {

  double S, x, y;
  
  printf("x=");
  scanf("%lf", &x);

  printf("y=");
  scanf("%lf", &y);

  S = 9.756 * pow(y, 7) + 2 * tan(x);
  
  printf("\nS=%lf", S);
  
  return 0;
}