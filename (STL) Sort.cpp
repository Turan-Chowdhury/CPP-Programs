#include<iostream>
#include<vector>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

bool myfunc(int a, int b)
{
    return (a>b);
}

int main()
{
    vector<int> v;
    vector<int>::iterator it;

    v.push_back(10);
    v.push_back(432);
    v.push_back(31);
    v.push_back(50);
    v.push_back(95);

    sort(v.begin(),v.end());

    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    sort(v.begin(), v.end(), myfunc);

    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    sort(v.begin(),v.begin()+3);

    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<"\t";
    cout<<endl;

    return 0;
}
