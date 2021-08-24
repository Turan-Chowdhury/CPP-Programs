#include<iostream>
using namespace std;

class base1
{
public:
    int a;
    base1(int x) {a=x;}
};

class base2
{
public:
    int b;
    base2(int x) {b=x;}
};

class derive : public base1, public base2
{
public:
    int c;
    derive(int x, int y, int z):base1(x),base2(y) {c=z;}
};

int main()
{
    derive ob(4,5,6);

    cout<<ob.a<<endl;
    cout<<ob.b<<endl;
    cout<<ob.c<<endl;

    return 0;
}
