#include <conio.h>
#include <stdio.h>

void swap (int arr[],int j , int i)
{
    int temp;
    temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
}
int SelectionSort(int n,int arr[])
{
    for(int i=0;i<n;i++)
    {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr,min_index,i);
    }
}

int main()
{
    int n;
    printf("\nEnter the Size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the [%d] Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    SelectionSort(n,arr);
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n\n");
    return 0;
}