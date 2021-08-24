#include<iostream>
#include<cstring>
using namespace std;

class media
{
protected:
    char title[50];
    float price;
public:
    media(char *s, float a)
    {
        strcpy(title,s);
        price = a;
    }
    virtual void display()=0;      // Pure virtual function
};

class book : public media
{
    int pages;
public:
    book(char *s, float a, int p):media(s,a)
    {
        pages = p;
    }
    void display();
};

class tape : public media
{
    float time;
public:
    tape(char *s, float a, float t):media(s,a)
    {
        time = t;
    }
    void display();
};

void book :: display()
{
    cout<<"Title: "<<title<<endl;
    cout<<"Pages: "<<pages<<endl;
    cout<<"Price: "<<price<<endl<<endl;
}

void tape :: display()
{
    cout<<"Title: "<<title<<endl;
    cout<<"Play time: "<<time<<"mins"<<endl;
    cout<<"Price: "<<price<<endl<<endl;
}

int main()
{
    char title[50];
    float price, time;
    int pages;

    cout<<"ENTER BOOK DETAILS"<<endl;
    cout<<"Title: "; cin>>title;
    cout<<"Price: "; cin>>price;
    cout<<"Pages: "; cin>>pages;

    book book1(title, price, pages);

    cout<<endl<<"ENTER TAPE DETAILS"<<endl;
    cout<<"Title: "; cin>>title;
    cout<<"Price: "; cin>>price;
    cout<<"Play time (mins): "; cin>>time;

    tape tape1(title, price, time);

    media *list[2];
    list[0] = &book1;
    list[1] = &tape1;

    cout<<endl<<"MEDIA DETAILS"<<endl<<endl;

    cout<<".......BOOK......."<<endl;
    list[0]->display();                 // display book details

    cout<<".......TAPE......."<<endl;
    list[1]->display();                 // display tape details

    return 0;
}
