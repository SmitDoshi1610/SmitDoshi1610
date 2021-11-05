#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[3][3];
    printf("\n\t\t 3 X 3 Matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nEnter the [%d][%d] element : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n\n\t\tMatrix :::: \n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d ",arr[j][i]);
        }
        printf("\n");
    }
    getch();

}
