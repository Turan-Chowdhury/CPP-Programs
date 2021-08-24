#include<iostream>
using namespace std;

class number
{
    int x, y;
public:
    number() {}
    number(int a, int b) {x=a; y=b;}
    number operator=(number ob);
    void print() {cout<<x<<" "<<y<<endl;}
};

number number :: operator=(number ob)
{
    x = ob.x;
    y = ob.y;
    return *this;
}

int main()
{
    number n1(3,8), n2(0,7), n3;

    n1.print();
    n2.print();

    n3 = n2 = n1;

    n1.print();
    n2.print();
    n3.print();

    return 0;
}

