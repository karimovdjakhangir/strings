#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    srand(time(0));

    int sonlar[5];

    for(int i = 0; i<=5; i++){
        sonlar[i] = rand()%20;
    }

    for(int i = 0; i<=5; i++){
        printf("Sonlar[%d] = %d\n", i, sonlar[i]);
    }

    return 0;
}