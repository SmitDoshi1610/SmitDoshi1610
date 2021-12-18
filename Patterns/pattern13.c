#include <stdio.h>
int main()
{
    char i,j;
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("************************");
    printf("\n\n\n");
    for(i='A';i<='E';i++)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("************************");
    printf("\n\n\n");
    for(i='E';i>='A';i--)
    {
        for(j='A';j<='E';j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("************************");
    printf("\n\n\n");
    char k='A';
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            printf("%c ",k);
            if(k<'Z')
                k++;
            else
                k = 'A';
        }
        printf("\n");
    }
}
