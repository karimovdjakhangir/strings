#include <stdio.h>
#include <math.h>

int main() {

double A, y, h;

printf("y=");
scanf("%lf", &y);

printf("h=");
scanf("%lf", &h);

A= (tan(pow(y, 3) - pow(h, 4)) + pow(h, 2)) / (pow(sin(h), 3) +y);

printf("\nA=%lf", A);

return 0;
}