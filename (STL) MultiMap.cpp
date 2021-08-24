#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    multimap<string,int> m;
    multimap<string,int>::iterator it;

    m.insert(make_pair("dipta",43));
    m.insert(make_pair("dipta",42));
    m.insert(make_pair("dipta",41));
    m.insert(make_pair("arnob",40));

    for(it=m.begin(); it!=m.end(); it++)
        cout<< it->first <<" "<< it->second<<endl;
    cout<<endl;

    return 0;
}

