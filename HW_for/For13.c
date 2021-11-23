#include <stdio.h>
#include <math.h>

int main()
{
    double n = 0, sum = 0, i, x = 5, check;

    for (i = 1.1; i <= x; i += 0.1)
    {
        check= i * pow(-1, n);
        sum += check;
        printf("%lf\n",  check);
        n++;
    }
    
   printf("sum=%lf\n", sum);
    return 0;
}