#include<iostream>
using namespace std;

template <class T>
class abc
{
    T a;
public:
    abc() {}
    abc(T x) {a=x;}
    void set(T x);
    T get() {return a;}
    void print() {cout<<a<<endl;}
};

template <class T>
void abc<T> :: set(T x)
{
    a = x;
}

int main()
{
    abc<int> ob1(5);
    ob1.print();

    abc<double> ob2(7.6);
    ob2.print();
    ob2.set(9.1);
    ob2.print();

    abc<int> ob3(8.3);
    ob3.print();

    return 0;
}
