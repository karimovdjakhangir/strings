#include <stdio.h>

int main(){

int a=1, b=5, multi=1;

for (a=1; a<=b; a++)
    {
        multi*=a;        
    }
    printf("%d\n", multi);
    return 0;
}