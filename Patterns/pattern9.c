/*
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
5 10 15 20 25
*/
#include<stdio.h>
int main()
{
    int k;
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<5;j++)
        {
            k=k+i;
            printf("%d ",k);

        }
        printf("\n");
        k=0;
    }
    /*Second Pattern*/
    printf("\n\n\n\n\n\n");
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=3;j++)
        {
            printf("%d %d ",j,i);
        }
        printf("\n");
    }
    return 0;
}



