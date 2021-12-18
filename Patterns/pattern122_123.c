/*
54321
 4321
  321
   21
    1
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(int k=5;k>i;k--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("*************");
    printf("\n\n\n");
    /*
    1 2 3 4 5
      5 6 7 8
        8 9 10
          10 11
             11
    */
    int k=1;
    for(i=0;i<5;i++)
    {
        for(int k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=4;j>=i;j--)
        {
            printf("%d",k-i);
            k++;
        }
        printf("\n");
    }
}
