// Kiritilgan ikkita sonning yig'indisi, ayirmasi, ko'paytmasi va bo'linmasini ekranga chiqaradigan dastur tuzing
#include <stdio.h>
#include <math.h>

int main () {

int Multiplication, num1, num2;

printf("Calculator for multiplication\n");

printf("Input any number=");
scanf("\n%d", &num1);

printf("Input any number to multiply by=");
scanf("\n%d", &num2);

Multiplication=num1 * num2;

printf("\nMultiplication=%d\n", Multiplication);

return 0;

}