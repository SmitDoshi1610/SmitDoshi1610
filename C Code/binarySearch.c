#include <stdio.h>
#include <conio.h>

int binarySearch(int arr[],int n,int key)
{
    int low = 0;
    int high = n;
    while(low<high)
    {
        int mid;
        mid = (low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        high = mid-1;
        else
        low = mid + 1;
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
    int ans = binarySearch(arr,n,key);
    if(ans==-1)
    printf("\nElement is Not Found");
    else
    printf("\nElement is Found at [%d] position : ",ans+1);

    return 0;
}