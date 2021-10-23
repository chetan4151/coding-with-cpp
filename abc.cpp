#include<iostream>
using namespace std;
int main()
{
     //floyd's triangle
    int count=1,n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
