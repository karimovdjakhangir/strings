#include <stdio.h>
#include <math.h>

int main () {

  double G, n, y;
  
  printf("n=");
  scanf("%lf", &n);
  
  printf("y=");
  scanf("%lf", &y);

  G = n * (y + 3.5) + sqrt(y);
  
  printf("\nG=%lf", G);
  
  return 0;
}
