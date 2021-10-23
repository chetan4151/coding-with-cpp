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
    void deleteAtHead(node* &head)
    {
        node* todelete = head;
        head = head->next;
        delete todelete;
    }
    node* removeElements(node* &head, int val) {
        if (head==NULL)
            return head;
        node* temp = head;
        while(temp->next!=NULL){
            if(temp->next->data==val){
                node* todelete=temp->next;
                temp->next=temp->next->next;
                delete todelete;
            }
            else
                temp=temp->next;
        }
        if(head->data==val)
            deleteAtHead(head);
        return head;
    }
};

int main()
{
    Solution obj;
    node *head = NULL;
    obj.insertAtTail(head,1);
    obj.insertAtTail(head,2);
    obj.insertAtTail(head,3);
    obj.insertAtTail(head,4);
    obj.insertAtTail(head,5);
    obj.insertAtTail(head,2);
    obj.insertAtTail(head,1);
    obj.display(head);
    node* newhead=obj.removeElements(head,1);
    obj.display(newhead);
    return 0;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* deleteAtHead(ListNode* &head)
//     {
//         ListNode* todelete = head;
//         head = head->next;
//         delete todelete;
//         return head;
//     }
//     ListNode* removeElements(ListNode* head, int val) {
//         if (head==NULL)
//             return NULL;
//         ListNode* temp = head;
//         while(temp->next!=NULL){
//             if(temp->next->val==val){
//                 ListNode* todelete=temp->next;
//                 temp->next=temp->next->next;
//                 delete todelete;
//             }
//             else
//                 temp=temp->next;
//         }
//         if(head->val==val){
//             // return head->next;
//             deleteAtHead(head);
//         }
            
//         return head;   
//     }
// };