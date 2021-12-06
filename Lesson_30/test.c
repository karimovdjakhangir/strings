#include <stdio.h>

int main(){
FILE *fp;

fp = fopen("./test.txt", "w+");

fprintf(fp, "the first string of the file");

fclose(fp);



    return 0;
}