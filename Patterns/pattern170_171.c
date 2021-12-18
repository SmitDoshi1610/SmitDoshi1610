#include <stdio.h>
#include <math.h>
int main()
{
    int n=3;
    for(int i=n;i>=-n;i--)
    {
        for(int j=n;j>=abs(i);j--)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
