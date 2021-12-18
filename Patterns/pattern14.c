/*
5
45
345
2345
12345
*/
#include <stdio.h>
int main()
{
    int k;
    for(int i=5;i>=1;i--)
    {k=i;
        for(int j=i;j<=5;j++)
        {
            printf("%2d",k);
            k++;
        }
        printf("\n");
    }

    printf("\n\n\n");
    printf("******************");
    printf("\n\n\n");
    /*
    5
    54
    543
    5432
    54321
    */
    int l;
    for(int i=5;i>=1;i--)
    {
        for(int j=5;j>=i;j--)
        {
            printf("%2d",j);
        }
        printf("\n");
    }
}
