#include<iostream>
using namespace std;

template <class T>
void print(T a)
{
    cout<<a<<endl;
}

template <class T1, class T2>
void print(T1 a, T2 b)
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    print(3);
    print(1,2);
    print(1,"turan");

    return 0;
}

