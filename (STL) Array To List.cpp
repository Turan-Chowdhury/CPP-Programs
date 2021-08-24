#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    int ar[5]={5,2,1,6,3};

    list<int> mylist(ar,ar+5);
    list<int>::iterator it;

    cout<<mylist.size()<<endl;

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"\t";
    cout<<endl;

    return 0;
}
