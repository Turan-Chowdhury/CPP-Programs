#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> q;

    q.push(5);
    q.push(8);
    q.push(3);
    q.push(10);

    cout<<q.top()<<endl<<endl;

    while(!q.empty())
    {
        cout<<q.top()<<endl;
        q.pop();
    }

    cout<<endl;

    priority_queue<string> que;

    que.push("dipta");
    que.push("nabil");
    que.push("arbob");
    que.push("reza");

    while(!que.empty())
    {
        cout<<que.top()<<endl;
        que.pop();
    }

    return 0;
}
