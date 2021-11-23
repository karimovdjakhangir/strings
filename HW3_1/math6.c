#include <stdio.h>
#include <math.h>

int main () {

double W, t, r, y;

printf("t=");
scanf("%lf", &t);

printf("r=");
scanf("%lf", &r);

printf("y=");
scanf("%lf", &y);

W = (4 * pow(t, 3) + log(r)) / (exp(y + r) +7.2 * sin(r));

printf("\nW=%lf", W);

return 0;

}