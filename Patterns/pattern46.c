/*
2
4  6
8  10 12
14 16 18 20
22 24 26 28 30
*/
#include<stdio.h>
int main()
{
    int k=2;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k);
            k+=2;
        }
        printf("\n");
    }
}
