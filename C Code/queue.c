#include<stdio.h>   
#include<stdlib.h>  
#define maxsize 5  
void insert();  
void delete();  
void display();  
int front = -1, rear = -1;  
int queue[maxsize];  
void main ()  
{  
    int choice;   
    while(choice != 4)   
    {     
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insert();  
            break;  
            case 2:  
            delete();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  
void insert()  
{  
    int item;  
    printf("\nEnter the element\n");  
    scanf("\n%d",&item);      
    if(rear == maxsize-1)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    if(front == -1 && rear == -1)  
    {  
        front = 0;  
        rear = 0;  
    }  
    else   
    {  
        rear = rear+1;  
    }  
    queue[rear] = item;  
    printf("\nValue inserted ");  
      
}  
void delete()  
{  
    int item;   
    if (front == -1 || front > rear)  
    {  
        printf("\nUNDERFLOW\n");   
              
    }  
    else  
    {  
        item = queue[front];  
        if(front == rear)  
        {  
            front = -1;  
            rear = -1 ;  
        }  
        else   
        {  
            front = front + 1;  
        }  
        printf("\nvalue deleted ");  
    }  
      
      
}  
      
void display()  
{  
    int i;  
    if(rear == -1)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        for(i=front;i<=rear;i++)  
        {  
            printf("\n%d\n",queue[i]);  
        }     
    }  
}  
/*#include <stdio.h>
#include <conio.h>

int queue[100],front=-1,rear=-1,n,x,choice;
void enqueue(void);
void dequeue(void);
void display();
int main()
{
    printf("\nEnter the size of Queue : ");
    scanf("%d",&n);
    printf("\n\tRepresentaion of Queue using Array : ");
    printf("\n\t1.Insert\t2.Delete\t3.Display\t4.Exit\n");

    do
    {
        printf("\nEnter your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                enqueue();
                break;
            }
        case 2:
            {
                dequeue();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                printf("\nExit Point : ");
                break;
            }
        }
    }while(choice!=4);

}

void enqueue()
{
    if(rear>=n-1)
    {
        printf("\nQueue is Full : ");
    }
    else{
        if(front==-1)
    {
        front=0;
    }

        printf("\nEnter the element you want to insert : ");
        scanf("%d",&x);
        queue[rear++] = x;
    }
}
void dequeue()
{
    if(front==rear)
    {
        printf("\nQueue is Empty : ");
    }
    else
    {
        printf("\nThe deleted Element is : %d ",queue[front]);
        front++;
    }
}
void display()
{
    printf("\n");
    if(front==-1)
    {
        printf("\nQueue is Empty : ");
    }
    else{
    for(int i=front;i<=rear;i++)
    {
        printf(" %d ",queue[i]);
    }
    }
    printf("\n");
}*/

/*#include<stdio.h>
#define n 5
int main()
{
    int queue[n],ch=1,front=0,rear=0,i,j=1,x=n;
    printf("Queue using Array");
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is empty");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\nQueue Elements are:\n ");
            if(front==rear)
                printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");
            }
        }
    }
    return 0;
}
*/

