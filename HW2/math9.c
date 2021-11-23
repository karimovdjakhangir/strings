#include <stdio.h>
#include <math.h>

int main () {

  double V, x, y;
  
  printf("x=");
  scanf("%lf", &x);

  printf("y=");
  scanf("%lf", &y);

  V = log(y+0.95) + sin(pow(x, 4));
  
  printf("\nV=%lf", V);
  
  return 0;
}