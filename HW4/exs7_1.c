/*Kiritilgan ikkita son ikkalasi teng bo'lsa 0 aks holda 1 ni 
ekranga chiqaradigan dastur tuzing*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

bool Equal;
int num1, num2;

printf("Are numbers equal?\n");

printf("Input any number=");
scanf("\n%d", &num1);

printf("Input any number to compare=");
scanf("\n%d", &num2);

Equal=!(num1==num2);

printf("%d\n", Equal);

return 0;
}