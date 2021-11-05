#include <stdio.h>
#include <conio.h>
void swap(int arr[],int i,int j)
{
    int temp;
    temp = arr[i];
    arr[i]=arr[j];
    arr[j] =temp;
}

int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void QuickSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int p = partition(arr,l,r);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,r);
    }
}
int main()
{
    int n;
    printf("\nEnter the Size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the %d Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    QuickSort(arr,0,n);
    printf("\n\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n\n");
    return 0;
}
