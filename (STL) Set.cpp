#include<iostream>
#include<set>
#include<iterator>
#include<utility>
using namespace std;

int main()
{
    set<int> s;
    set<int>::iterator it;

    s.insert(10);
    s.insert(5);
    s.insert(3);

    pair<set<int>::iterator,bool> p;
    p = s.insert(10); /// the insert function returns a pair of (iterator,bool)

    if(p.second)
        cout<<"inserted"<<endl<<endl;
    else
        cout<<"Can't insert"<<endl<<endl;

    p = s.insert(8);

    if(p.second)
        cout<<"inserted"<<endl<<endl;
    else
        cout<<"Can't insert"<<endl<<endl;

    for(it=s.begin(); it!=s.end(); it++)
        cout<<*it<<" ";
    cout<<endl<<endl;

    it = s.find(5);
    s.erase(it);    /// s.erase(s.find(5));

    for(it=s.begin(); it!=s.end(); it++)
        cout<<*it<<" ";
    cout<<endl<<endl;

    return 0;
}
