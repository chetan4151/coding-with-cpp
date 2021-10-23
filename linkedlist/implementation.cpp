#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void display(node *head)
{
    node *temp= head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node *first = new node(1);
    node *second = new node(2);
    node *third = new node(3);
    node *fourth = new node(99);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    node *head=first;
    display(head);
    return 0;
}