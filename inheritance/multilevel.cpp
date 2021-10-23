#include<iostream>
using namespace std;
//multilevel inheritance
class A
{
    public:
    void funcA()
    {
        cout<<"123"<<endl;
    }
};
class B: public A
{
    public:
    void funcB()
    {
        cout<<"456"<<endl;
    }
};
class C: public B
{
    public:
    void funcC()
    {
        cout<<"78910"<<endl;
    }
};
int main()
{
    C obj;
    obj.funcA();
    obj.funcB();
    obj.funcC();
    return 0;
}