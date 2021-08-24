#include<iostream>
using namespace std;

class rectangle
{
    int height;
    int width;
public:
    void set(int a, int b) {height=a, width=b;}
    int area() {return height*width;}
};

int main()
{
    rectangle ob1, ob2;
    ob1.set(5,6);
    ob2.set(10,7);

    cout<< "Before assign:"<<endl<<endl;
    cout<<"ob1 Area: "<<ob1.area()<<endl;
    cout<<"ob2 Area: "<<ob2.area()<<endl<<endl;

    ob1 = ob2;

    cout<< "After assign:"<<endl<<endl;
    cout<<"ob1 Area: "<<ob1.area()<<endl;
    cout<<"ob2 Area: "<<ob2.area()<<endl<<endl;

    return 0;
}
