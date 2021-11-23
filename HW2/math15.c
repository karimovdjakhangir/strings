#include <stdio.h>
#include <math.h>

int main () {

  double H, y;
  
  printf("y=");
  scanf("%lf", &y);

  H = sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y));
  
  printf("\nH=%lf", H);
  
  return 0;
}