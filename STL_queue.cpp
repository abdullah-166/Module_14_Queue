#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    cin >> n;
    int i;
    for(i=0;i<n;i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    cout <<"Size: " << q.size() << endl;
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}