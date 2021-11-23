// Kiritilgan ikkita sonning birinchisini ikkinchisiga bo'lgandagi 
//butun qismi va qoldig'ini hisoblaydigan dastur tuzing
#include <stdio.h>
#include <math.h>

int main () {

int Division, num1, num2;

printf("Calculator for division\n");

printf("Input any number=");
scanf("\n%d", &num1);

printf("Input any number to divide by=");
scanf("\n%d", &num2);

Division=num1 % num2;

printf("\nRemainder=%d\n", Division);

return 0;

}