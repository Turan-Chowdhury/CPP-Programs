#include<iostream>
using namespace std;

int main()
{
    double *p = NULL;
    p = new double;
    *p = 5.428;
    cout<<*p<<endl;
    delete p; // delete(p);
    return 0;
}
