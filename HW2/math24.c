#include <stdio.h>
#include <math.h>

int main () {

  double F, y;
  
  printf("y=");
  scanf("%lf", &y);

  F = 2 * sin(0.214 * pow(y, 5) + 1);
  
  printf("\nF=%lf", F);
  
  return 0;
}