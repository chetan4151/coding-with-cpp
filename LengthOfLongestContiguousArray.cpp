#include<iostream>
using namespace std;
int main()
{
    int n,arr[n];
    cout<<"How many elements you want in the array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int diff=arr[i+1]-arr[i];
        
    }
    
    return 0;
}