#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter elements:";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    int *ptr;
    ptr=arr;
    cout<<"You entered:";
    for (int i = 0; i < 5; i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    return 0;
}