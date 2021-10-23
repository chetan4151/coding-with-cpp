#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of rows and columns:";
    cin>>n>>m;
    int mat[n][m];
    cout<<"Enter a sorted matrix:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    int target;
    cout<<"Enter an element to be searched:";
    cin>>target;
    int r=0,c=m-1;
    while(r<n && c>=0)
    {
        if (mat[r][c]==target)
        {
            cout<<"Element found :Position of element:"<<r+1<<c+1;
        }
        else if (mat[r][c]>target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return 0;
}