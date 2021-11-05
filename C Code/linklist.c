#include<stdio.h>
#include<stdlib.h>
int val;
struct Node{

    int data;
    struct Node*next;
};
struct Node *head = NULL;
void insert()
{
    struct Node *link = (struct Node*)malloc(sizeof(struct Node));
    if(link==NULL)
    {
        printf("\nOverflow\n");
    }
    else
    {
        printf("Enter the Value : ");
        scanf("%d",&val);
        link->data = val;
        if(head==NULL)
        {
            link->next = NULL;
            head = link;
            printf("\nNode Inserted\n");
        }
        else
        {

    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = link;
    link->next = NULL;
    printf("\nNode Inserted\n");
    }
    }
}
void display()
{
    struct Node*ptr = head;
    printf("\n\n");
    while(ptr!=NULL)
    {
        printf(" %d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}
int main()
{
    int choice;
    printf("\t\tSingly Link List\n\n");
    printf("\n\n");
    printf("\t1.Insert At End\t2.Display\t3.Exit\n\n");
    do{
        printf("\nEnter the Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            insert();
            break;
        case 2 :
            display();
            break;
        case 3:
            printf("\nExit Point\n");
            exit(0);
            break;
        }
    }while(choice!=3);
    return 0;

}
