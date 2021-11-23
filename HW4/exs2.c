//Kiritilgan sonning kvadratini ekranga chiqaradigan dastur tuzing.

#include <stdio.h>
#include <math.h>

int main(){
int number, Enter_any_number;

printf("Enter any number=");
scanf("%d", &Enter_any_number);

number = pow(Enter_any_number, 2);

printf("\nNumber=%d\n", number);
return 0;

}