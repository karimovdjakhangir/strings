#include <stdio.h>
#include <math.h>

int main(){

double n=3, sum=0, i;

for (i=1; i<=n; i++)
    {
        sum+=1/i;        
    }
    printf("%lf\n", sum);
    return 0;
}