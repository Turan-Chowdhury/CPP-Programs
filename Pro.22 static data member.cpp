#include<iostream>
using namespace std;

class abc
{
public:
    static int a;
    int b;
    abc() {b=0;}   // constructor
    void show_ab() {cout<<++a<<" "<<++b<<endl;}
};

int abc :: a;    // definition of static data member
                 // (type and scope of each static member variable must be defined outside the class definition)

int main()
{
    abc ob1, ob2;

    ob1.show_ab();
    ob2.show_ab();

    return 0;
}
