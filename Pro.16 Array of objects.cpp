#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    rectangle(int a) {height=a, width=a;}         /// Constructor with one parameter
    rectangle(int a, int b) {height=a, width=b;}  /// Constrictor with two parameter
    int area() {return height*width;}
};

int main()
{
    rectangle ob[5] = {0,1,2,3,4};   /// call Constructor 1

    for(int i=0; i<5; i++)
        cout<<"ob"<<i<<" Area: "<<ob[i].area()<<endl;
    cout<<endl;

    rectangle obj[5] = {rectangle(2,5),rectangle(2,10),rectangle(2,15),rectangle(2,20),rectangle(2,25)};  /// call Constructor 2

    for(int i=0; i<5; i++)
        cout<<"obj"<<i<<" Area: "<<obj[i].area()<<endl;

    return 0;
}
