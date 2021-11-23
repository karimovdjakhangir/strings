#include <stdio.h>
#include <math.h>

int main () {

  double Z, y;
  
  printf("y=");
  scanf("%lf", &y);

  Z = 3*pow(y, 2) + sqrt(pow(y, 3) + 1);
  
  printf("\nZ=%lf", Z);
  
  return 0;
}