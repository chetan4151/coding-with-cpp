#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==k)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
    int n,k;
    cout<<"How many elements you want in the array: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the key you want to searchin the array: ";
    cin>>k;
    cout<<"Index of "<<" k is: "<<linearsearch(arr,n,k)<<endl;
    return 0;
}