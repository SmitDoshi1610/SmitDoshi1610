#include <stdio.h>
#include <conio.h>

int linearSearch(int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i+1;
    }
    return -1;
}
int main()
{
    int n,key;
    printf("Enter the size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("\nEnter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the Element you want to search : ");
    scanf("%d",&key);
    int ans = linearSearch(arr,n,key);
    if(ans==-1)
    printf("\nElement is Not Found");
    else
    printf("\nElement is Found at [%d] position : ",ans);

    printf("\n\n");
    return 0;
}