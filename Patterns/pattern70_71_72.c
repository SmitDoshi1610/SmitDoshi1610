#include<stdio.h>
/*
*****
****
***
**
*
*/
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    printf("\n\n****************\n\n");
    /*
    11111
    2222
    333
    44
    5
    */
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        {
            printf("%2d",i);
        }
        printf("\n");
    }
}
