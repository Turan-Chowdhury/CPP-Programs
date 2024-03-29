#include<iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    void get_roll_number(int);
    void put_roll_number();
};

void student :: get_roll_number(int a)
{
    roll_number = a;
}

void student :: put_roll_number()
{
    cout<<"Roll Number: "<<roll_number<<endl;
}

class test : public student
{
protected:
    float sub1;
    float sub2;
public:
    void get_mark(float, float);
    void put_mark();
};

void test :: get_mark(float x, float y)
{
    sub1 = x;
    sub2 = y;
}

void test :: put_mark()
{
    cout<<"Marks in SUB1: "<<sub1<<endl;
    cout<<"Marks in SUB2: "<<sub2<<endl;
}

class result : public test
{
    float total;
public:
    void display();
};

void result :: display()
{
    total = sub1+sub2;
    put_roll_number();
    put_mark();
    cout<<"Total = "<<total<<endl;
}

int main()
{
    result student1;

    student1.get_roll_number(111);
    student1.get_mark(75.00,59.5);

    student1.display();

    return 0;
}
