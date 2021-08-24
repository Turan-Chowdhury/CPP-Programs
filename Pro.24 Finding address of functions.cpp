#include<iostream>
using namespace std;

int sum(int x, int y)
{
    return x+y;
}

void abc(int a)
{
    cout<<a<<endl;
}

int main()
{
    int (*p1)(int,int);
    p1 = sum;
    cout<<p1<<endl;
    cout<<p1(5,4)<<endl<<endl;

    void (*p2)(int);
    p2 = abc;
    cout<<p2<<endl;
    p2(100);

    return 0;
}
