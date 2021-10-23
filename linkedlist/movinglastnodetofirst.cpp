//Move last element to front of a given Linked List
#include<iostream>
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
node* moving(node* &head)
{
    node* temp=head;
    node* newtail;
    if (!temp || !temp->next)
    {
        return head;
    }
    while (temp->next)
    {
        if(temp->next->next==NULL)
        {
            newtail=temp;
        }
        temp=temp->next;
    }
    temp->next=head;
    newtail->next=NULL;
    return temp;
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
    display(head);
    node* newhead=moving(head);
    display(newhead);
    return 0;
}