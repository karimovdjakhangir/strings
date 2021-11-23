#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

    bool positive;
    int digit=0, input_number;

    printf("Is a number positive or negative?");

    printf("\nInput any number=");
    scanf("%d", &input_number);

    positive = digit<input_number;
    
    if(positive)
    {
        printf("\nThe number is positive");
    }
    else
    {
        printf("\nThe number is negative");
        }
       
    
    printf("\n");
    return 0;
}

