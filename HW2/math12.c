#include <stdio.h>
#include <math.h>

int main () {

  double K, t, x;
  
  printf("t=");
  scanf("%lf", &t);

  printf("x=");
  scanf("%lf", &x);

  K = 7 * pow(t, 2) + 3* sin(pow(x, 3) +9.2);
  
  printf("\nK=%lf", K);
  
  return 0;
}