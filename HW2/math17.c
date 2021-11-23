#include <stdio.h>
#include <math.h>

int main () {

  double N, y;
  
  printf("y=");
  scanf("%lf", &y);

  N = 3*pow(y, 2) + sqrt(y + 1);
  
  printf("\nN=%lf", N);
  
  return 0;
}