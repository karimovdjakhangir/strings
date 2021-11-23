// Kiritilgan son musbat bo'lsa 1, manfiy bo'lsa ekranga 0 chiqaradigan dastur tuzing.


#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(){

bool positive=true;
int any_number;

printf("Is a number positive or negative");

    printf("\nInput any number=");
    scanf("%d", &any_number);

positive=(any_number%2)>=0;

printf("%d\n", positive);

return 0;
}