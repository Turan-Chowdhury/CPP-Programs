#include<iostream>
using namespace std;

template <class T>
void print(T a)
{
    cout<<a<<endl;
}

void print(double a)
{
    cout<<"override"<<endl;
}

int main()
{
    print(4);
    print(4.4);
    print("string");

    return 0;
}
