#include<iostream>
using namespace std;
int fib(int n)
{
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2); 
}
int main()
{
    string choice;
    do
    {
        int n;
        cout<<"Enter the term of fibonacci sequence you want to know:";
        cin>>n;
        cout<<"Term "<<n<<" of fibonacci sequence :"<<fib(n);
        cout<<"\nDo you want to continue or not?(Enter yes or no):";
        cin>>choice;
        if (choice=="yes")
        {
            continue;
        }    
    }while (choice!="no");
    
    return 0;

}