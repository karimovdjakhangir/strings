//a C program to find the sum of first 10 natural numbers.

#include <stdio.h>

int main(){

int i, result=0;
printf("The first 10 natural numbers are: \n");

for(i=1; i<=10; i++){
    result=result+i;
    printf("%d ", i);
}
printf("\nThe sum is: %d\n", result);
    return 0;
}
