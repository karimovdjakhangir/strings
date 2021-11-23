#include <stdio.h>
#include <math.h>

int main() {

double U, k, y;

printf("k=");
scanf("%lf", &k);

printf("y=");
scanf("%lf", &y);

U=(log(k - y) + pow(y, 4)) / (exp(y) + (2.355 * pow(k, 2)));

printf("\nU=%lf", U);

    return 0;
}