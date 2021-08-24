/*
    MAP

    arnob 42
    dipta 43
    nabil 41
    turna 39
*/

#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    map<string,int> m;
    map<string,int>::iterator it;

    m["dipta"] = 43;
    m["arnob"] = 42;
    m["nabil"] = 41;
    m["turan"] = 40;
    m["turan"] = 39;

/// m.insert(make_pair("turan",41));

    cout<<m["arnob"]<<endl;
    cout<<m["turan"]<<endl<<endl;

    it = m.begin();

    cout<< it->first <<endl;
    cout<< it->first <<" "<< it->second <<endl;

    it++;

    cout<< it->first <<endl;
    cout<< it->first <<" "<< it->second <<endl<<endl;

    for(it=m.begin(); it!=m.end(); it++)
        cout<< it->first <<" "<< it->second <<endl;
    cout<<endl;

    return 0;
}
