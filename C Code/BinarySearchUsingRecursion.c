#include <stdio.h>
#include <conio.h>

int binarySearch(int arr[],int l,int h,int key)
{
    if(l>h)
    return -1;
    else
    {
        int mid;
        mid = (l+h)/2;
        if(arr[mid]==key)
        return mid;
        else if(key < arr[mid])
        return binarySearch(arr,l,mid-1,key);
        else
        return binarySearch(arr,mid+1,h,key);
    }
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
    int ans = binarySearch(arr,0,n,key);
    if(ans==-1)
    printf("\nElement is Not Found");
    else
    printf("\nElement is Found at [%d] position : ",ans);

    return 0;
}