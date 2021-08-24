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
    cout<<"Roll No: "<<roll_number<<endl;
}

class test : public student
{
protected:
    float part1;
    float part2;
public:
    void get_mark(float, float);
    void put_mark();
};

void test :: get_mark(float x, float y)
{
    part1 = x;
    part2 = y;
}

void test :: put_mark()
{
    cout<<"Marks obtained:"<<endl;
    cout<<"Part1: "<<part1<<endl;
    cout<<"Part2: "<<part2<<endl;
}

class sports
{
protected:
    float score;
public:
    void get_score(float);
    void put_score();
};

void sports :: get_score(float s)
{
    score = s;
}

void sports :: put_score()
{
    cout<<"Sports wt: "<<score<<endl<<endl;
}

class result : public test, public sports
{
    float total;
public:
    void display();
};

void result :: display()
{
    total = part1+part2+score;
    put_roll_number();
    put_mark();
    put_score();
    cout<<"Total Score: "<<total<<endl;
}

int main()
{
    result student1;

    student1.get_roll_number(1234);
    student1.get_mark(27.5,33.0);
    student1.get_score(6.0);

    student1.display();

    return 0;
}

