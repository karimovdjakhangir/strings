//1 dan 30 gacha hisoblaydigan juft sonlarni hisoblash

#include <stdio.h>
#include <stdbool.h>

int main()
{

    int num=30;
    for(int i=1; i<num; i++)
    {
        if (i % 2 == 0)
        {   
            printf("%d\n", i);
        }
    }
   return 0;
}