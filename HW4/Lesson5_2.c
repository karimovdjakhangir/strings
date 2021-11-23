#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(){

    bool greater;
    int digit=7, input_number;

    printf("Is a number greater or smaller than seven");

    printf("\nInput any number=");
    scanf("%d", &input_number);

    greater = digit<input_number;

    if(greater)
    {
        printf("\nThe number is greater than seven");
    }
    else 
    {
        if(digit==input_number){
            printf("\nThe number is equal to seven");
        }
        else
        {
            printf("\n The number is smaller than seven");
        }
    }
    
    printf("\n");
    return 0;
}