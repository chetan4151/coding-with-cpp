#include<iostream>
using namespace std;
void fib(int n)
{
    int t1=0;
    int t2=1;
    int next;
    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<endl;
        next=t1+t2;
        t1=t2;
        t2=next;
    }
    
    return;
}
int main()
{
    int num;
    cout<<"Enter number upto which fibonacci series to be printed: ";
    cin>>num;
    fib(num);
    return 0;
}