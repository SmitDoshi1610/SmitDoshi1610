#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << " NULL " << endl;
}
void deleteAttail(Node* &head,int key)
{
    if(head==NULL)
    {
        Node* todelete = head;
        head = head->next;

        delete todelete;
    }
    Node* temp = head;
    while(temp->next->data!=key)
    {
        temp = temp->next;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
int main()
{
    Node*head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    deleteAttail(head,1);
     display(head);
    return 0;
}