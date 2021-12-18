/*
1 3 5 7 9
11 13 15 17 19
21 23 25 27 29
31 33 35 37 39
41 43 45 47 49
*/
#include<stdio.h>
int main()
{
    int k=1;
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

