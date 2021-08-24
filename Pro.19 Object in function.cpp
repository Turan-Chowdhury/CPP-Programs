#include<iostream>
using namespace std;

class rectangle
{
public:
    int height, width;
    void set(int a, int b) {height = a; width = b;}
    int area() {return height*width;}
};

rectangle scan()
{
    int m, n;
    cout<<"input height and width : ";
    cin>>m>>n;
    rectangle ob;
    ob.set(m,n);
    return ob;
}

void print(rectangle abc)
{
    cout<<"area: "<<abc.area()<<endl;
}

int main()
{
    rectangle obj;
    obj = scan();
    print(obj);
    return 0;
}
