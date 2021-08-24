#include<iostream>
#include<vector>
#include<utility>
#include<iterator>
using namespace std;

int main()
{
    vector< pair<int,string> > v;
    vector< pair<int,string> >::iterator it;

    v.push_back(make_pair(21,"dipta"));
    v.push_back(make_pair(22,"arnob"));
    v.push_back(make_pair(23,"turan"));

    cout<< v[0].first <<" "<< v[0].second <<endl;
    cout<< v[2].second <<endl<<endl;

    for(it=v.begin(); it!=v.end(); it++)
        cout<< it->first <<" "<< it->second <<endl;

    return 0;
}
