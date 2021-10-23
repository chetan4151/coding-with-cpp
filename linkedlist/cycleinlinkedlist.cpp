#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void makeCycle(node* &head, int pos)
{
    node* temp=head;
    node* start;
    int count=1;
    while (temp->next!=NULL)
    {
        if (count==pos)
        {
            start=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=start;
}
void detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast)
        {
            cout<<"Cycle detected"<<endl;
            return;
        }
    }
    cout<<"Cycle not present"<<endl;
}
void removeCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (fast!=slow);
    fast=head;
    while (fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    cout<<"Cycle removed successfully!!"<<endl;
}
void insertAtTail(node* &head,int val)
{
    node *n = new node(val);
    if (head==NULL)
    {
        n->next=head;
        head=n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node *head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"; 
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node *head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    display(head);
    detectCycle(head);
    makeCycle(head,3);
    detectCycle(head);
    removeCycle(head);
    display(head);
    return 0;
}