#include <stdio.h>
#include <math.h>

//array41
int main(void)
{
    int a[10];
    int n;
 
    printf("N: ");
    scanf("%i",&n);
 
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
 
    int summax = a[0]+a[1], k=1;
    
    for (i=2;i<n;++i){
        if ((a[i-1]+a[i])>summax){
            summax = a[i-1]+a[i];
            k = i;
        }
    }
    printf("%i %i\n",a[k-1],a[k]);
    return 0;
}