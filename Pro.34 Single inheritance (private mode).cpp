#include<iostream>
using namespace std;

class B
{
    int a;
public:
    int b;
    void set_ab();
    int get_a();
};
class D : private B
{
    int c;
public:
    void mul();
    void display();
};
//-------------------------------------------------
void B :: set_ab()
{
    cout<<"Enter values of a and b: ";
    cin>>a>>b;
}
int B :: get_a()
{
    return a;
}
void D :: mul()
{
    set_ab();
    c = b * get_a();
}
void D :: display()
{
    cout<<"a = "<<get_a()<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl<<endl;
}
//-------------------------------------------------
int main()
{
    D d;
    //d.set_ab();   WON'T WORK
    d.mul();
    d.display();

    //d.b = 20;   WON'T WORK
    d.mul();
    d.display();

    return 0;
}

