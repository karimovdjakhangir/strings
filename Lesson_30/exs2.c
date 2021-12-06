#include <stdio.h>

int main()
{
    int N;
    char str[100];
    printf("Please enter number of raws to display small letters, my Master: \n");
    scanf("%d", &N);

    FILE *fp;

    fp = fopen("./alphabet.txt", "w+");

    for (char i = 97; i <= N + 96; i++)
    {
        fprintf(fp, "\n ascending letters: ");
        for (char j = 97; j <= i; j++)
        {
            fprintf(fp, "c", j);
        }
    }
    fprintf(fp, "\n");
    return 0;
}
