#include <stdio.h>
#include <math.h>

int main(){

int a=1, b=5, sq=0;

for (a=1; a<=b; a++)
    {
        sq+=pow(a, 2);        
    }
    printf("%d\n", sq);
    return 0;
}