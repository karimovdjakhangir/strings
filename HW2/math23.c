#include <stdio.h>
#include <math.h>

int main () {

  double G, y, f;
  
  printf("y=");
  scanf("%lf", &y);

  printf("f=");
  scanf("%lf", &f);

  G = exp(2 * y) + sin(f);
  
  printf("\nG=%lf", G);
  
  return 0;
}