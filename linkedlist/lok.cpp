#include<iostream>
using namespace std;
class Node
{
public:
    int info;
    Node *link;

};

class myStack
{
    Node *n1;
    Node *head=NULL;


public:

    void new_node(int value)
    {
        n1=new Node;
        n1->info=value;
        n1->link=NULL;
        if(head==NULL)
        {
            head=n1;
        }
        else
        {
            Node *ptr;
            ptr=head;
            while(ptr->link!=NULL)
            {
                ptr=ptr->link;
            }
            ptr->link=n1;
        }
    }
    void display()
    {
       Node *ptr;
       ptr=head;
       if(ptr == NULL)
       {
        cout<<"List is empty \n\n";
       }
       else
       {
        while(ptr != NULL)
        {
            cout<<"\n"<<ptr->info;
            ptr=ptr->link;
        }
       }
    }
};

int main()
{
  myStack stk;
  stk.new_node(10);
  stk.new_node(11);
  stk.new_node(21);
  stk.display();

  return 0;

}