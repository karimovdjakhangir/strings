#include <stdio.h>

int main(){

int kg, price, n;

printf("Enter maximum amount of candies in kg: ");
scanf("%d", &n);

printf("Enter price of 1 kg candies: ");
scanf("%d", &price);

for (kg=1; kg<=n; kg++)
    {
        printf("%dkg= %d soum\n", kg, kg*price);
    }
    return 0;
}