#include<iostream>
using namespace std;

class number
{
    int x, y;
public:
    number() {x=0; y=0;}
    number(int a) {x=a; y=0;}                       /// build -> class
    number(int a, int b) {x=a; y=b;}
    void print() {cout<<x<<" "<<y<<endl<<endl;}
    operator int();                                 /// class -> build
};

number :: operator int()
{
    return x+y;
}

class number1
{
    int x;
public:
    number1() {}
    number1(int a) {x=a;}
    operator number();                             /// class -> class
};

number1 :: operator number()
{
    number temp(x);
    return temp;
}

int main()
{
    number n1(3,8), n2(5,5);
    number1 x1(5);

    /// build -> class
    int a = 2;
    n1 = a;
    n1.print();

    /// class -> build
    int b;
    b = n2;
    cout<<b<<endl<<endl;

    /// class -> class
    n1 = x1;
    n1.print();

    return 0;
}

