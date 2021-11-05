//INFIX TO POSTFIX
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
void infix_to_postix(char ch[])
{
    int i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            printf("%c",ch[i]);
        }
        else if(ch[i]=='(')
        {
            push(ch[i]);
        }
        else if(ch[i]==')')
        {
            while((x=pop())!='(')
            {
                printf("%c",x);
            }
        }
        else
        {
            while(pre(stack[top])>=pre(ch[i]))
            {
                printf("%c",pop());
            }
            push(ch[i]);
        }
        i++;
    }
    while(top!=-1)//Popping Element from element until stack is Empty

    {
        printf("%c",pop());
    }
}
int main()
{
    char infix[100];
    printf("Enter the String : ");
    scanf("%s",&infix);
    printf("\n\n\t\tPostfix Expression : ");
    infix_to_postfix(infix);
    getch();
    return 0;
}
