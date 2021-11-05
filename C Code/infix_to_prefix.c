//INFIX TO PREFIX
#include<stdio.h>
#include<conio.h>
#include<string.h>

char stack[100],x;
int top=-1;
int pre(char ch)
{
    if(ch=='^')
    {
        return 3;
    }
    else if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else if(ch=='*' || ch=='/')
    {
        return 2;
    }
    else
    {
        return -1;
    }
}
void push(char val)
{
    top++;
    stack[top] = val;
}
char pop()
{
    char val=' ';
    val = stack[top];
    top--;
    return val;
}
void infix_to_prefix(char ch[])
{
    int i = strlen(ch)-1;
    char arr[100];
    int j=0;
    while(i>=0)
    {
        if(ch[i]>='a'&& ch[i]<='z')
        {
            arr[j++] = ch[i];
        }
        else if(ch[i]==')')
        {
            push(ch[i]);
        }
        else if(ch[i]=='(')
        {
            while((x=pop())!=')')
            {
                arr[j++] = x;
            }
        }
        else
        {
            while(pre(stack[top])>=pre(ch[i]))//Precendence
            {
                arr[j++] = pop();
            }
            push(ch[i]);
        }
        i--;
    }
    while(top!=-1)//Popping Element from element until stack is Empty
    {
        arr[j++] = pop();
    }
    for(int k=j;k>=0;k--)
    {
        printf("%c",arr[k]);
    }
}
int main()
{
    char infix[100];
    printf("Enter the String : ");
    scanf("%s",&infix);
    printf("\n\n\t\tPrefix Expression : ");
    infix_to_prefix(infix);
    getch();
    return 0;
}
