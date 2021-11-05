#include<iostream>
#include<stack>
using namespace std;

void reverseString(string str)
{
    stack<string>s;
    for(int i=0;i<str.length();i++)
    {
        string st;
        st = str[i];
        s.push(st);
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }

}
int main()
{
    string str;
    cout<<"Enter a Sentence : ";
    getline(cin,str);

    cout<<endl;

    reverseString(str);
   cout<<"\n\n\n";
    return 0;

}