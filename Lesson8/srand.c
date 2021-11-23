#include <stdio.h>
#include <stdlib.h>

// generates different random numbers each time

int main ()
{
    srand(time(0));
    for(int i=0; i<5; i++)
    {
        printf("%d\n", rand()%100); // range is till 100
    }

    return 0;
}
