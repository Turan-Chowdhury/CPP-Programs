#include<iostream>
using namespace std;

class number
{
    int x, y;
public:
    number(int a, int b) : x(a), y(b) {}
    friend void operator<<(ostream &s, number ob)
    {
        s<<ob.x<<" "<<ob.y<<endl;
    }
};

int main()
{
    number n(4,5);
    cout<<n;
    return 0;
}
