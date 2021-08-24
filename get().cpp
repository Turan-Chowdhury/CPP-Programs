#include<iostream>
using namespace std;

int main()
{
    char c;
    cin.get(c);

    while(c!='\n')
    {
        cout<<c<<endl;
        cin.get(c);
    }

    return 0;
}
