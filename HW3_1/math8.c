#include <stdio.h>
#include <math.h>

int main() {

double R, y, k;

printf("y=");
scanf("%lf", &y);

printf("k=");
scanf("%lf", &k);

R = (sqrt(pow(sin(y), 2) + 6.835)) / (log(y + k) + 3 * pow(y, 2));

printf("\nR=%lf", R);

return 0;

}