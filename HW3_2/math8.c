#include <stdio.h>
#include <math.h>

int main() {

double S, y, t;

printf("y=");
scanf("%lf", &y);

printf("t=");
scanf("%lf", &t);

S = (4.351 * pow(y, 3) + 2 * t * log(t)) / (sqrt(cos(2 * y) + 4.351));

printf("\nS=%lf", S);

return 0;
}