// isyana is given no. of visitors at her local theme park on
//  n consecutive days  .........record breaking day
#include<iostream>
using namespace std;
int main()
{
    int n,arr[n+1];
    arr[n]=-1;
    cout<<"Enter the number of Days:";
    cin>>n;
    if (n==1)
    {
        cout<<"Number of record breaking days:1"<<endl;
        return 0;
    }
    cout<<"Enter number of visitors: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    int mx=-2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx=max(arr[i],mx);

    }
    cout<<"Number of record breaking days:"<<ans;
    return 0;
    
}