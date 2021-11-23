#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int limit = 10, result;

    for(int num1; num1<=limit; num1++)
    { 
        for(int num2=1; num2<=10; num2++)
        {
                result = num1 * num2;
                printf("%d *", num1);
                printf("%d=", num2);
                printf("%d\n", result);
        }
                printf("\n\n");
    }
    return 0;
}
