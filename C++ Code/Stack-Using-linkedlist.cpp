#include <iostream>
using namespace std;
//STACK DATA STRUCTURE FOLLOWS LIFO MECHANISM

//Creating A Structure Node
struct node
{
    int data;
    struct node *next;
};
//Creating A Class of Stack for member function
class Stack
{
    struct node *top;

public:
    //Constructor for initializing the class variable
    Stack()
    {
        top = NULL;
    }
    //Class Member function
    void Push();
    void Pop();
    void Display();
};
//For inserting Element in the Stack
void Stack ::Push()
{
    int value;
    struct node *ptr;
    cout << "Enter the Number to insert \n\n";
    cin >> value;
    ptr = new node;
    ptr->data = value;
    ptr->next = NULL;
    if (top != NULL)
    {
        ptr->next = top;
    }
    top = ptr;
    cout << "Item is Inserted\n";
}
//For Deleting Element From Stack
void Stack::Pop()
{
    struct node *temp;
    //UnderFlow Condition For Stack When No element is present in the Stack
    if (top == NULL)
    {
        cout << "Stack is Empty\n";
        return;
    }
    temp = top;
    top = top->next;
    cout << "The Poped Element is : " << temp->data << "\n";
    delete temp;
}

//To display the Stack
void Stack::Display()
{
    //UnderFlow Condition For Stack When No element is present in the Stack
    if (top == NULL)
    {
        cout << "No Element is Present in the Stack \n";
        return;
    }
    else
    {
        struct node *ptr = top;
        cout << "The Stack Element : \n";
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << "NULL\n";
    }
}

int main()
{
    Stack S;
    int choice;
    do
    {
        cout << "\n-----------------------------------------------------------";
        cout << "\n\t\tSTACK USING LINKED LIST\n";
        cout << "1:PUSH\t2:POP\t3:DISPLAY STACK\t4:EXIT\n";
        cout << "\n-----------------------------------------------------------\n";
        cout << "Enter your choice(1-4): \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            S.Push();
            break;
        }
        case 2:
        {
            S.Pop();
            break;
        }
        case 3:
        {
            S.Display();
            break;
        }
        case 4:
        {
            cout << "Exit Point\n";
            exit(0);
            break;
        }
        default:
        {
            cout << "Please Enter the Valid Choice : (1/2/3/4)\n";
            break;
        }
        }
    } while (choice != 4);

    return 0;
}