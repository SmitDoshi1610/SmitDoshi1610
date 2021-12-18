#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf(" %2d",2*j);
        }
        printf("\n");
    }
}
