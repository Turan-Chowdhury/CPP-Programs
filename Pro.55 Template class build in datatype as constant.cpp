#include<iostream>
using namespace std;

template <class T, int size>
class abc
{
    T x[size];
public:
    void print() {cout<<sizeof(x)<<endl;}
};

int main()
{
    abc<int,7> ob1;
    ob1.print();

    abc<char,7> ob2;
    ob2.print();

    return 0;
}

