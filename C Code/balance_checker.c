#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<string.h>

char stack[100];
int top=-1;
void push(char ch)
{
    top++;
    stack[top] = ch;
}
char peep()
{
    return stack[top];
}
void pop()
{
    stack[top--];
}
bool Bracket_Checker(char ch[])
{
    int n = strlen(ch);
    bool ans = true;
    for(int i=0;i<n;i++)
    {
        if(ch[i]=='(' || ch[i]=='[' || ch[i]=='{')
        {
            push(ch[i]);
        }
        else if(ch[i]==')')
        {
            if(top!=-1 && peep()=='(')
            {
                pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if(ch[i]==']')
        {
            if(top!=-1 && peep()=='[')
            {
                pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        else if(ch[i]=='}')
        {
            if(top!=-1 && peep()=='{')
            {
                pop();
            }
            else
            {
                ans =  false;
                break;
            }
        }
    }
   if(top!=-1)
   {
       return false;
   }
   return ans;
}
int main()
{
    char ch[50];
    printf("\nEnter the String : ");
    scanf("%s",&ch);
    if(Bracket_Checker(ch))
    {
        printf("\nString is Valid");
    }
    else
    {
        printf("\nString is Invalid");
    }
    return 0;

}
