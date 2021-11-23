//masala4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int main(){

    int A, D, n;

    printf("Geometrik progressiyaning boshlang'ich hadini kiriting(A): ");
    scanf("%d", &A);

    printf("Geometrik progressiyaning maxrajini kiriting(D): ");
    scanf("%d", &D);

    printf("Geometrik progressiyaning elementlari soni kiriting: ");
    scanf("%d", &n);

    long int natural_toq_sonlar[n];
    natural_toq_sonlar[0] = A;

    for(int i=1; i<n; i++){
        natural_toq_sonlar[i] = natural_toq_sonlar[i-1]*D;
    }

    for(int j=0; j<n; j++) printf("\nGeometrik progressiya elementlari[%d] = %ld", j, natural_toq_sonlar[j]);

    return 0;
}