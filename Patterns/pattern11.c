/*
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/
#include <stdio.h>
int main()
{
    int k;
    for(int i=1;i<=5;i++)
    {
        k = i;
        for(int j=1;j<=5;j++)
        {
            printf(" %2d",k);
            k++;
        }
        printf("\n");
    }
    printf("\n\n");
    printf("*******************");
    printf("\n\n\n");
    /*
    1 3 5 7 9
    3 5 7 9 11
    5 7 9 11 13
    7 9 11 13 15
    9 11 13 15 17
    */
    for(int i=1;i<=9;i+=2)
    {
        k = i;
        for(int j=1;j<=5;j++)
        {
            printf(" %2d",k);
            k+=2;
        }
        printf("\n");
    }
    return 0;
}
