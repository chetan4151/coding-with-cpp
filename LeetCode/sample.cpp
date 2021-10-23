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
class Solution {
public:
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
    node* reverseList(node* &head){
        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;
        while (currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
        }
        return prevptr;
    }
};

int main()
{
    Solution obj;
    node *head = NULL;
    obj.insertAtTail(head,1);
    obj.insertAtTail(head,2);
    obj.insertAtTail(head,3);
    obj.insertAtTail(head,19);
    obj.display(head);
    node* newhead=obj.reverseList(head);
    obj.display(newhead);
    return 0;
}
