#include<iostream>
#include<stack>
using namespace std;

void reverseSentence(string str)
{
    stack<string>s;
    for(int i=0;i<str.length();i++)
    {
        string word = "";
        while(str[i]!=' ' && i<str.length())
        {
             word+=str[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);

    reverseSentence(str);

    cout<<"\n\n";

    return 0;
}