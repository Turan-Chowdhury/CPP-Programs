#include<iostream>
using namespace std;

int main()
{
    int *p = new int[10];
    int i;

    for(i=0;i<10;i++)
    {
        p[i] = i+5;
        cout<<p[i]<<endl;
    }

    delete [] p;
    return 0;
}
