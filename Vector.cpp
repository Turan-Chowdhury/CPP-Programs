#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int cmp(int a, int b)
{
    if(a<b)
        return 1;
    else
        return 0;
}

int main()
{
    vector<int> v;

    v.push_back(16);
    v.push_back(32);
    v.push_back(55);
    v.push_back(99);
    v.push_back(23);

    cout<<v.size()<<endl;
    cout<<"printing all values : "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;

    ///inserting in vector

    v.insert(v.begin()+2, 88);

    cout<<endl<<"after inserting : "<<v.size()<<endl;
    cout<<"printing all values : "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;

    ///deleting from vector

    v.erase(v.begin()+2, v.begin()+5);

    cout<<endl<<"after deleting : "<<v.size()<<endl;
    cout<<"printing all values : "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;

    ///sorting a vector

    v.push_back(78);
    v.push_back(9);

    cout<<endl<<v.size()<<endl;
    cout<<"printing all values : "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;

    sort(v.begin(), v.end(), cmp);

    cout<<endl<<"after sorting : "<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;

    return 0;
}

