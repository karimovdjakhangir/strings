#include <stdio.h>

int main ()
{

    int num1, num2;

printf("Enter first number: ");
scanf("%d\n", &num1);

printf("Enter second number: ");
scanf("%d\n", &num2);

    if (num1>num2)
        printf("%d\n,%d\n", num1, num2);
            else 
        {    if (num1<num2)
               printf("%d\n%d\n", num2, num1);
          else 
                {
                    printf("Numbers are equal\n");
                }
                }
        return 0;
}

