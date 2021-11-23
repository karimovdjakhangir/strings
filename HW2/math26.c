#include <stdio.h>
#include <math.h>

int main () {

  double Z, p;
  
  printf("p=");
  scanf("%lf", &p);

  Z = sin(pow(pow(p, 2) + 0.4, 3));
  
  printf("\nZ=%lf", Z);
  
  return 0;
}