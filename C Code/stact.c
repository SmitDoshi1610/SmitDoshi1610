#include<stdio.h>
#include<conio.h>
int stact(int arr[],int l)
{
    printf("\n");
    for(int i=0;i<=l;i++)
    {

        printf("\t%d",arr[i]);

    }
    printf("\n");

}
int main()
{
    int n;
    printf("Enter the No : ");
    scanf("%d",&n);
    int l = n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    char ch;
    do{
        fflush(stdin);
        printf("\nDo you want to delete : ");
        scanf("%c",&ch);
        fflush(stdin);
        if(ch=='y' || ch=='Y')
        {
            l--;
         if(l>=0)
         stact(arr,l);
         else if(l<-1)
            {
                printf("Sorry The Array is Empty : ");
                break;
            }
        }
        else
            break;
        /*l--;
        if(l>=0)
        stact(arr,l);
        else if(l<-1)
            {
                printf("Sorry The Array is Empty : ");
                break;
            }*/
    }while(ch=='y' || ch=='Y');


    getch();
}
