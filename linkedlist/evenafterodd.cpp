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
void insertAtHead(node * &head,int val)
{
    node *n=new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head,int val)
{
    node *n = new node(val);
    if (head==NULL)
    {
        n->next=NULL;
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
node* oddevenlist(node* &head)
{
    if (!head || !head->next || !head->next->next)
        return head;
    node* even_head=head->next;
    node* odd=head;
    node* even=head->next;
    while (even && even->next)
    {
        odd->next=odd->next->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next;
    }
    odd->next=even_head;
    return head;
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
    node* head =NULL;
    int arr[]={1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    node* newhead = oddevenlist(head);
    display(newhead);
    return 0;
}