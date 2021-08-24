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

    it = find(mylist.begin(), mylist.end(), 22);

    if(it == mylist.end())
        cout<<"NOT FOUND!"<<endl<<endl;
    else
        cout<<"FOUND!"<<endl<<endl;

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    it = find(mylist.begin(), mylist.end(), 1);

    if(it == mylist.end())
        cout<<"NOT FOUND!"<<endl<<endl;
    else
        cout<<"FOUND!"<<endl<<endl;

    mylist.erase(it);

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"\t";
    cout<<endl;

    return 0;
}
