#include<iostream>
using namespace std;
int main()
{
    int n,k,arr[n];
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = n-1; i >=0; i--)
    {
        if (arr[i]==arr[k-1])
            cout<<i+1;
            break;
    }
    return 0;
}