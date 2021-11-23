#include <stdio.h>
#include <math.h>

int main()
{
    double A=2, end=5, i, mult=1;
    for(i=1; i<=end; i++)
    {
        mult*=A;
    }
    printf("A^N=%lf\n", mult);
    return 0;
}