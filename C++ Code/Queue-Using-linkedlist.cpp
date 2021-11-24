#include <iostream>
using namespace std;
//Implementing Queue Using Linked-List 
struct Node{

    int data;
    struct Node *next;
}*front = NULL,*rear=NULL;//Structure Member Variable front and Rear

//To insert the value in Queue
void Enqueue(int value)
{
    struct Node *temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if(front==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
    cout<<"Inserted Succesfull\n";
}
//To delete value from Queue
int Dequeue()
{
    int value;
    if(front==NULL)
    {
        cout<<"Queue is Empty\n";
        return -1;
    }
    else
    {
        struct Node *temp = front;
        value = temp->data;
        front = front->next;

        delete temp;
    }
    return value;
}

void Display()
{
    if(front==NULL)
    {
        cout<<"No Element is Present in the Queue\n";
        return;
    }
    else
    {
        struct Node *temp = front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }
}

int main()
{
    int choice,value;
    do{
        cout<<"\t1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\n";
        cout<<"Enter the Choice : \n";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"Enter the value : \n";
                cin>>value;
                Enqueue(value);
                break;
           }
           case 2:
           {
               int element = Dequeue();
               if(element==-1)
               cout<<"Queue is Empty\n";
               else
               cout<<"Dequeue element is : "<<element<<"\n";
               break;
           }
           case 3:
           {
               Display();
               break;
           }
           case 4:
           {
               cout<<"Exit Point \n";
               exit(0);
               break;
           }
        }
    }while(choice!=4);

    return 0;
}