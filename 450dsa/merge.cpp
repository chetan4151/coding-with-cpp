#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        if (arr1[i] > arr2[0])
        {
            swap(arr1[i], arr2[0]);
            sort(arr2, arr2 + m);
        }
    }
}
int main()
{
    int arr1[]={1,5,8,9};
    int arr2[]={2,3,4};
    merge(arr1,arr2,4,3);
    for (int i = 0; i < 4; i++)
    {
        cout<<arr1[i]<<" ";
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<arr2[i]<<" ";
    }
    return 0;
}