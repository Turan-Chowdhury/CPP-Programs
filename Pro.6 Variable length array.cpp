#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter array size : ";
    cin>>n;

    int i, a[n];

    cout<<endl<<"Printing array : "<<endl;

    for(i=0;i<n;i++)
    {
        a[i] = i+1;
        cout<<a[i]<<endl;
    }

    return 0;
}
