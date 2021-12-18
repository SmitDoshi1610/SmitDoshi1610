#include<stdio.h>
int main()
{
    int k=15;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%2d ",k--);
        }
        printf("\n");
    }
}
