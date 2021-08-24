#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int main()
{
    list<float> mylist;
    list<float>::iterator it;

    mylist.push_back(10);
    mylist.push_back(15);
    mylist.push_front(5);
    mylist.push_front(20);
    mylist.push_back(-1);

    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    mylist.reverse();

    for(it=mylist.begin();it!=mylist.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    mylist.clear();

    cout<<mylist.size()<<endl<<endl;

    list<float> lis(3);

    for(it=lis.begin();it!=lis.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    list<float> li(3,2);

    for(it=li.begin();it!=li.end();it++)
        cout<<*it<<"\t";
    cout<<endl<<endl;

    return 0;
}
