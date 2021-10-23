#include<bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &st,int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }
    int temp=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(temp);
}
void reverse_stack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int ele=st.top();
    st.pop();
    reverse_stack(st);
    insertAtBottom(st,ele);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(5);
    st.push(7);
    st.push(19);
    reverse_stack(st);
    cout<<"Reversed Stack: "<<endl;
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}