#include<stdio.h>
#include<conio.h>

void towerofhanoi(int n,char src,char dest,char helper)
{
    if(n==0)
        return;
    towerofhanoi(n-1,src,helper,dest);
    printf("Move from %c to %c \n",src,dest);
    towerofhanoi(n-1,helper,dest,src);
}
int main()
{
    int n;
    printf("Enter the No of Disks : ");
    scanf("%d",&n);
    towerofhanoi(n,'A','C','B');
    return 0;
}
