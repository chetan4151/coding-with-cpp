//Given an unsorted array of size n. Array elements are in the range from 1 to n.
// One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers
#include<iostream>
using namespace std;
void print_no(int arr1[],int n)
{
    int arr2[n];
    for (int j = 1; j <= n; j++)
    {
        arr2[j]=0;
    }
    for (int k = 1; k <= n; k++)
    {
        arr2[arr1[k]]+=1;
    }
    for (int a = 1; a <= n; a++)
    {
        if (arr2[a]==1)
            continue;
        else if (arr2[a]==0)
        {
            cout<<"Missing number:"<<a<<endl;
        }
        else
            cout<<"Repeating number:"<<a<<endl;
    }
}
int main()
{
    int n,arr1[n];
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>arr1[i];
    }
    print_no(arr1,n);
    return 0;
}