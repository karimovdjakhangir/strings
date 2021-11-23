#include <stdio.h>
#include <math.h>

int main () {

  double U, e, k, x, y;
  
  printf("e=");
  scanf("%lf", &e);

  printf("k=");
  scanf("%lf", &k);

  printf("x=");
  scanf("%lf", &x);

  printf("y=");
  scanf("%lf", &y);

  U = pow(e, y) + 7.355 * pow(k, 2) + pow(sin(x), 2);
  
  printf("\nU=%lf", U);
  
  return 0;
}