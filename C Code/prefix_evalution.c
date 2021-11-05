#include<stdio.h>
#include<conio.h>
#include<string.h>

int stack[100];
int top=-1;
void push(char ch)
{
    top++;
    stack[top] = ch;
}
char pop()
{
    return stack[top--];
}
void prefix_evalution(char ch[],int n)
{
    int i=n;
    while(i--)
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            push(ch[i]-'0');
        }
        else
        {
            int op1 = pop();
            int op2 = pop();
            switch(ch[i])
            {
            case '+':
                {
                    push(op1+op2);
                    break;
                }
                case '-':
                {
                    push(op1-op2);
                    break;
                }
                case '*':
                {
                    push(op1*op2);
                    break;
                }
                case '/':
                {
                    push(op1/op2);
                    break;
                }
            }
        }
    }

    printf("\n\n\tPrefix Evaluation is :->> %d",pop());
}
int main()
{
    char ch[100];
    printf("Enter the Postfix String : ");
    scanf("%s",&ch);
    int n;
    n = strlen(ch);
    prefix_evalution(ch,n);

    getch();
}
