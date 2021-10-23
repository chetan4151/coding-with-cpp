#include<iostream>
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
node* reverseIterative(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
node* reverseRecursive(node* &head)
{
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
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
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    display(head);
    node* newhead1 = reverseIterative(head);
    display(newhead1);
    node* newhead2 = reverseRecursive(newhead1);
    display(newhead2);

    return 0;
}