#include <stdio.h>
#include <math.h>

int main() {

double H, y, n;

printf("y=");
scanf("%lf", &y);

printf("n=");
scanf("%lf", &n);

H = (pow(y, 2) - 0.8 * y + sqrt(y)) / (23.1 * pow(n, 2) + cos(n));

printf("\nH=%lf", H);

return 0;

}