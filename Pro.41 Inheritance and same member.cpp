#include<iostream>
using namespace std;

class base
{
public:
    int a;
};

class derive : public base
{
public:
    int a;
    int get() {return a+base::a;}
};

int main()
{
    derive ob;

    ob.base::a = 1;
    ob.a = 5;                       /// ob.derive::a = 5;

    cout<<ob.get()<<endl;

    return 0;
}
