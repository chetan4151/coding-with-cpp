#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    int n,sum=0,lastdigit,num;
    cout<<"Enter a number: ";
    cin>>n;
    num=n;
    while (n>0)
    {
        lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if (sum==num)
    {
        cout<<num<<" is an armstrong number!!";
    }
    else
    {
        cout<<num<<" is not an armstrong number!!";
    }
    return 0;

}