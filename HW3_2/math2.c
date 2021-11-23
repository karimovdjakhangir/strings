#include <stdio.h>
#include <math.h>

int main() {

double L, c, x, t;

printf("c=");
scanf("%lf", &c);

printf("x=");
scanf("%lf", &x);

printf("t=");
scanf("%lf", &t);

L = (c* pow(tan(c), 2)) + ((2 * pow(x, 2) +5) / (sqrt(c + t)));

printf("\nL=%lf", L);

return 0;
}