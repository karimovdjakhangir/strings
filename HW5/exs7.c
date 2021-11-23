// display 1 if sum of three digits is even and none of them is equal to 3, 
//otherwise display 0;

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int num1=4, num2=7, num3=5;
    bool result1, result, even;

    result1 = !(num1==3) && !(num2==3) && !(num3==3);
    even = !((num1+num2+num3)%2);
    result = result1 && even;

    printf("Result: %d\n", result);
   
    return 0;
}