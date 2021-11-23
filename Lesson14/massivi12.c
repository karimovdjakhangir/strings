//masala2
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    int A, D, n;

    printf("Ikkini darajalari: ");
    scanf("%d", &n);

    long int ikkini_darajalari[n];

    for(int i=0; i<n; i++){
        ikkini_darajalari[i] = pow(2, i);
    }

    for(int j=0; j<n; j++) printf("\nikkini_darajalari[%d] = %ld\n", j, ikkini_darajalari[j]);

    return 0;
}