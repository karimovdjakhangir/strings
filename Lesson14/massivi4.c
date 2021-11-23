#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){

    int sonlar[] = { 1, 2, 4, 5, 8, 11, 43, 77, 9 };

    sonlar[0] = 5;
    sonlar[4] = 213;

    for(int i = 0; i<=8; i++){

        printf("Sonlar[%d] = %d\n", i, sonlar[i]);

    }

    return 0;
}