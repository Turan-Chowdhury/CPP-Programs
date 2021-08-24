#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
    int ar[5]={5,2,1,6,3};

    list<int> mylist(ar,ar+5);
    list<int>::iterator it;

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    it = find(mylist.begin(), mylist.end(), 6);

    mylist.insert(it, 7);

    cout<<*it<<endl<<endl;

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    return 0;
}

