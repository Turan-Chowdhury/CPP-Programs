#include<iostream>
using namespace std;

class exampleconst
{
public:
    int a;
    exampleconst() {a = 10;}
    int change(int x) const
    {
        x = x+a;
        return x;
    }
};

int main()
{
    const int a = 123;
    int arr[a];

    exampleconst ob;
    cout<<ob.change(4)<<endl;
    ob.a = 6;
    cout<<ob.change(4)<<endl;
    int i = 3;

    const int& r = i;
    i = 5;
    cout<<r<<endl;
    i = 4;
    cout<<r<<endl;
    return 0;
}
