#include <conio.h>
#include <stdio.h>
int BubbleSort(int n,int arr[])
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int temp;
                temp =arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    printf("Enter the Size of Array :  ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){

        printf("Enter the [%d] Element : ",i+1);
        scanf("%d",&arr[i]);
    }
    BubbleSort(n,arr);
    for(int i=0;i<n;i++){

        printf(" %d ",arr[i]);
    }
    printf("\n\n");
    return 0;
}