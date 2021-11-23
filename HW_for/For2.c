#include <stdio.h>

int main(){

int a, b, counter;

printf("b: ");
scanf("%d", &b);

for (a=1; a<=b; a++)
    {
        printf("%d\n", a);
        counter++;
    }
    printf("n=%d:\n", counter);
    return 0;
}