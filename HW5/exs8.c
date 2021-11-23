// if 2 of 3 given digits are equal and one of them is 9 then display 1,
//otherwise display 0;
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int son1=3, son2=3, son3=9;
    bool result1, result2, result3;

    result1 = (son1==son2) || (son1==son3) || (son2==son3);
    result2 = (son1==9) || (son2==9) || (son3==9);
    result3 = result1 && result2;

    printf("Natija: %d\n", result3);

    return 0;
}