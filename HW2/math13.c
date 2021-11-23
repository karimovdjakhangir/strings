#include <stdio.h>
#include <math.h>

int main () {

  double E, y;
  
  printf("y=");
  scanf("%lf", &y);

  E = sqrt(fabs(3 * pow(y, 2) + 0.5 * y + 4));
  
  printf("\nE=%lf", E);
  
  return 0;
}