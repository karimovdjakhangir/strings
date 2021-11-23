#include <stdio.h>
#include <math.h>

int main () {

  double W, y, r;
  
  printf("y=");
  scanf("%lf", &y);

  printf("r=");
  scanf("%lf", &r);
  
  W = exp(y + r) + 7.2 * sin(r);
  
  printf("\nW=%lf", W);
  
  return 0;
}