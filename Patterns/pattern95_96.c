/*
     *
    **
   ***
  ****
 *****
*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=5;k>i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n\n************\n\n");
    /*
     1
    22
   333
  4444
 55555
    */
    for(int i=1;i<=5;i++)
    {
        for(int k=5;k>i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
