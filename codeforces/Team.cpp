#include<iostream>
using namespace std;
int main()
{
    int n,arr[n],one=0,zero=0,ans=0;
    cin>>n;
    while(n>0)
    {
        for (int i = 0; i < 3; i++)
        {
            cin>>arr[i];
            if (arr[i]==1)
                one++;
            else
                zero++;
        }
        if (one>=2)
        {
            ans++;
        }
        n--;
        one=0;
        zero=0;
    }
    cout<<ans;
    return 0;
}