#include<iostream>
using namespace std;

class complex
{
    float x;       // real part
    float y;       // imaginary part
public:
    complex() {}                                       // constructor 1
    complex(float real, float imag) {x=real; y=imag;}  // constructor 2
    complex operator+(complex);
    void display() {cout<<x<<" + j"<<y<<endl;}
};

complex complex :: operator+(complex c)
{
    complex temp;   // temporary
    temp.x = x + c.x;
    temp.y = y + c.y;
    return(temp);
}

int main()
{
    complex c1, c2, c3;        // invokes constructor 1
    c1 = complex(2.5, 3.5);    // invokes constructor 2
    c2 = complex(1.6, 2.7);    // invokes constructor 2

    c3 = c1 + c2;

    cout<<"c1 = ";
    c1.display();

    cout<<"c2 = ";
    c2.display();

    cout<<"c3 = ";
    c3.display();

    return 0;
}
