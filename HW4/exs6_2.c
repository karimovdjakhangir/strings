// Kiritilgan ikkita sonning birinchisini ikkinchisiga bo'lgandagi 
//butun qismi va qoldig'ini hisoblaydigan dastur tuzing
#include <stdio.h>
#include <math.h>

int main () {

double Division, num1, num2;

printf("Calculator for division\n");

printf("Input any number=");
scanf("\n%lf", &num1);

printf("Input any number to divide by=");
scanf("\n%lf", &num2);

Division=num1 / num2;

printf("\nDivision=%lf\n", Division);

return 0;

}