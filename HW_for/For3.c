#include <stdio.h>

int main(){

int a, b, counter;

printf("a: ");
scanf("%d", &a);

printf("b: ");
scanf("%d", &b);

for (a=a-1; a>b; a--)
    {
        printf("%d\n", a);
        counter++;
    }
    printf("n=%d:\n", counter);
    return 0;
}