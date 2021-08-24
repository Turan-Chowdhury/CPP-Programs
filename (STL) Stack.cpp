#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("dipta");
    s.push("arnob");
    s.push("nabil");
    s.push("turan");

    cout<<s.top()<<endl<<endl;

    s.pop();

    cout<<s.top()<<endl<<endl;

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}
