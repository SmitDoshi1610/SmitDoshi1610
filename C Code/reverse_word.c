#include<stdio.h>
#include<conio.h>
#include<string.h>

int top=-1;
char stack[100];
char pop()
{
    return stack[top--];
}
void push(char ch[])
{
    int n = strlen(ch);
    for(int i=n;i>=0;i--)
        printf("%c",ch[i]);
}
void reverse_word(char ch[])
{
    char st[50];
    int j=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        while(ch[i]!=' ')
        {
            st[j] = ch[i];
            j++;
            i++;
        }
        push(st);
    }
    /*while(top!=-1)
    {
        printf("%s ",pop());
        top--;
    }*/
}
int main()
{
    char ch[100];
    printf("Enter the String : ");
    gets(ch);
    reverse_word(ch);

    return 0;
}
