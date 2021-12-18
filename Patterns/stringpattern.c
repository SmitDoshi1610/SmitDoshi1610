#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    char str[] = "123456789";
    int m=1;
    for(int i=1;i<=5;i++)
    {
        for(int k=5;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=0;j<m;j++)
        {
            printf("%c",str[j]);
        }
        m+=2;
        printf("\n");
    }
    getch();
}
