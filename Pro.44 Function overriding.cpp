#include<iostream>
using namespace std;

class base
{
public:
    void print() {cout<<"Base"<<endl;}
};

class derive : public base
{
public:
    void print() {cout<<"Derive"<<endl;}
};

int main()
{
    derive d;

    d.print();

    return 0;
}

