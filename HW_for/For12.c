#include <stdio.h>
#include <math.h>

int main(){

double n=1, sum=1, i, x=2;

for (i=1.1; i<=x; i+=0.1)
    {
        sum*=i;        
    }
    printf("%lf\n", sum);
    return 0;
}