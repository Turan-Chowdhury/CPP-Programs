#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main()
{
    const int size = 80;
    char line[size];

    ifstream fin1, fin2;
    fin1.open("country.txt");
    fin2.open("capital.txt");

    for(int i=1;i<=10;i++)
    {
        if(fin1.eof()!=0)
        {
            cout<<"Exit from country"<<endl;
            exit(1);
        }
        fin1.getline(line,size);
        cout<<"Capital of "<<line<<endl;

        if(fin2.eof()!=0)
        {
            cout<<"Exit from capital"<<endl;
            exit(1);
        }
        fin2.getline(line,size);
        cout<<line<<endl;
    }

    return 0;
}
