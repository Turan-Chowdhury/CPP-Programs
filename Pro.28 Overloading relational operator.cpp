#include<iostream>
using namespace std;

class number
{
    int x, y;
public:
    number(int a, int b) {x=a; y=b;}
    bool operator>(number ob);
    bool operator==(number ob);
    bool operator<(number ob);
};

bool number :: operator>(number ob)
{
    return (x+y) > (ob.x+ob.y);
}

bool number :: operator==(number ob)
{
    return (x+y) == (ob.x+ob.y);
}

bool number :: operator<(number ob)
{
    return (x+y) < (ob.x+ob.y);
}

int main()
{
    number n1(3,3), n2(4,4);

    if(n1>n2)
        cout<<"n1"<<endl;
    else if(n1==n2)
        cout<<"n1=n2"<<endl;
    else
        cout<<"n2"<<endl;

    return 0;
}
