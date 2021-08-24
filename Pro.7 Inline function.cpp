#include<iostream>
using namespace std;

inline int prod(int a, int b)
{
    int x;
    x = a*b;
    return x;
}

int main()
{
    int p;
    p = prod(4+6,8+2);
    cout<<p<<endl;
    return 0;
}


