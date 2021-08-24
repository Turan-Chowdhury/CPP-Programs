#include<iostream>
using namespace std;

class XYZ;

class ABC
{
    int a;
public:
    void set_value(int i) {a=i;}
    friend void max(XYZ, ABC);
};

class XYZ
{
    int x;
public:
    void set_value(int i) {x=i;}
    friend void max(XYZ, ABC);
};

void max(XYZ m, ABC n)
{
    if(m.x>=n.a)
        cout<<m.x<<endl;
}

int main()
{
    ABC abc;
    abc.set_value(10);
    XYZ xyz;
    xyz.set_value(20);
    max(xyz,abc);
    return 0;
}
