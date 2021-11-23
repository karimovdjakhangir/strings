int main(){
    int m, n, k;

    printf("m=");
    scanf("%d", &m);

    printf("n=");
    scanf("%d", &n);

    printf("k=");
    scanf("%d", &k);

    int matrix[m][n];
    for (int i=0; i<m; i++){
        for (int j=0; j<m; j++){
            matrix[i][j] = 200;
            if(i==k-1){
                matrix[i][j] = 100;
            }
            printf("%d ", matrix[i][j]);
        }
        printf("\n\n");
    }


    return 0;
}