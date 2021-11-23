#include <stdio.h>
#include <math.h>

int main () {

  double P, n, y, g;
  
  printf("n=");
  scanf("%lf", &n);

  printf("y=");
  scanf("%lf", &y);

  printf("g=");
  scanf("%lf", &g);

  P = n * sqrt(pow(y, 3) + 1.09 * g);
  
  printf("\nP=%lf", P);
  
  return 0;
}