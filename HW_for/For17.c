#include <stdio.h>
#include <math.h>

int main()
{
    double A = 2, N = 3, i, sum = 0;
    for (i = 0; i <= N; i++)
    {
        sum += pow(A, i);
        printf("%lf\n", pow(A, i));
    }
    printf("sum = %lf\n", sum);
    return 0;
}