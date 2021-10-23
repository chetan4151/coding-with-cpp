#include<iostream>
using namespace std;
int main()

{
    int n;
    int arr[n];
    cout<<"How many elements youu want in array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        int cur = arr[i];
        int j = i-1;
        while(arr[j]>cur && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=cur;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;

}