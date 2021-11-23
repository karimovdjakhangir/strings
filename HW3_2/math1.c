#include <stdio.h>
#include <math.h>

int main() {

double L, x, a, e, c;

printf("x=");
scanf("%lf", &x);

printf("a=");
scanf("%lf", &a);

printf("e=");
scanf("%lf", &e);

printf("c=");
scanf("%lf", &c);

L = (sqrt(pow(e, x) - pow(cos(pow(x, 2) * pow(a, 5)), 4)) + pow(atan(a - pow(x, 5)), 4)) / (e * sqrt(fabs(a + x * pow(c , 4))));

printf("\nL=%lf", L);

return 0;
}