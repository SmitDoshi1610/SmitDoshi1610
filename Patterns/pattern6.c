/*
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
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
            k++;
        }
        printf("\n");
    }
    return 0;
}
