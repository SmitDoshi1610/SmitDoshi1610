#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

//void create();
//void insert_head();
void insert_tail();
void display();
//void delete_head();
//void delete_tail();

struct node
{
    int info;
    struct node*next;
};
struct node*head = NULL;

int main()
{
    int choice;
    printf("\tLink List All Operation\n");
    printf("\t1.Insert At Head\n");
    printf("\t2.Insert At Tail\n");
    printf("\t3.Display\n");
    printf("\t4.Delete At Head\n");
    printf("\t5.Delete At Tail\n");
    printf("\t6.Exit\n");
    do
    {
        printf("\nPlease enter the choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            //insert_head();
            break;
            case 2:
            insert_tail();
            break;
            case 3:
            display();
            break;
            case 4:
            //delete_head();
            break;
            case 5:
            //delete_tail();
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("Please enter the valid choice \n");
            break;
        }
    }while(choice!=6);
}

void insert_tail()
{
    struct node* temp,*ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("No Space is Free\n");
        return;
    }
    else
    {
        printf("Enter the Value to insert : ");
        scanf("%d",&temp->info);

        if(head==NULL)
        {
            head = temp;
            head->next = NULL;
        }
        else
        {
            while(temp!=NULL)
            {
                temp = temp->next;
            }
            temp->next = NULL;
        }
    }

}

void display()
{
    struct node *temp;
    temp = head;
    while(temp!=NULL)
    {
        printf("%d->",temp->info);

        temp = temp->next;
    }
}
