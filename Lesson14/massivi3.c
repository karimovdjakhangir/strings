#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(){

    int sonlar[] = { 1, 2, 4, 5, 8, 11, 43, 77, 9 };

    sonlar[0] = 5;
    
    // sonlar[4] = 8
    // sonlar[sonlar[4]] = 9
    // sonlar[8] = 9

    printf("Birinchi element: %d\n", sonlar[sonlar[4]]);

    return 0;
}