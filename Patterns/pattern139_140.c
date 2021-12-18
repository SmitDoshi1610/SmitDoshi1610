/*
     *
    ***
   *****
  *******
 *********
*/
#include<stdio.h>
int main()
{
    int px=5,py=5;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<10;j++)
        {
            if(j>=px && j<=py)
                printf("*");
            else
                printf(" ");
        }
        px--;
        py++;
        printf("\n");
    }
    printf("\n\n");
    printf("****************\n\n");
    /*
        1
       222
      33333
     4444444
    555555555
    */
    int x=5,y=5;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<10;j++)
        {
            if(j>=x && j<=y)
                printf("%d",i);
            else
                printf(" ");
        }
        x--;
        y++;
        printf("\n");
    }
    printf("\n\n************\n\n");
    /*
        1
       123
      12345
     1234567
    123456789
    */
    int n=5,m=5,k=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<10;j++)
        {
            if(j>=n && j<=m)
                printf("%d",k++);
            else
                printf(" ");
        }
        n--;
        m++;
        k=1;
        printf("\n");
    }
}
