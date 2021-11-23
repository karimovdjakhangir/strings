#include <stdio.h>

//if input integer greaster than 2, then display that it is greater than 2, 
// otherwise display that it is lesser than 2.

int main(){
    int num;

    printf("Enter any integer = ");
    scanf("%d", &num);

    if(num > 2){
        printf("Your number is greater than two\n");
    } 
        if(num==2)
        {
            printf("Your number is equal to two\n");
        } 
        if(num < 2)   
        {
            printf("Your number is lesser than two\n");
        }
    

return 0;

}