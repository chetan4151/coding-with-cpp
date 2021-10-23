#include<iostream>
using namespace std;
int main()
{
    bool flag=0;
    int n;
    cout<<"Please enter a +ve number greater than 1: ";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag=1;
            cout<<n<<" is not a prime number!!";
            break;
        }
        
    }
    if (flag==0)
    {
        cout<<n<<" is a prime number!!";
    }
    return 0;
}