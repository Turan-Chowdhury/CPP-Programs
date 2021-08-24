#include<iostream>
using namespace std;

class base
{
public:
    int a;
};

class derive : public base
{
public:
    int b;
};

int main()
{
    derive d;

    d.a = 5;
    cout<<d.a<<endl;

    d.b = 6;
    cout<<d.b<<endl<<endl;

    base *p;

    p = &d;

    //p->a = 7;
    cout<<p->a<<endl;

    ///p->b = 8;        WON'T WORK

    return 0;
}

