// if each given number is greater than previous then add 1
// to the summary of these digits, otherwise substruct 1;

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int num1=4, num2=3, num3=2, sum;
    bool result;

    result = (num1>num2) && (num2>num3);
    sum = num1 + num2 + num3;
    printf("%d", sum);


    if(result)
    {
        sum++;
        printf("\n=%d\n", sum);
    }
    else
    {
        sum--;
        printf("\n=%d\n", sum);
    }

return 0;
}