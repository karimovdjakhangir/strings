#include <stdio.h>

int main(){

double gr, price, n;

printf("Enter maximum amount of candies in kg: ");
scanf("%lf", &n);

printf("Enter price of 1 kg candies: ");
scanf("%lf", &price);

for (gr=1.2; gr<=n; gr+=0.2)
    {
        printf("%0.1lfkg= %0.1lf soum\n", gr, gr*price);
    }
    return 0;
}