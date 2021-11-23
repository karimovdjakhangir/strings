#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void MEAN(double num1, double num2){
    printf("%.0lf, %.0lf", num1, num2);
    printf("\nArithmetic mean = %.0lf\n", (num1+num2)/2);
    }
int main(){

    double num1=2, num2=3;
    MEAN(num1,num2);
    
    return 0;
}

//sqrt(num1*num2)
//printf("Geometric mean=%d, %d\n", MEAN(B));