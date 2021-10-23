// //implementation of stack using queues with costly push()
// #include<bits/stdc++.h>
// using namespace std;
// class Stack
// {
//     queue<int> q1,q2;
//     int N;
//     public:
//     Stack()
//     {
//         N=0;
//     }
//     void push(int x)
//     {
//         q2.push(x);
//         N++;
//         while (!q1.empty())
//         {
//             q2.push(q1.front());
//             q1.pop();
//         }
//         queue<int> temp;
//         temp=q1;
//         q1=q2;
//         q2=temp;
//     }
//     void pop()
//     {
//         if (q1.empty())
//         {
//             cout<<"Stack is empty"<<endl;
//             return;
//         }
//         q1.pop();
//         N--;
//     }
//     int top()
//     {
//         if (q1.empty())
//         {
//             cout<<"Stack is empty"<<endl;
//             return -1;
//         }
//         return q1.front();
//         q1.pop();
//     }
//     int size()
//     {
//         return N;
//     }
//     bool empty()
//     {
//         if (q1.empty())
//             return true;
//         return false;
//     }
// };
// int main()
// {
//     Stack st;
//     st.push(19);
//     st.push(10);
//     st.push(100);
//     st.push(1000);
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
//     cout<<st.empty()<<endl;
//     st.pop();
//     st.pop();
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
//     cout<<st.empty()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     cout<<st.size()<<endl;
//     cout<<st.empty()<<endl;
//     return 0;
// }
//implementation of stack using queues with costly pop()
#include<bits/stdc++.h>
using namespace std;
class Stack
{
    queue<int> q1,q2;
    int N;
    public:
    Stack()
    {
        N=0;
    }
    void push(int x)
    {
        q1.push(x);
        N++;
    }
    void pop()
    {
        if (q1.empty())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp=q2;
        q2=q1;
        q1=temp;
    }
    int top()
    {
        if (q1.empty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();
        q2.push(ans);
        queue<int> temp=q2;
        q2=q1;
        q1=temp;
        return ans;
    }
    int size()
    {
        return N;
    }
    bool empty()
    {
        if (q1.empty())
            return true;
        return false;
    }
};
int main()
{
    Stack st;
    st.push(19);
    st.push(10);
    st.push(100);
    st.push(1000);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    return 0;
}