#include <stdio.h>
#include <math.h>
// only accepts 2 comparibles
int main (){
int a;
a = fmin(fmin(5, 6), fmin(4, 9));
printf("%d\n", a);

    return 0;
}