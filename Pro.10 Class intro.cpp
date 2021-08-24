#include<iostream>
using namespace std;

class FIRST
{
    int m, n;
public:
    int sum;
    void input_data(int a, int b);
    void display()
    {
        cout<<"m: "<<m<<endl;
        cout<<"n: "<<n<<endl;
        cout<<"Sum: "<<sum<<endl<<endl;
    }
};

void FIRST :: input_data(int a, int b)
{
    m = a;
    n = b;
    sum = m+n;
}

int main()
{
    FIRST ob1, ob2;
    int x, y;

    cout<<"Object ob1"<<endl;
    cout<<"Enter two integer values : ";
    cin>>x>>y;
    ob1.input_data(x,y);
    ob1.display();

    cout<<"Object ob2"<<endl;
    cout<<"Enter two integer values : ";
    cin>>x>>y;
    ob2.input_data(x,y);
    ob2.display();

    cout<<"ob1.sum = "<<ob1.sum<<endl;
    cout<<"ob2.sum = "<<ob2.sum<<endl;

    return 0;
}
