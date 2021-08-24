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
    string a="hello", b="world";
    cout<<a<<" "<<b<<endl;
    interchange(a,b);
    cout<<a<<" "<<b<<endl;

    return 0;
}
