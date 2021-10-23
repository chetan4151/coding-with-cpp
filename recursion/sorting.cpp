#include<iostream>
using namespace std;
// minimum index finder

int minIndex(int arr[], int s, int e)
{
	int sml = INT32_MAX;
	int mindex;
	for (int i = s; i < e; i++) {
		if (sml > arr[i]) {
			sml = arr[i];
			mindex = i;
		}
	}
	return mindex;
}

void sort(int arr[], int start_index, int end_index)
{
	if (start_index >= end_index)
		return;
	int min_index;
	int temp;

	// minIndex() returns index of minimum value in
	// array arr[start_index...end_index]
	min_index = minIndex(arr, start_index, end_index);

	// swap the element at start_index and min_index
	swap(arr[start_index], arr[min_index]);

	sort(arr, start_index + 1, end_index);
}
int main()
{
    int n,arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,0,n-1);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}

