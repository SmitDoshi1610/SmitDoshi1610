#include<stdio.h>
#include<conio.h>
#include<string.h>

int top=-1;
char stack[100];
void push(char ch)
{
    top++;
    stack[top] = ch;
}
void pop()
{
    top--;
}
void checker(char ch[])
{
    int i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='(')
        {
            push(ch[i]);
        }
        else if(ch[i]==')')
        {
            pop();
        }
        i++;
    }
    if(top==-1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
int main()
{
    char ch[100];
    printf("Enter the Expression : ");
    scanf("%s",&ch);
    checker(ch);
    getch();
    return 0;

}
