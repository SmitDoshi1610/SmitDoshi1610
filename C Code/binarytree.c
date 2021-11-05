#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;
struct node *insert(struct node *r,int val)
{
    if(r==NULL)
    {
        r = (struct node*)malloc(sizeof(struct node));
        r->data = val;
        r->left = NULL;
        r->right = NULL;
    }
    else if(val < r->data)
    {
        r->left = insert(r->left,val);
    }
    else
    {
        r->right = insert(r->right,val);
    }
    return r;
};
void PreOrder(struct node *r)
{
    if(r!=NULL)
    {
        printf(" %d ",r->data);
        PreOrder(r->left);
        PreOrder(r->right);
    }
}
void InOrder(struct node *r)
{
    if(r!=NULL)
    {
        InOrder(r->left);
        printf(" %d ",r->data);
        InOrder(r->right);
    }
}
void PostOrder(struct node *r)
{
    if(r!=NULL)
    {
        PostOrder(r->left);
        PostOrder(r->right);
        printf(" %d ",r->data);
    }
}
int main()
{
    root = NULL;
    int n,v;
    printf("Enter the Size of Tree :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d Element : ",i+1);
        scanf("%d",&v);
        root = insert(root,v);
    }
    printf("PreOrder Traversal : ");
    PreOrder(root);
    printf("\n\n");
    printf("InOrder Traversal : ");
    InOrder(root);
    printf("\n\n");
    printf("PostOrder Traversal : ");
    PostOrder(root);
    printf("\n\n");
}
