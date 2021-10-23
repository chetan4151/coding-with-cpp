#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    char arr[n][m];
    for (int i = 0; i < n; i+=2)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j]='#';
        }
    }
    for (int i = 1; i < n; i+=2)
    {
        for (int j = 0; j < m; j++)
        {
            if (count%2==0 && j==m-1)
                    arr[i][j]='#';
            else if (count%2!=0 && j==0)
                    arr[i][j]='#';
            else
                arr[i][j]='.';
        }
        count++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}