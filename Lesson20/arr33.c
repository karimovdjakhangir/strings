// Array33

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<time.h>


int main(){

    int n, oxirgi_maximum_indexi;
    srand(time(0));


    printf("razmer massiva: ");
    scanf(" %d", &n);

    int massiv[n];

    for (int i=0; i<=n; i++){
        massiv[i]=rand()%20;
    } 

    for (int j=0; j<=n; j++){
        printf("\na[%d]= %d", j, massiv[j]);
    }
    printf("\n");

    
    for (int k = n; k > 1; k--){
        if ((massiv[k]<massiv[k-1]) && (massiv[k-1]>massiv[k-2])){
            printf("\nmassiv [%d]=%d", k-1, massiv[k-1]);
            oxirgi_maximum_indexi = k-1;
        }
    }

    printf("\nNatija: %d", oxirgi_maximum_indexi);
    printf("\n\n");
    
    return 0;
}