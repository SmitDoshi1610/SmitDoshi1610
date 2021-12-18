#include<stdio.h>
void pattern1()
{
    int k;
    for(int i=1;i<=5;i++)
    {
        k = i;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}
void pattern2()
{
    int k;
    for(int i=1;i<=5;i++)
    {
        k = i-1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",k+i);
            k+=2;
        }
        printf("\n");
    }
}
int main()
{
    pattern1();
    printf("\n\n\n");
    printf("*********************");
    printf("\n\n\n");
    pattern2();
    return 0;
}
/*Pattern1
1
23
345
4567
56789

Pattern2
1
3 5
5 7  9
7 9  11 13
9 11 13 15 17
*/
