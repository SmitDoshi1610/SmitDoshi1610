#include <stdio.h>
#include <conio.h>
void InsertionSort(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
        int min;
        min = arr[i];
        int j=i-1;
        while(arr[j]>min && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = min;
    }
}
int main()
{
    int n;
    printf("\nEnter the Size of Array : ");
    scanf("%d",&n);
    int  arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the [%d] Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    InsertionSort(n,arr);
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n\n");

    return 0;
}