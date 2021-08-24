#include<iostream>
using namespace std;

char volume(int);
int volume(int);
int volume(int, int);
long volume(long, double, int);

int main()
{
    cout<<volume(5)<<endl;
    cout<<volume(20,75)<<endl;
    cout<<volume(100L,88.74,15)<<endl;
    return 0;
}

char volume(int c)
{
    return c;
}

int volume(int s)
{
    return (s*s*s);
}

int volume(int r, int h)
{
    return (3.1416*r*h);
}

long volume(long l, double b, int i)
{
    return (l*b*i);
}

