#include<iostream>
using namespace std;

int count=0;

class test
{
public:
    test()
     {
        cout<<"Constructor created ";
        cout<<++count<<endl;
     }
    ~test()
     {
        cout<<"Called destructor ";
        cout<<count--<<endl;
     }
};

int main()
{
    test t1;
     {
        test t2, t3, t4;
        cout<<endl;
     }
    return 0;
}
