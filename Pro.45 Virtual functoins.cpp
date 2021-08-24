#include<iostream>
using namespace std;

class Base
{
public:
    void display() {cout<<"display base"<<endl;}
    virtual void show() {cout<<"show base"<<endl;}
};

class Derived : public Base
{
public:
    void display() {cout<<"display derived"<<endl;}
    void show() {cout<<"show derived"<<endl;}
};

int main()
{
    Base B;
    Derived D;
    Base *bptr;

    cout<<"bptr points to Base"<<endl;
    bptr = &B;
    bptr->display();     // calls Base version
    bptr->show();        // calls Base version

    cout<<endl<<"bptr points to derived"<<endl;
    bptr = &D;
    bptr->display();    // calls Base version
    bptr->show();       // calls Derived version

    return 0;
}
