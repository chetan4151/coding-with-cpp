#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void funcA()
    {
        cout<<"hurray!!";
    }
    private:
    int b;
    void funcB()
    {
        cout<<"mauj kar di!!";
    }
    protected:
    int c;
    void funcC()
    {
        cout<<"Ye hamari pawrii ho rahi hai!!";
    }
};
int main()
{
    A object;
    object.funcA();
    object.a=2;
    // object.funcB();
    // object.funcC();
    
    return 0;
}