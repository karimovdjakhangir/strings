#include <stdio.h>

int main(){
int N, K;
char P[100];
printf("Please enter number of raws, my Master: \n");
scanf("%d", &N);

printf("Please enter number of symbols, Mr. Genius: \n");
scanf("%d", &K);

printf("Please enter a symbol, my Lord: \n");
scanf("%s", P);

FILE *fp;

fp=fopen("./text.txt", "w+");
for(int i=0; i<=N; i++){
    for(int j=0; j<=K; j++){
        fprintf(fp, "%s", P);
    }
    fprintf(fp, "\n");
}
    return 0;
}