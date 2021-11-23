#include <stdio.h>
#include <math.h>

int main () {

  double P, y, h;
  
  printf("y=");
  scanf("%lf", &y);

  printf("h=");
  scanf("%lf", &h);

  P = exp(y + 5.5) + 9.1 * pow(h, 3);
  
  printf("\nP=%lf", P);
  
  return 0;
}