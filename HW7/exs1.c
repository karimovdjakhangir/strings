#include <stdio.h>
#include <math.h>

int main(){

int num;

printf("Enter any number: ");
scanf("%d", &num);

if(num>0)
{
    num++;
    printf("result = %d\n", num);
}

    else
    {
        if(num<0)
        printf("result = %d\n", num);

        else
        {
            printf("Your number equal to zero\n");
        }
    }

    return 0;
}