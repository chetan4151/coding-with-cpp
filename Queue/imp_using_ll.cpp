#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
class Queue
{
    node* front;
    node* back;
    public:
    Queue()
    {
    front=NULL;
    back=NULL;
    }
    void enqueue(int x)
    {
        node* n = new node(x);
        if (!front)
        {
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=n;
    }
    void dequeue()
    {
        if (!front)
        {
            cout<<"no element in queue"<<endl;
            return;
        }
        node* todelete= front;
        front=front->next;
        delete todelete;
    }
    int peek()
    {
        if (!front)
        {
            cout<<"no element in queue"<<endl;
            return -1;        
        }
        return front->data;
    }
    bool empty()
    {
        if (!front)
            return true;
        return false;        
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(111);
    q.enqueue(1111);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}