#include<iostream>
using namespace std;

class M
{
protected:
    int m;
public:
    void set_m(int);
};

class N
{
protected:
    int n;
public:
    void set_n(int);
};

class P : public M, public N
{
public:
    void display();
};

void M :: set_m(int x)
{
    m = x;
}

void N :: set_n(int y)
{
    n = y;
}

void P :: display()
{
    cout<<"m = "<<m<<endl;
    cout<<"n = "<<n<<endl;
    cout<<"m*n = "<<m*n<<endl;
}

int main()
{
    P p;

    p.set_m(10);
    p.set_n(20);

    p.display();

    return 0;
}
