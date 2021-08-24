#include<iostream>
using namespace std;

template <class T>
void print(T a)
{
    cout<<a<<endl;
}

int main()
{
    print("HELLO");
    print(100);

    return 0;
}
