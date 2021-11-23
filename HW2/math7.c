#include <stdio.h>
#include <math.h>

int main () {

  double N, m;
  
  printf("m=");
  scanf("%lf", &m);

  N = pow(m, 2) +2.8*fabs(m) + 0.55;
  
  printf("\nN=%lf", N);
  
  return 0;
}