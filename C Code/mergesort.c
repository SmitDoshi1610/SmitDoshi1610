#include<stdio.h>
#include<conio.h>
//Merge Function for Arranging in Ascending Order
void merge(int arr[],int l,int mid,int r)
{
    int n1,n2;
    n1 = mid-l+1;
    n2 = r-mid;
    int a[n1];//Temporary Array for first half Array
    int b[n2];//Temporary Array for Second half Array
    for(int i=0;i<n1;i++)
    {
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i] = arr[mid+1+i];
    }
    int j=0;
    int i=0;
    int k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++;i++;
        }
        else
        {
            arr[k] = b[j];
            k++;j++;
        }
    }
    while(i<n1)
    {
        arr[k] = a[i];
        k++;i++;
    }
    while(j<n2)
    {
        arr[k] = b[j];
        k++;j++;
    }
}
//MergeSort Function For Dividing Array
void MergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid;
        mid = (l+r)/2;//Mid value
        MergeSort(arr,l,mid);//Recursive Call For 0 to mid
        MergeSort(arr,mid+1,r);//Recursive Call for mid+1 to r

        merge(arr,l,mid,r);
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
    MergeSort(arr,0,n);
    printf("\n\n");
    printf("\n\t\tSorted Array :\n\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    printf("\n\n");
    return 0;

}
