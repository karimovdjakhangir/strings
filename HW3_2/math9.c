#include <stdio.h>
#include <math.h>

int main() {

double D, K, a, b, r, x, y;

printf("K=");
scanf("%lf", &K);

printf("a=");
scanf("%lf", &a);

printf("b=");
scanf("%lf", &b);

printf("r=");
scanf("%lf", &r);

printf("x=");
scanf("%lf", &x);

printf("y=");
scanf("%lf", &y);

D = (pow(K, -a*r*x) - a* sqrt(6) - cos(3 * a * b)) / (pow(sin(a * asin(x) +log(y)), 2));

printf("\nD=%lf", D);

return 0;
}