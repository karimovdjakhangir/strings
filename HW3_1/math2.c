#include <stdio.h>;
#include <math.h>;

int main() {

double F, d, y;

printf("d=");
scanf("%lf", &d);

printf("y=");
scanf("%lf", &y);

F=log(d) + ((3.5 * pow(d, 2) + 1) /  (cos(2 * y)));

printf("\nF=%lf", F);

    return 0;
}