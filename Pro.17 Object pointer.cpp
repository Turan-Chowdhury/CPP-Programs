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
    rectangle obj;
    rectangle *p;

    obj.set(5,6);
    cout<<"obj Area: "<<obj.area()<<endl<<endl;

    p = &obj;

    p->set(9,5);
    cout<<"obj Area: "<<p->area()<<endl<<endl;

    rectangle ob[5];
    ob[0].set(1,2);
    ob[1].set(2,2);
    ob[2].set(3,2);
    ob[3].set(4,2);
    ob[4].set(5,2);

    p = ob;              /// p = &ob[0];

    for(int i=0; i<5; i++)
        cout<<"ob"<<i<<" Area: "<<(p+i)->area()<<endl;

    return 0;
}

