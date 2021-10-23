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
void SearchKey(node *head, int key)
{
    node *temp = head;
    bool check = true; 
    while(temp!=NULL)
    {
        if (temp->data==key)
        {
            check=false;
            if (temp->next==NULL)
            {
                cout<<key<<" is present in the linked list (last element)";
            }
            else
                cout<<key<<" is present before "<<temp->next->data<<" in the linked list";
        }
        temp=temp->next;
    }
    if (check)
    {
         cout<<key<<" is absent in the linked list";
    }
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
    SearchKey(head,99);
    return 0;
}
