#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;

    fout.open("country.txt");

    fout<<"United States of America"<<endl;
    fout<<"United Kingdom"<<endl;
    fout<<"South Korea"<<endl;

    fout.close();

    fout.open("capital.txt");

    fout<<"Washington"<<endl;
    fout<<"London"<<endl;
    fout<<"Seoul"<<endl;

    fout.close();

    const int N = 80;
    char line[N];

    ifstream fin;

    fin.open("country.txt");

    cout<<"Contents of country file"<<endl;

    while(fin)                     // check end-of-file
    {
        fin.getline(line,N);
        cout<<line<<endl;
    }

    fin.close();

    fin.open("capital.txt");

    cout<<"Contents of capital file"<<endl;

    while(fin)
    {
        fin.getline(line,N);
        cout<<line<<endl;
    }

    fin.close();

    return 0;
}
