#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void deleteAtHead(node* &head)
{
    node* todelete = head;
    head = head->next;
    delete todelete;
}
void deletion(node* &head,int val)
{
    if (head==NULL)
        return;
    if (head->next==NULL)
    {
        deleteAtHead(head);
        return;
    }
    node* temp = head;   
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* to_delete = temp->next;
    temp->next=temp->next->next;
    delete to_delete;
}
void insertAtHead(node * &head,int val)
{
    node *n=new node(val);
    n->next=head;
    head=n;
}
void display(node *head)
{
    node* temp=head;
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
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,5);
    insertAtHead(head,2);
    insertAtHead(head,1);
    display(head);
    deletion(head,5);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtHead(head);
    deleteAtHead(head);
    display(head);
    deletion(head,4);
    display(head);
    return 0;
}