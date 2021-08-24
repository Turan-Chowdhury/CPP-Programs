#include<iostream>
using namespace std;

template <class T1, class T2>
void print(T1 a, T2 b)
{
    cout<<a<<" "<<b<<endl;
}

int main()
{
    print(1,2);
    print(1,2.2);
    print(1,"T");

    return 0;
}
