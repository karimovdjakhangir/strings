// Kiritilgan ikkita sonning yig'indisi, ayirmasi, ko'paytmasi va bo'linmasini ekranga chiqaradigan dastur tuzing
#include <stdio.h>
#include <math.h>

int main () {

int Division, num1, num2;

printf("Calculator for division\n");

printf("Input any number=");
scanf("\n%d", &num1);

printf("Input any number to divide by=");
scanf("\n%d", &num2);

Division=num1 / num2;

printf("\nDivision=%d\n", Division);

return 0;

}