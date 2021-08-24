#include<iostream>
using namespace std;

template<class T, int size>
class abc
{
    T x[size];
public:
    void print() {cout<<sizeof(x)<<endl;}
};

int main()
{
    abc<char,6> ob1;        // 1*6
    ob1.print();

    abc<int,6> ob2;         // 4*6
    ob2.print();

    abc<double,2> ob3;      // 8*2
    ob3.print();

    return 0;
}
