#include <stdio.h>
#include <stdlib.h>

// generates different random numbers each time

int main ()
{
    srand(time(0));
    for(int i=0; i<8; i++)
    {
        printf("%d\n", rand()%31+1); // +1 to avoid null result
    }

    return 0;
}
