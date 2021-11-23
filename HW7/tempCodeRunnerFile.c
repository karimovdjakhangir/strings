#include <stdio.h>

int main()
{

    int num1=4, num2=-5, num3=6, result;
    

    if(num1>0)
    {
        (num1=1);
    }
       else
        {
            num1=0;
        }
            if(num2>0)
            {
                (num2=1);
            }
                else
                {
                    (num2=0);    
                }
                if(num3>0)
                        {
                            (num3=1);
                        }
                            else
                            {
                                (num3=0);
                            }
                      
                      printf("Number of positive integers = %d\n", num1 +num2 + num3);
    return 0;
}