#include<bits/stdc++.h>
using namespace std;
#define n 20
class Queue
{
    int* arr;
    int front;
    int back;
    public:
    Queue()
    {
        arr = new int[n];
        front=-1;
        back=-1;
    }
    void enqueue(int x)
    {
        if (back==n-1)
        {
            cout<<"Queue overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if (front==-1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (front==-1 or front>back)
        {
            cout<<"no element in queue"<<endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front==-1 or front>back)
        {
            cout<<"no element in queue"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front==-1 or front>back)
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