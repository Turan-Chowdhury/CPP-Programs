#include<iostream>
using namespace std;

template <class T>
void interchange(T &a, T &b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a=5, b=6;
    cout<<a<<" "<<b<<endl;
    interchange(a,b);
    cout<<a<<" "<<b<<endl;

    cout<<endl;

    string s1="turan", s2="chowdhury";
    cout<<s1<<" "<<s2<<endl;
    interchange(s1,s2);
    cout<<s1<<" "<<s2<<endl;

    return 0;
}

