#include <stdio.h>
#include <math.h>

int main () {

double G, w, y;

printf("w=");
scanf("%lf", &w);

printf("y=");
scanf("%lf", &y);

G= (9.33 * pow(w, 3) + sqrt(w)) / (log(y+3.5 + sqrt(y));

printf("\nG=%lf", G);

return 0;
}