#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int PrefixEvalution(string str)
{
    stack<int> st;
    for (int i = str.length()-1; i >=0; i--)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            int x;
            x = str[i] - '0';
            st.push(x);
            
        }
         else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (str[i])
            {
            case '+':
            {
                st.push(op1 + op2);
                break;
            }
            case '-':
            {
                st.push(op1 - op2);
                break;
            }
            case '*':
            {
                st.push(op1 * op2);
                break;
            }
            case '/':
            {
                st.push(op1 / op2);
                break;
            }
            case '^':
            {
                st.push(pow(op1, op2));
                break;
            }
            }
        }
    }
    
    return st.top();
}

int main()
{
    string str;
    cout << "Enter a Prefix Expression : ";
    cin >> str;

    cout<<"Prefix Evalution ::\n\n";
    cout<<PrefixEvalution(str);
    cout<<endl;
    return 0;
}