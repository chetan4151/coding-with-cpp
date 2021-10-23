#include<iostream>
using namespace std;
int main()
{
    int n,x=0;
    string s;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if (s=="++X" || s=="X++")
            x+=1;
        else if(s=="--X" || s=="X--")
            x-=1;
        else
            continue;
    }
    cout<<x;
    return 0;
}