#include <stdio.h>

//if input integer is lesser than 5 and display each number before 5, till 0.

int main(){
    int num, result;

    printf("Enter any integer = ");
    scanf("%d", &num);

    if(num == 5){
        printf("This number does not meet condition of the exercise\n");
    } else {
        if(num == 4){
            printf("3, 2, 1\n");
        } else {
            if(num == 3){
                printf("2, 1\n");
            } else {
                if(num == 2){
                    printf("1\n");
                } else {
                    printf("0\n");
                }
            }
        }
    }
    
    
return 0;

}