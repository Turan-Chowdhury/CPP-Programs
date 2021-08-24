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
    void set(T1 x, T2 y) {a=x; b=y;}
    void print() {cout<<a<<" "<<b<<endl;}
};

int main()
{
    abc<int,string> ob1(1,"name");
    ob1.print();

    abc<int,double> ob2(1,1.5);
    ob2.print();

    return 0;
}

