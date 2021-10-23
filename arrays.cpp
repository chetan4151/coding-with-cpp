#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout<<"How many elements you want in the array:";
    cin>>n;
    int arr[n];
    // int arr[n]={1,212,32,441,4324,12};
    // arr[0]=1;
    // arr[1]=212;
    // ......
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    int max_no=INT_MIN;
    int min_no=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max_no)
        {
            max_no=arr[i];
        }
        if(arr[i]<min_no)
        {
            min_no=arr[i];
        }  
    }
    cout<<"maximum: "<<max_no<<endl;
    cout<<"minimum: "<<min_no<<endl;
    return 0;
}