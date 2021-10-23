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
bool isPalindrome(node* &head)
{
    if (!head)
        return false;
    node* slow=head;
    node* fast=head;
    while (fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    node* prev=NULL;
    node* next;
    node* curr=slow;
    while (curr)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    fast=head;
    while (prev)
    {
        if (fast->data!=prev->data)
            return false;
        fast=fast->next;
        prev=prev->next;
    }
    return true;
}
int main()
{
    node* head=NULL;
    int arr[]={1,2,3,2,1};
    for (int i = 0; i < 5; i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    cout<<isPalindrome(head);
    return 0;
}