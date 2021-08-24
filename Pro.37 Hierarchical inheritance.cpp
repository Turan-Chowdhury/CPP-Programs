#include<iostream>
using namespace std;

class info
{
    int id;
    int mark;
public:
    void get_id() {cin>>id; cout<<"Id: "<<id<<endl;}
    void get_mark() {cin>>mark; cout<<"Mark: "<<mark<<endl;}
};

class student : private info
{
public:
    void print() {get_id();}
};

class result : private info
{
public:
    void print() {get_mark();}
};

int main()
{
    student sob;
    sob.print();

    result rob;
    rob.print();

    return 0;
}
