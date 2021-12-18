/*
*******
 *****
  ***
   *
*/
#include<stdio.h>
int main()
{
    int n=5;
    int z=(n*2)-1;
    for(int i=n;i>=1;i--)
    {
        for(int k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=z;j++)
        {
            printf("*");
        }
        z-=2;
        printf("\n");
    }
    /*
    if we change * to i then we get this
        pattern given below
        555555555
         4444444
          33333
           222
            1

    */
}
