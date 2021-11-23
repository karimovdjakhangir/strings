#include <stdio.h>
#include <math.h>

int main() {

double U1, U2, U, x, y, a, b, c;

printf("x=");
scanf("%lf", &x);

printf("y=");
scanf("%lf", &y);

printf("a=");
scanf("%lf", &a);

printf("b=");
scanf("%lf", &b);

printf("c=");
scanf("%lf", &c);

U1 = pow(tan(y),3) + pow(sin(x), 5) * sqrt(b - c); 
U2 = sqrt(a - b + c);

U = U1 / U2;

printf("\nU=%lf", U);

return 0;
}