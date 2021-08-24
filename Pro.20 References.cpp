#include<iostream>
using namespace std;

void f1(int &re)
{
   re = 8;
}

int& f2(int &ref)
{
    return ref;
}

int main()
{
    int a = 5;
    int &r = a;
    r = 5;
    cout<<a<<endl;
    f1(a);
    cout<<a<<endl;
    f2(a) = 6;
    cout<<a<<endl;
    return 0;
}
