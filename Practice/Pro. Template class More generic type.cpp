
#include<iostream>
using namespace std;

template <class T1, class T2>
class abc
{
    T1 a;
    T2 b;
public:
    abc() {}
    abc(T1 x, T2 y) {a=x; b=y;}
    void set(T1 x, T2 y);
    T1 geta() {return a;}
    T2 getb() {return b;}
    void print() {cout<<a<<" "<<b<<endl;}
};

template <class T1, class T2>
void abc<T1,T2> :: set(T1 x, T2 y)
{
    a = x;
    b = y;
}

int main()
{
    abc<int,string> ob1(2,"turan");
    ob1.print();

    abc<int,double> ob2;
    ob2.set(4,5.5);
    ob2.print();

    return 0;
}
