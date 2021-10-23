#include<iostream>
using namespace std;
int main()
{
    int n;
    int group=1;
    int arr[100000];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]!=arr[i+1])
            group++;
        else
            continue;
    }
    cout<<group; 
    return 0;
}