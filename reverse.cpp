#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0,lastdigit,num;
    cout<<"Enter a number: ";
    cin>>n;
    num=n;
    while (n>0)
    {
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n=n/10;   
    }
    cout<<"Reverse of "<<num<<" is "<<reverse;
    return 0;
}    