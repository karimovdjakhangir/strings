#include <stdio.h>
#include <math.h>

int main() {

double F, x, y;

printf("x=");
scanf("%lf", &x);

printf("y=");
scanf("%lf", &y);

F = (sqrt(pow((2 + y), 2) + (7 * sqrt(sin(y + 5))))) / (log(x + 1) - pow(y, 3));

printf("\nF=%lf", F);

return 0;
}