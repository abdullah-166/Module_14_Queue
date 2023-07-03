#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node* next;
        Node(int value)
        {
            this->value=value;
            this->next=NULL;
        }
};
class MyQueue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int s = 0;
    void push(int val)
    {
        s++;
        Node* newnode = new Node(val);
        if(head == NULL)
        {
            head = newnode;
            tail =  newnode;
            return;
        }
        tail->next = newnode;
        tail = tail->next;
    }
    void pop()
    {
        s--;
        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL)
        {
            tail == NULL;
        }
    }
    int front()
    {
         return head->value;
    }
    int size()
    {
        return s;
    }
    bool empty()
    {
        if(s == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    MyQueue q;
    int n;
    cin >> n;
    int i;
    for(i=0;i<n;i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}