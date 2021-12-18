/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%2d",j%2);
        }
        printf("\n");
    }
    printf("\n\n\n****************\n\n");
    /*
    0
    0 1
    0 1 0
    0 1 0 1
    0 1 0 1 0
    0 1 0 1 0 1
    */
    for(int i=1;i<=6;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%2d",j%2);
        }
        printf("\n");
    }
}
