#include<iostream>
using namespace std;

class abc
{
public:
    static int a;
    static int b;
    abc() {b=0;}   // constructor
    static void show_ab() {cout<<++a<<" "<<++b<<endl;}  // A static function can gave access to only other static members.
};                                  // A static member function can be called using the class name(instead of its objects)
                                    // as follows:   class_name :: function_name();

int abc :: a;    // definition of static data member
int abc :: b;    // definition of static data member
                 // (type and scope of each static member variable must be defined outside the class definition)

int main()
{
    abc ob1, ob2;

    ob1.show_ab();
    ob2.show_ab();

    abc :: show_ab();

    return 0;
}
