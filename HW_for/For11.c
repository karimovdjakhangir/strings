#include <stdio.h>
#include <math.h>

int main(){

double n=2, sum=0, i, x=3;

for (i=0; i<=x; i++)
    {
        sum+=pow(n+i, 2);        
    }
    printf("%lf\n", sum);
    return 0;
}