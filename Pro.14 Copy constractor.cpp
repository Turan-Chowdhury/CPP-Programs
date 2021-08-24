#include<iostream>
using namespace std;

class math
{
    int x;
public:
    math() {x=5;}
    math(math &p) {x=p.x;}
    void display() {cout<<x;}
};

int main()
{
    math A;
    math B(A);
    A.display();
    B.display();
    return 0;
}
