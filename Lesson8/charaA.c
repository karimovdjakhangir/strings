#include <stdio.h>
#include <stdbool.h>

int main ()
{
    char letter1 = 'a', letter2='A';
    bool test;

    test=letter1>letter2;

    printf("%d\n", test); 
    printf("Letter1 %c\n", letter1);
    printf("Letter2 %c\n", letter2);

    
    return 0;
}
