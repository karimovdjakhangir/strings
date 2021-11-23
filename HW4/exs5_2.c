// Kiritilgan ikkita sonning yig'indisi, ayirmasi, ko'paytmasi va bo'linmasini ekranga chiqaradigan dastur tuzing
#include <stdio.h>
#include <math.h>

int main () {

int Deduction, num1, num2;

printf("Calculator for deduction\n");

printf("Input any number=");
scanf("\n%d", &num1);

printf("Input any number to deduct=");
scanf("\n%d", &num2);

Deduction=num1 - num2;

printf("\nDeduction=%d\n", Deduction);

return 0;

}