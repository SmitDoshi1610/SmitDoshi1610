#include<stdio.h>
/*
55555
 4444
  333
   22
    1
*/
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
