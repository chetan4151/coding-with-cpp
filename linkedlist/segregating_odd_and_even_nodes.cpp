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
node* segregation(node* &head)
{
    node* odd=NULL;
    node* even=NULL;
    node* o=NULL;
    node* e=NULL;
    while (head)
    {
        if (head->data%2==0)
        {
            if (even==NULL)
            {
                even=head;
                e=head;
            }
            else
            {
                e->next=head;
                e=e->next;
            }
        }
        else
        {
            if (odd==NULL)
            {
                odd=head;
                o=head;
            }
            else
            {
                o->next=head;
                o=o->next;
            }
        }
        head=head->next;
    }
    if(e)
        e->next=odd;
    if(o)
        o->next=NULL;
    if(even)
        return even;
    return odd;
}
int main()
{
    node* head=NULL;
    int arr[]={12,15,2,5,43,88};
    for (int i = 0; i < 6; i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    node* newhead=segregation(head);
    display(newhead);
    return 0;
}