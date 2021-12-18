/*
1
0 0
1 1 1
0 0 0 0
1 1 1 1 1
*/
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",i%2);
        }
        printf("\n");
    }
    printf("\n\n\n");
    printf("*******************");
    /*
    0
    1 1
    0 0 0
    1 1 1 1
    0 0 0 0 0
    1 1 1 1 1 1
    */
    printf("\n\n\n");
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%2d",(i%2));
        }
        printf("\n");
    }
}
