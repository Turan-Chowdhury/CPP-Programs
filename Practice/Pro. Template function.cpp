#include<iostream>
using namespace std;

/*
int add(int a, int b)
{
    return a+b;
}
double add(double a, double b)
{
    return a+b;
}
string add(string a, string b)
{
    return a+b;
}
*/

template <class T>
T add(T a, T b)
{
    return a+b;
}

int main()
{
    int num1=5, num2=6;
    cout<<add(num1,num2)<<endl;

    double num3=1.2, num4=2.3;
    cout<<add(num3,num4)<<endl;

    string s1="TURAN ", s2="CHOWDHURY";
    cout<<add(s1,s2)<<endl;

    return 0;
}
