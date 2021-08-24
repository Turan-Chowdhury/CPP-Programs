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
    print(1);
    print(2,3);

    return 0;
}
