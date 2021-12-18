/*
1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25
*/
#include <stdio.h>
int main()
{
    int k=0;
    for(int i=1;i<=5;i++)
    {
        k = k + i;
        for(int j=1;j<=5;j++)
        {
            printf("%2d ",k);
            k = k + 5;
        }
        printf("\n");
        k=0;
    }
    /* Second Pattern
    1 10 11 20 21
    2 9  12 19 22
    3 8  13 18 23
    4 7  14 17 24
    5 6  15 16 25*/

    int x,y;
    printf("\n\n\n\n\n");
    for(int i=1;i<=5;i++)
    {
        x = i;
        y = 5-i+1;
        for(int j=1;j<=5;j++)
        {
            if(j%2==1)
            {
                printf(" %2d",x);
            }
            else
            {
                printf(" %2d",y);
            }
            x = x + 5;
            y = y + 5;
        }
        printf("\n");
    }
    printf("\n\n\n\n\n\n");
    /*
    5 10 15 20 25
    4  9 14 19 24
    3  8 13 18 23
    2  7 12 17 22
    1  6 11 16 21
    */
    int k1;
    for(int i=5;i>=1;i--)
    {
        k1 = i;
        for(int j=0;j<5;j++)
        {
           printf(" %2d",k1);
           k1 = k1 + 5;

        }
        printf("\n");
        k=0;
    }
    return 0;
}
