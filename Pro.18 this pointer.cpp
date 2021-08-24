#include<iostream>
using namespace std;

class rectangle
{
public:
    int height, width;
    void set(int height, int width) {this->height = height; this->width = width;}
    int area() {return height*width;}
};

int main()
{
    rectangle obj;
    obj.set(4,5);
    cout<<obj.area()<<endl;
    return 0;
}
