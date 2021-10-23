#include<bits/stdc++.h>
using namespace std;
void segregate(int arr[] , int n){
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<0)
        {
            if(i!=j)
                swap(arr[i],arr[j]); //we will swap the -ve num with element which is in starting
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }    
}
int main()
{
    int arr[]={-84,2,-2,73,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    segregate(arr,n);
    return 0;
}