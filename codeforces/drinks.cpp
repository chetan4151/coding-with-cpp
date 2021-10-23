#include<iostream>
using namespace std;
int main()
{
    int n;
    double ans,arr[100],sum=0.0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ans=sum/n;
    cout<<ans;
    return 0;
}
