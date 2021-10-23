#include<iostream>
using namespace std;
int main()
{
    //Given an array a[] of size n. For every i from 0 to n-1 output max (a[0],a[1],a[2],......a[i])
    int n,arr[n],mx=-199999;
    cout<<"How many elements you want in array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    
    return 0;
}