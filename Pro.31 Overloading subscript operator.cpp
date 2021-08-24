
#include<iostream>
using namespace std;

class number
{
    int x, arr[10];
public:
    number();
    number(int a);
    int operator [] (int a);
};

number :: number()
{
    x = 1;
    for(int i=1; i<=10; i++)
        arr[i-1] = x*i;
}

number :: number(int a)
{
    x = a;
    for(int i=1; i<=10; i++)
        arr[i-1] = x*i;
}

int number :: operator [] (int a)
{
    return arr[a-1];
}

int main()
{
    number n1(4), n2(7), n3;

    cout<<n1[3]<<endl;  // 4*3
    cout<<n2[3]<<endl;  // 7*3
    cout<<n3[3]<<endl;  // 1*3

    return 0;
}

