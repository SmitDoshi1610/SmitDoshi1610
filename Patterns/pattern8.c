/*
2 4 6 8 10
12 14 16 18 20
22 24 26 28 30
32 34 36 38 40
42 44 46 48 50
*/
#include<stdio.h>
int main()
{
    int k=2;
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=1;j--)
        {
            printf("%d ",k);
            k+=2;
        }
        printf("\n");
    }
    return 0;
}


