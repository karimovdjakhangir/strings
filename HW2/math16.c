#include <stdio.h>
#include <math.h>

int main () {

  double S, y;
  
  printf("y=");
  scanf("%lf", &y);

  S = sqrt(cos(4 * pow(y, 2)) + 7.151);
  
  printf("\nS=%lf", S);
  
  return 0;
}