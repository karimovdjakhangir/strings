#include <stdio.h>
#include <math.h>

int main () {

  double D, a, t;
  
  printf("a=");
  scanf("%lf", &a);
  
  printf("t=");
  scanf("%lf", &t);

  D = 9.8 * pow(a, 2) + 5.52 * cos(pow(t, 5));
  
  printf("\nG=%lf", D);
  
  return 0;
}
