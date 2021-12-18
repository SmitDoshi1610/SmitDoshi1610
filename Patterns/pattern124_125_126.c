/*
EEEEE
 DDDD
  CCC
   BB
    A
*/
#include<stdio.h>
int main()
{
    char i,j;
    for(i='E';i>='A';i--)
    {
        for(char k='E';k>i;k--)
        {
            printf(" ");
        }
        for(j='A';j<=i;j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    printf("\n\n***********\n\n\n");
    for(char i='E';i>='A';i--)
    {
        for(int k='E';k>i;k--)
        {
            printf(" ");
        }
        for(char j='A';j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}
