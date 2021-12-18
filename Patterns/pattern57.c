/*Fibonacci Series
1
1   2
3   5  8
13  21 34 55
89 144 233 377 610
*/
#include<stdio.h>
int main()
{
    int a=1,b=0,c;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            c = a + b;
            a = b;
            b = c;
            printf(" %3d",c);
        }
        printf("\n");
    }
}
