#include <stdio.h>
#include <stdlib.h>

// generates same random numbers

int main ()
{
    for(int i=0; i<5; i++)
    {
        printf("%d\n", rand()%100); // range is till 100
    }

    return 0;
}
