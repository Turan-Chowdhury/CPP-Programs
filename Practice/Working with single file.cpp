#include<iostream>
#include<fstream>      // ifstream, ofstream and fstream are contained in the header file fstream
using namespace std;

int main()
{
    ofstream outf("ITEM.txt");        // connect ITEM file to outf

    cout<<"Enter item name: ";
    char name[30];
    cin>>name;

    outf<<name<<endl;

    cout<<"Enter item cost: ";
    float cost;
    cin>>cost;

    outf<<cost<<endl;

    outf.close();                    // Disconnect ITEM file from outf

    ifstream inf("ITEM.txt");        // connect ITEM file to inf

    inf>>name;
    inf>>cost;

    cout<<endl;
    cout<<"Item name: "<<name<<endl;
    cout<<"Item cost: "<<cost<<endl;

    inf.close();                    // Disconnect ITEM file from inf

    return 0;
}


