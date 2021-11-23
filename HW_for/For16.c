#include <stdio.h>
#include <math.h>

int main()
{
    double A=2, N=5, i, res;
    for (i=1; i<=N; i++)
    {
        res=pow(A, i);
        printf("%lf\n", res);
    } 
    
    return 0;
}