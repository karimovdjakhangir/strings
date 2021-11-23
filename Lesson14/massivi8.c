#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    srand(time(0));

    int sonlar[5];
    bool yoqmi = false;

    for(int i = 0; i<=5; i++){
        sonlar[i] = rand()%20;
        printf("%d ", sonlar[i]);
    }
    
    for(int j=0; j<=5; j++){
        if(sonlar[j]==10){
            printf("\nIndex = %d", j);
            yoqmi = true;
        }
    }
    
    if(!yoqmi){
        printf("\n\nIzlanayotgan son mavjud emas.");
    } 

    printf("\n");

    return 0;
}