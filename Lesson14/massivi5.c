#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){

    int sonlar[5];

    for(int i = 0; i<=5; i++){
        sonlar[i] = i + 32;
        printf("Sonlar[%d] = %d\n", i, sonlar[i]);
    }

    return 0;
}