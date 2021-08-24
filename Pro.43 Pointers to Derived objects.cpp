#include<iostream>
using namespace std;

class BC
{
public:
    int b;
    void show() {cout<<"b = "<<b<<endl;}
};

class DC : public BC
{
public:
    int d;
    void show() {cout<<"b = "<<b<<endl;  cout<<"d = "<<d<<endl;}
};

int main()
{
    BC *bptr;
    BC base;
    bptr = &base;

    bptr->b = 100;
    cout<<"bptr points to base objects"<<endl;
    bptr->show();

    DC derived;
    bptr = &derived;

    bptr->b = 200;
    // bptr->d = 300;     WON'T WORK
    cout<<"bptr points to derived object"<<endl;
    bptr->show();

    DC *dptr;
    dptr = &derived;

    dptr->b = 300;
    dptr->d = 400;
    cout<<"dptr is derived type pointer"<<endl;
    dptr->show();

    cout<<"using ((DC *)bptr)"<<endl;
    ((DC *)bptr) -> d = 500;
    ((DC *)bptr) -> show();

    return 0;
}
