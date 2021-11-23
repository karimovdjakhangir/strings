/*Kiritilgan ikkita sonning yig'indisi 0 ga teng bo'lsa 1, 
aks holda 0 ni ekranga chiqaradigan dastur tuzing*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

bool Zero;
int num1, num2;

printf("Are added numbers equal to zero?\n");

printf("Input any number=");
scanf("\n%d", &num1);

printf("Input any number to add=");
scanf("\n%d", &num2);

Zero=(num1+num2)==0;

printf("%d\n", Zero);

return 0;
}