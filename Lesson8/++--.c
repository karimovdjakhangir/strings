#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int limit = 10, result;

    int first=0, second=0, variable1=10, variable2=10;
    
    first = variable1++; // 10, +1
    second=++variable2;  // 11

    printf("first: %d\n", first);
    printf("second: %d\n", second);
    
    printf("variable1: %d\n", variable1);
    printf("variable2: %d\n", variable2);
    
    return 0;
}
