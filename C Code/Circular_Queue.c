#include <conio.h>
#include <stdio.h>

int queue[100],n,x,choice,front=-1,rear=-1;
void Enqueue();
void Dequeue();
void Display();
int main()
{
    printf("\nEnter the Size of Queue : ");
    scanf("%d",&n);

    printf("\t1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\n");

    do
    {
        printf("\nEnter the Choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            Enqueue();
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            Display();
            break;
            case 4:
            printf("\nExit point");
            return 0;
            break;
            default:
            printf("\nEnter the VAlid Choice : 1\2\3\4\n");
        }

    } while (choice!=4);
    return 0;
}

void Enqueue()
{
    if(front==-1 && rear==-1)
    {
        front = 0;
        rear = 0;
        printf("\nEnter the Element : ");
        scanf("%d",&x);
        queue[rear] = x;
    }
    else if((rear+1)%n == front)
    {
        printf("\nQueue is Overflow");
    }
    else
    {
        rear = (rear+1)%n;
        printf("\nEnter the Element : ");
        scanf("%d",&x);
        queue[rear] = x;
    }

}
void Dequeue()
{
    if((front==-1) && (rear==-1))
    {
        printf("\nQueue is Underflow");
    }
    else if(front==rear)
    {
        printf("\nThe Dequeue Element is : %d ",queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nThe Dequeue Element is : %d ",queue[front]);
        front = (front+1)%n;
    }
}
void Display()
{
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        int i = front;
        while(i!=rear)
        {
            printf(" %d ",queue[i]);
            i = (i+1) % n;
        }
        printf(" %d ",queue[i]);
    }
}