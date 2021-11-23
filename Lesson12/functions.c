#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//type, name and arguments of function

int max (int num1, int num2)
{
if(num1 > num2)
    {
        return num1;
    } else 
        {
            return num2;
        }
}
int min (int num1, int num2)
{
if(num1 < num2)
    {
        return num2;
    } else 
        {
            return num1;
        }
}

int main(){

int result_max, result_min;
result_max = max(1,2);
result_min = min(1,2);

printf("result max: %d\n", result_max);
printf("result min: %d\n", result_min);

    return 0;
}