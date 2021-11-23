#include <stdio.h>
#include <math.h>

int main() {

double G, x, y, z, c;

printf("x=");
scanf("%lf", &x);

printf("y=");
scanf("%lf", &y);

printf("z=");
scanf("%lf", &z);

printf("c=");
scanf("%lf", &c);

G = (tan(pow(x, 4) - 6) - pow(cos(z + x* y), 3)) / (pow(cos(pow(x, 3)), 4) * pow(c, 2));

printf("\nG=%lf", G);

return 0;
}