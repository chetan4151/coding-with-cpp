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
int length(node* &head)
{
    node* temp=head;
    int count=0;
    while (temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
node* appendk(node* &head,int k)
{
    int l =length(head);
    node* newtail;
    node*newhead=head;
    node* temp=head;
    int count=1;
    if (k<l && k>0)
    {
      
        while (temp->next!=NULL)
        {
            if (count==l-k)
                newtail=temp;
            if (count==l-k+1)
                newhead=temp;
            temp=temp->next;
            count++;
        }
        if(k==1)
            newhead=temp;
        temp->next=head;
        newtail->next=NULL;
    }
    return newhead;
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
    node* head=NULL;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    node* newhead=appendk(head,5);
    display(newhead);
    return 0;
}