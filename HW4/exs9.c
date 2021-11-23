/*Kiritilgan ikkita sondan qaysi biri katta bo'lsa shu sondan keyin 1 
aks holda 0 ni ekranga chiqaradigan dastur tuzing.*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main () {

bool Greater;
int num1, num2;

printf("Greater followed by 1, otherwise by 0\n");

printf("Input any number=");
scanf("\n%d", &num1);

printf("Input any number to compare=");
scanf("\n%d", &num2);

Greater=(num1>num2);

if(Greater)
{
    printf("\n=%d.1\n", num1);
}
else
{
    if((num1<num2)){
        printf("\n=%d.0\n", num2);
    }
    
}
return 0;

}