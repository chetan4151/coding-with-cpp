//using DNF(Dutch National Flag Algo ) ALGO
#include <bits/stdc++.h>
using namespace std;
void Sort012array(int a[], int n)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {

        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
            mid++;
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}
int main()
{
    int arr[] = {0, 2, 2, 2, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sort012array(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//using counting sort
// int count0 = 0;
// int count1 = 0;
// int count2 = 0;
// for (int i = 0; i < n; i++)
// {
//     if(arr[i]==0)
//         count0++;
//     else if (arr[i==1])
//         count1++;
//     else
//         count2++;
// }
// Putting the 0's in the array in starting.
// for (int i = 0; i < count0; i++)
//     arr[i] = 0;
// // Putting the 1's in the array after the 0's.
// for (int i = count0; i < (count0 + count1); i++)
//     arr[i] = 1;

// // Putting the 2's in the array after the 1's
// for (int i = (count0 + count1); i < n; i++)
//     arr[i] = 2;
