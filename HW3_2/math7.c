#include <stdio.h>
#include <math.h>

int main() {

double T, x, y, a, b;

printf("x=");
scanf("%lf", &x);

printf("y=");
scanf("%lf", &y);

printf("a=");
scanf("%lf", &a);

printf("b=");
scanf("%lf", &b);

T = (sqrt(x + b - a) + log(y)) / (atan(b+ a));

printf("\nT=%lf", T);

return 0;
}