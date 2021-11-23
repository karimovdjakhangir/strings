// Kiritilgan son toq bo'lsa 1, juft bo'lsa ekranga 0 chiqaradigan dastur tuzing
//even or odd

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

bool even=true;
int any_number;

printf("Is a number even or odd");

    printf("\nInput any number=");
    scanf("%d", &any_number);

even=(any_number%2);

printf("%d\n", even);

return 0;
}