#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool checker(string str)
{
    stack<char>st;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='(')
        {
            st.push(str[i]);
        }
        else if(str[i]==')')
        {
            st.pop();
        }
    }
    if(!st.empty())
    {
        return false;
    }
    return true;
}

int main()
{
    string str;
    cout<<"Enter the Expression : ";
    cin>>str;
    bool ans = checker(str);
    if(ans)
    cout<<"Valid String\n\n";
    else
    cout<<"Invalid String\n\n";

    return 0;
}