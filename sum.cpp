#include<iostream>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter a number upto which sum is required:";
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of first "<<n<<" numbers is "<<sum;
    return 0;
}