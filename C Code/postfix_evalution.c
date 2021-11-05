#include<stdio.h>
#include<conio.h>

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
postfix_evalution(char ch[])
{
    int i=0;
    while(ch[i]!='\0')
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            push(ch[i]-'0');
        }
        else
        {
            int op2 = pop();
            int op1 = pop();
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
        i++;
    }

    printf("\n\n\tPostfix Evalution is :->> %d",pop());
}
int main()
{
    char ch[100];
    printf("Enter the Postfix String : ");
    scanf("%s",&ch);
    postfix_evalution(ch);

    getch();
}
