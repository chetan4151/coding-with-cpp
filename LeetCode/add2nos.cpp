#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int data)
    {
        val = data;
        next = NULL;
    }
};
ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *res = NULL;
    ListNode *cur = NULL;
    ListNode *temp;
    int s = 0;
    int c = 0;
    while (l1 || l2)
    {
        s = c + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        c = (s >= 10 ? 1 : 0);
        s = s % 10;
        temp = new ListNode(s);
        if (res == NULL)
            res = temp;
        else
            cur->next = temp;
        cur = temp;
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }
    if (c > 0)
    {
        temp = new ListNode(c);
        cur->next = temp;
        cur = temp;
    }
    return res;
}
void insertAtTail(ListNode* &head,int val)
{
    ListNode *n = new ListNode(val);
    if (head==NULL)
    {
        n->next=NULL;
        head=n;
        return;
    }
    ListNode *temp = head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    ListNode* l1=NULL;
    ListNode* l2=NULL;
    insertAtTail(l1,2);
    insertAtTail(l1,4);
    insertAtTail(l1,3);
    insertAtTail(l2,5);
    insertAtTail(l2,6);
    insertAtTail(l2,4);
    display(l1);
    display(l2);
    ListNode* newnode=addTwoNumbers(l1,l2);
    display(newnode);
    return 0;
}