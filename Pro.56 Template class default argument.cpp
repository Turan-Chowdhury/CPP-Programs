#include<iostream>
using namespace std;

template <class T=int, int size=50>
class abc
{
    T x[size];
public:
    void print() {cout<<sizeof(x)<<endl;}
};

int main()
{
    abc<char,7> ob1;
    ob1.print();

    abc<> ob2;
    ob2.print();

    return 0;
}


