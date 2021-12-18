/*
0
0 1
0 1 1
0 1 1 2
0 1 1 2 3
*/
#include <stdio.h>
int main()
{
    int a=0,b=1,c=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            a = b;
            b = c;
            printf("%d ",c);
            c = a+b;
        }
        a=0;b=1;c=0;
        printf("\n");
    }
}
