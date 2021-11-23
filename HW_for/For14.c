#include <stdio.h>
#include <math.h>

int main()
{
    double n, sum = 0, i, x = 5;

    for (i = 1; i <= x; i += 2)
    {
        printf("%lf\n", pow(i, 2));
        sum += pow(i, 2);
    }
    
   printf("Total=%lf\n", sum);
    return 0;
}