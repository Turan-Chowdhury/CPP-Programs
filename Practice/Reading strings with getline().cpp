#include<iostream>
using namespace std;

int main()
{
    char city[20];
    int size = 20;

    cout<<"Enter city name: "<<endl;
    cin>>city;
    cout<<"City name: "<<city<<endl<<endl;

    cout<<"Enter city name again: "<<endl;
    cin.getline(city, size);
    cout<<"City name now: "<<city<<endl<<endl;

    cout<<"Enter another city name: "<<endl;
    cin.getline(city, size);
    cout<<"New city name: "<<city<<endl<<endl;

    return 0;
}
