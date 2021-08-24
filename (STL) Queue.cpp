#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(5);
    q.push(8);
    q.push(3);
    q.push(10);

    cout<<q.front()<<endl<<endl;

    q.pop();

    cout<<q.front()<<endl<<endl;

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
