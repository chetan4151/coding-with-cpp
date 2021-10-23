#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void deleteAthead(node *&head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node *todelete = head;
    temp->next = head->next;
    head = head->next;
    delete todelete;
}
void deletion(node *&head, int pos)
{
    node *temp = head;
    int count = 1;
    if (head == NULL)
    {
        return;
    }
    if (pos == 1)
    {
        deleteAthead(head);
        return;
    }
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
void insertAtHead(node * &head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}
void insertAtTail(node * &head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void display(node *&head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
int main()
{
    node *head = NULL;
    int arr1[] = {3, 4, 5, 6};
    int arr2[] = {1, 2};
    for (int i = 0; i < 4; i++)
    {
        insertAtTail(head, arr1[i]);
    }
    display(head);
    for (int i = 0; i < 2; i++)
    {
        insertAtHead(head, arr2[i]);
    }
    display(head);
    deletion(head,1);
    deletion(head,3);
    display(head);
    deleteAthead(head);
    display(head);
    return 0;
}