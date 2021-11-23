//Proc25.
#include <stdio.h>
#include <math.h>

int issquare(int k){
    return k==pow(sqrt(k),2);
}
 
int main(void)
{
    int i,res=0;
    for (i=1; i<=10; ++i){
        int k;
        printf("K:");
        scanf("%i", &k);
        res+=issquare(k);
     }
    printf("Res: %i\n",res);
    return 0;
}