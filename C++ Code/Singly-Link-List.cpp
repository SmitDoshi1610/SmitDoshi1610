#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void InsertAtBeginning(int val)
{
    struct Node *temp = new Node;
    temp->data = val;
    if(head==NULL)
    {
        temp->next = NULL;
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
    cout<<"Node Inserted Successful\n";
}

void InsertAtEnd(int val)
{
    struct Node *temp = new Node;
    temp->data = val;
    temp->next = NULL;
    if(head==NULL)
    {
        head = temp;
    }
    else
    {
        struct Node *ptr = head;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next=temp;
    }
    cout<<"Node Inserted Succesfully\n";
}
void InsertAtPosition(int val,int pos)
{
    int i=0;
    struct Node *temp;
    temp = new Node;
    temp->data = val;
    if(head==NULL)
    {
        temp->next = NULL;
        head = temp;
    }
    else
    {
        struct Node *ptr = head;
        for(i=0;i<pos-1;i++)
        {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
    cout<<"Node Inserted Successfully\n";
}

int DeleteAtBeginning()
{
    int value;
    struct Node *temp = head;
    if(head==NULL)
    {
        cout<<"List is Empty\n";
        return -1;
    }
    else
    {
        if(head->next==NULL)
        {
            value = head->data;
            head = NULL;
            delete temp;
        }
        else
        {
            head = temp->next;
            value = temp->data;
            delete temp;
        }
        cout<<"Node deleted at Begining\n";
    }
    return value;
}

int DeleteAtEnd()
{
    int value;
    if(head==NULL)
    {
        cout<<"List is Empty\n";
        return -1;
    }
    else
    {
        struct Node *temp1 = head,*temp2;
        if(head->next==NULL)
        {
            value = head->data;
            head = NULL;
        }
        else
        {
            while(temp1->next!=NULL)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            value = temp1->data;
            temp2->next=NULL;
        }
        delete temp1;
        cout<<"Node deleted at End\n";
    }
    return value;
}

int DeleteAtPosition(int pos)
{
    int i,value,flag=0;
    struct Node *temp1 = head,*temp2;
    if(pos==1)
    {
        head = temp1->next;
        value = head->data;
        delete temp1;
    }
    else
    {
        for(i=0;i<pos-1;i++)
        {
            if(temp1->next!=NULL)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            temp2->next = temp1->next;
            value = temp2->data;
            delete temp1;
            cout<<"Node deleted at Given Position\n";
        }
        else
        {
            cout<<"Position Exceeds linked list\n";
        }
    }
    return value;
}

void Display()
{
    if(head==NULL)
    {
        cout<<"Linked-List is Empty\n";
        return;
    }
    else
    {
        struct Node *temp = head;
        cout<<"\t\t\tDisplay linked-List\n";
        cout<<"\n---------------------------------------------------------------\n";
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
        cout<<"\n-----------------------------------------------------------------";
        cout<<"\n";
    }
}

int main()
{
    int choice,element,val,position;
    do{
        cout<<"\t1.Insert At Beginning\n\t2.Insert At End\n\t3.Insert At Position\n\t4.Delete At Beginning\n\t5.Delete At End\n\t6.Delete At Position\n\t7.Display\n\t8.Exit\n\n";
        cout<<"Enter the Choice : \n";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"Enter the Value : \n";
                cin>>val;
                InsertAtBeginning(val);
                break;
            }
            case 2:
            {
                cout<<"Enter the Value : \n";
                cin>>val;
                InsertAtEnd(val);
                break;
            }
            case 3:
            {
                cout<<"Enter the Value : \n";
                cin>>val;
                cout<<"Enter the Position : \n";
                cin>>position;
                InsertAtPosition(val,position);
                break;
            }
            case 4:
            {
                element = DeleteAtBeginning();
                cout<<"The Deleted Node is : "<<element<<"\n";
                break;
            }
            case 5:
            {
                element = DeleteAtEnd();
                cout<<"The Deleted Node is : "<<element<<"\n";
                break;
            }
            case 6:
            {
                cout<<"Enter the Position You want to Delete : \n";
                cin>>position;
                DeleteAtPosition(position);
                break;
            }
            case 7:
            {
                Display();
                break;
            }
            case 8:
            {
                cout<<"Exit Point\n";
                exit(0);
            }
        }

    }while(choice!=8);
     return 0;
}
