// Kiritilgan ikkita sonning yig'indisi, ayirmasi, ko'paytmasi va bo'linmasini ekranga chiqaradigan dastur tuzing
#include <stdio.h>
#include <math.h>

int main () {

int Addition, num1, num2;

printf("Calculator for addition\n");

printf("Input any number=");
scanf("\n%d", &num1);

printf("Input any number to add=");
scanf("\n%d", &num2);

Addition=num1 + num2;

printf("\nAddition=%d\n", Addition);

return 0;

}