#include<iostream>
using namespace std;
int main()
{
    int i=0,a[10],k;
    cout<<"Enter the numbers: "<<endl;
    for (int i = 0; i<10; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter a value to be searched: ";
    cin>>k;
    while (i<10 && a[i]!=k)
    {
        i=i+1;
    }
    if(i<10)
    {
        cout<<k<<" is present at "<<i+1<<" position"; 
    }
    else
    {
        cout<<k<<" is not present in array!!";
    }

    return 0;
}