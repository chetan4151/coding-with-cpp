//functionoverloading
#include<iostream>
using namespace std;
class functionoverloading
{
    public:
    void func()
    {
        cout<<"I am a function with no arguments"<<endl;
    }
    void func(int x)
    {
        cout<<"I am a function with int argument"<<endl;
    }
    void func(double x)
    {
        cout<<"I am a function with double argument"<<endl;
    }
};
int main()
{
    functionoverloading obj;
    obj.func();
    obj.func(5);
    obj.func(7.1);
    return 0;    
}
