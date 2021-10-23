#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k) 
{
    map<int , int> m;
    for(int i=l;i<=r;i++)
    {
        m[arr[i]]+=1;
    }
    int freq=0;
    for(auto it=m.begin();it!=m.end();it++)
    {
        freq+=it->second;
        if(freq>=k)
            return it->first;
    }
}
int main()
{
    int arr[]={3,4,6,1,7};
    cout<<kthSmallest(arr,0,4,3);   
    return 0;
}
