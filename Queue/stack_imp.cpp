//implementation of queue using two stacks with costly deQueue()
#include<bits/stdc++.h>
using namespace std;
class Queue
{
    stack<int> s1,s2;
    public:
    void enqueue(int x)
    {
        s1.push(x);
    }
    int dequeue()
    {
        if (s1.empty() && s2.empty()) 
        {
            cout << "Queue is empty";
            return -1;
        }
        if (s2.empty()) 
        {
            while (!s1.empty()) 
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x = s2.top();
        s2.pop();
        return x;
    }
};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout << q.dequeue() << '\n';
    cout << q.dequeue() << '\n';
    cout << q.dequeue() << '\n';
    cout << q.dequeue() << '\n';
    return 0;
}