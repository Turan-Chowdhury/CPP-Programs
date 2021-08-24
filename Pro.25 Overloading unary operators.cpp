#include<iostream>
using namespace std;

class space
{
    int x, y, z;
public:
    void getdata(int a, int b, int c) {x=a; y=b; z=c;}
    void display() {cout<<x<<" "<<y<<" "<<z<<endl;}
    void operator-(); // overload unary minus
};

void space :: operator-()
{
    x = -x;
    y = -y;
    z = -z;
}

int main()
{
    space S;
    S.getdata(10,-20,30);

    cout<<"S : ";
    S.display();

    -S;              // activates operator-() function

    cout<<"S : ";
    S.display();

    return 0;
}
