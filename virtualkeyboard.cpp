#include<iostream>
using namespace std;
class A
{
    public:
    virtual void display()
    {
        cout<<"12345";
    }
};
class B: public A
{
    public: void display()
    {
        cout<<"678910";
    }
};
int main()
{
    A *b;
    B d;
    b = &d;
    b->display();
    return 0;
}