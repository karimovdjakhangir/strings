#include <stdio.h>
#include <math.h>

int main() {

double K, t, l, y;

printf("t=");
scanf("%lf", &t);

printf("l=");
scanf("%lf", &l);

printf("y=");
scanf("%lf", &y);

K = (2 * pow(t, 2) + 3 * l + 7.2) / (log (y + exp(2 * t)));

printf("\nK=%lf", K);

return 0;



}