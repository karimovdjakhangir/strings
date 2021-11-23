#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(){
    
    int sonlar[5];
    printf("Ro'yxatni to'ldiring: \n");

    for(int i = 0; i<=5; i++){
        scanf("%d", &sonlar[i]);
    }

    for(int i = 0; i<=5; i++){
        printf("Sonlar[%d] = %d\n", i, sonlar[i]);
    }

    return 0;
}