#include <stdio.h>
#include <math.h>

int main() {

double D, a, t, y;

printf("a=");
scanf("%lf", &a);

printf("t=");
scanf("%lf", &a);

printf("y=");
scanf("%lf", &y);

D = (7.8 * pow(a, 2) + 3.5 * t) / (log(a + 2* y) + exp(y));

printf("\nD=%lf", D);

return 0;

}