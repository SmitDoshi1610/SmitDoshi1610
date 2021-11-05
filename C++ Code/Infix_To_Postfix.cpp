#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

int Precesion(char ch)
{
    if(ch=='^')
    return 3;
    else if(ch=='+' || ch=='-')
    {
        return 1;
    }
    else if(ch=='*' || ch=='/')
    return 2;
    else
    return -1;
} 

string In_To_Post(string str)
{
    stack<char>st;
    string s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            s+=str[i];
            
        }
        else if(str[i]=='(')
        {
            st.push(str[i]);
        }
        else if(str[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                s+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && Precesion(st.top()) >= Precesion(str[i]))
            {
                s+=st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty())
        {
            s+=st.top();
            st.pop();
        }
        return s;
}
int main()
{
    string str;
    cout<<"Enter a String : ";
    cin>>str;
    cout<<endl;
    cout<< In_To_Post(str)<<endl;
}