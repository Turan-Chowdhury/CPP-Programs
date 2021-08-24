#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector<int> v;
    vector<int>::iterator it;

    for(int i=1; i<=5; i++)
        v.push_back(i);

    it = v.begin();

    cout<<*it<<endl<<endl;

    it++;

    cout<<*it<<endl<<endl;

    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<endl;
    cout<<endl;

    return 0;
}
