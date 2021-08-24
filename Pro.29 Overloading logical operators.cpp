#include<iostream>
using namespace std;

class number
{
    int x, y;
public:
    number(int a, int b) {x=a; y=b;}
    bool operator&&(number ob);
};

bool number :: operator&&(number ob)
{
    return (x&&y) && (ob.x&&ob.y);
}

int main()
{
    number n1(3,8), n2(0,7);

    if(n1&&n2)
        cout<<"ok"<<endl;
    else
        cout<<"error"<<endl;

    return 0;
}

