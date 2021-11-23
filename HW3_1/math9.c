#include <stdio.h>
#include <math.h>

int main() {

double E, y, q;

printf("y=");
scanf("%lf", &y);

printf("q=");
scanf("%lf", &q);

E = (log(0.7 * y + 2 *q)) / (sqrt(3 * pow(y, 2) + 0/5 * y + 4));

printf("\nE=%lf", E);

return 0;

}

