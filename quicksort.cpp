#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
void QuickSort(int arr[] , int l, int h)
{
    if (l<h)
    {
        int pivot;
        pivot=partition(arr,l,h);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,h);
    }
}
int partition(int arr[],int l, int h)
{
    int i=l;
    int j=h;
    int pivot=arr[i];
    while(i<j)
    {
        while(arr[i]<=pivot)i++;
        while(arr[j]>=pivot)j--;
        if (i<j)
        {
            swap(&arr[i],&arr[j]);
        }
    }
    swap(arr[j],arr[l]);
    return j;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[5]={2,43,1,32,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    QuickSort(arr, 0, n-1);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
    
}