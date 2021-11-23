#include <stdio.h>
#include <math.h>

int main() {

double P, x, y, t, e;

printf("x=");
scanf("%lf", &x);

printf("y=");
scanf("%lf", &y);

printf("t=");
scanf("%lf", &t);

printf("e=");
scanf("%lf", &e);

P = (pow(sin(x), 3) + log(2 +y +3 * x)) / (pow(t, e) + sqrt(x)); 

printf("\nP=%lf", P);

return 0;
}