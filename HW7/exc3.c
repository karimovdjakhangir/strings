#include <stdio.h>
#include <math.h>

int main(){

int num;

printf("Enter any number: ");
scanf("%d", &num);

if(num<0)
{
    printf("result = %d\n", num-2);
}

    else
    {
        if(num>0)
        printf("result = Your number is positive\n");

        else
        {
            printf("result = %d\n", num+10);
        }
    }

    return 0;
}