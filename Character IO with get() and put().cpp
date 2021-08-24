#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    char c;

    cout<<"INPUT TEXT"<<endl;
    cin.get(c);

    while(c!='\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }

    cout<<endl<<"Number of characters = "<<count<<endl;

    return 0;
}
