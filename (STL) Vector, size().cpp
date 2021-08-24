#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec;

    vec.push_back(10);   // vec[0] = 10;
    vec.push_back(11);   // vec[1] = 11;
    vec.push_back(12);   // vec[2] = 12;
    vec.push_back(13);   // vec[3] = 13;

    cout<<vec.size()<<endl<<endl;

    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<endl;
    cout<<endl;

    vector<int> v(3,-2);
    v.push_back(15);

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<endl;

    return 0;
}
