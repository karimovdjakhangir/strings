//exersise 046 ALGO

#include <stdio.h>
#include <math.h>

int main(){

double x, y;

printf("a=");
scanf("%lf", &x);


if(x<=-1){
    y=-(1/(x*x));
}else{
    if(x>-1 && x<=2){
        y=x*x;
    }else{
    y=x;
            }
}
printf("result: %lf\n", y);
    return 0;
}