//a program in C to read 10 numbers from keyboard
// and find their sum and average.

#include <stdio.h>

int main(){

int i, num, sum=0;
float avg;

printf("Enter 10 numbers: \n");
for(i=1; i<=10; i++){
    printf("Number %d: ", i);
    scanf("%lf", &num);
    sum +=num;
}
avg = sum / 10.0;
printf("\nThe sum is: %d\nThe average is: %lf\n", sum, avg);
    return 0;
}
