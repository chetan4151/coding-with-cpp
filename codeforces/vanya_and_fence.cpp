#include<iostream>
using namespace std;
int main()
{
    int n,h,width=0,height;
    cin>>n>>h;
    for (int i = 1; i <= n; i++)
    {
        cin>>height;
        if (height>h)
            width+=2;
        else
            width+=1;
    }
    cout<<width;
    return 0;
}
