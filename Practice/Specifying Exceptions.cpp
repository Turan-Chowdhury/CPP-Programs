#include<iostream>
using namespace std;

void test(int x) throw(int, double)
{
    if(x==0) throw 'x';                    // char
    else
        if(x==1) throw x;                  // int
    else
        if(x==-1) throw 1.0;               // double
    cout<<"End of function block"<<endl;
}

int main()
{
    try
    {
        cout<<"Testing Throw Restrictions"<<endl;
        cout<<"x == 0"<<endl;
        test(0);
        cout<<"x == 1"<<endl;
        test(1);
        cout<<"x == -1"<<endl;
        test(-1);
        cout<<"x == 2"<<endl;
        test(2);
    }
    catch(char c)
    {
        cout<<"Caught a character"<<endl;
    }
    catch(int i)
    {
        cout<<"Caught an integer"<<endl;
    }
    catch(double d)
    {
        cout<<"Caught a double"<<endl;
    }

    cout<<"End of try-catch system"<<endl;

    return 0;
}
