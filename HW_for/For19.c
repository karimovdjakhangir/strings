#include <stdio.h>
#include <math.h>

int main()
{
    int N = 3, i, res;
    for (i = 1; i <= N; i-+)
    {
        res=(i-1)*i;
    }
    printf("sum = %d\n", res);
    return 0;
}