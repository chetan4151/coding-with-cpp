#include<iostream>
using namespace std;
void printrow(int n)
{
    if(n==0)
        return;
    cout<<"*";
    printrow(n-1);
}
void printpattern(int n)
{
    if (n==0)
        return;
    printrow(n);
    cout<<"\n";
    printpattern(n-1);
}
int main()
{
    int n;
    cin>>n;
    while(n<=0)
    {
        cout<<"Enter a positive number:";
        cin>>n;
    }
    printpattern(n);
    return 0;
}