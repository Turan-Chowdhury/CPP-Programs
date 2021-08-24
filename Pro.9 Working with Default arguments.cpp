#include<iostream>
using namespace std;

int sum(int i, int k=5);

int main()
{
    cout<<sum(6)<<endl;
    cout<<sum(9,10)<<endl;
    return 0;
}

int sum(int i, int k)
{
    return (i+k);
}
