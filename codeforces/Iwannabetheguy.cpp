#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,p,q,arr1[100],arr2[100],arr3[100];
    bool check=false;
    cin>>n;
    cin>>p;
    for (int i = 1; i <= p; i++)
    {
        cin>>arr1[i];
    }
    cin>>q;
    for (int i = 1; i <=q; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 1; i <= n; i++)
    {
        arr3[i]=0;
    }
    for (int i = 1; i <= p; i++)
    {
        arr3[arr1[i]]+=1;
    }
    for (int i = 1; i <=q; i++)
    {
        arr3[arr2[i]]+=1;
    }
    for (int i = 1; i <=n; i++)
    {
        if (arr3[i]==0)
        {
            check=true;
            break;
        }
    }
    if (check==true)
        cout<<"Oh, my keyboard!";
    else
        cout<<"I become the guy.";
    return 0;
}