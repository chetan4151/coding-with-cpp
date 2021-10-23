//not completed
#include<iostream>
#include <algorithm>
#include<set>
using namespace std;
int leastFrequent(int arr[], int n)
{
	// Sort the array
	sort(arr, arr + n);

	// find the min frequency using linear traversal
	int min_count = n+1, res = -1, curr_count = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1])
			curr_count++;
		else {
			if (curr_count < min_count) {
				min_count = curr_count;
				res = arr[i - 1];
			}
			curr_count = 1;
		}
	}

	// If last element is least frequent
	if (curr_count < min_count)
	{
		min_count = curr_count;
		res = arr[n - 1];
	}

	return min_count;
}
int main()
{
    int n,k,a,b;
    cin>>n>>k;
    int arr[n];
    set<int> values;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        values.insert(arr[i]);
    }
    a= leastFrequent(arr, n);
    cout<<a<<" "<<b<<endl;
    b= values.size();
    cout<<(a*b*k)-n;
    return 0;
}