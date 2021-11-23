#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>


int main(){

    int son;
    srand(time(0));
    double haqiqiy, summasi=1;

    printf("Nechta son ");
    scanf("%d", &son);

    for(int i=1; i<=son; i++){

        scanf("%lf", &haqiqiy);
        // haqiqiy = rand()%10;
        // printf("%lf ", haqiqiy);
        summasi *= haqiqiy;

    }

    printf("\n\nNatija: %lf", summasi);

    return 0;
}