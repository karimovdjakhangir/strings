#include <stdio.h>
#include <math.h>
#include <stdbool.h>
// #include <stdlib.h>


int main(){

    for(int i=0; i<=10; i++){
        
        printf("%d\n", i);

        if(i==5){
            continue;
        }
    }


    return 0;
}