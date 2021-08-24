#include<iostream>
using namespace std;

class CSE
{
    int x, y, z;
public:
    CSE(int m, int n) {x=m, y=n;}
    CSE(int p) {z=p;}
    void display() {cout<<x<<endl<<y<<endl<<z<<endl<<endl;}
};

int main()
{
    CSE c1(5,6); // CSE c1 = CSE(5,6);
    CSE c2(10);
    c1.display();
    c2.display();
    return 0;
}
