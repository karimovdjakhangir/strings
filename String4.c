//String2

#include <stdio.h>
int main() {  
    int a;
    printf("Enter number of capital letters to display: ");
    scanf("%d", &a);
    int counter;
    for(int i=1; i<=a; i++){
        for(char j=65; j<=95; j++)
        printf("Letter: %c \n", j);
    }
    return 0;
}