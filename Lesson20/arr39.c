// Array39
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


int main(){

    int massiv[] = {1, 2, 3, 5, 5, 6, 7, 8};
    int massiv_olchami = sizeof(massiv)/sizeof(massiv[0]), soni=0;

    for(int i=0; i<massiv_olchami-1; i++){
        if(massiv[i]==massiv[i+1]) continue;
        soni++;
    }


    printf("Oraliqlar soni: %d\n", soni);

    return 0;
}