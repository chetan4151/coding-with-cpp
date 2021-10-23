#include<iostream>
using namespace std;
//multiple inheritance
class A
{
    public:
    void funcA()
    {
        cout<<"12345"<<endl;
    }
};
class B
{
    public:
    void funcB()
    {
        cout<<"678910"<<endl;
    }
};
class C: public A, public B
{
};
int main()
{
    C obj;
    obj.funcA();
    obj.funcB();
}