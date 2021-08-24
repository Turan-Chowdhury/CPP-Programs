#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    int ar[5]={5,2,1,6,3};

    list<int> mylist(ar,ar+5);
    list<int>::iterator it;

    if(mylist.empty())
        cout<<"EMPTY"<<endl<<endl;
    else
        cout<<"FILLED"<<endl<<endl;

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    cout<<mylist.front()<<endl<<endl;
    cout<<mylist.back()<<endl<<endl;

    mylist.pop_front();
    mylist.pop_back();

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    return 0;
}
