// program in C to display the cube of the number 
// upto given an integer.

#include <stdio.h>

int main(){

int i, seq, cb;
printf("Enter number of sequences: \n");
scanf("%d", &seq);

for(i=1; i<=seq; i++){
    cb = (i*i*i);
    }
printf("\nNumber is: %d\nand cube of the %d is: %d\n", i,i, cb);

    return 0;
}
