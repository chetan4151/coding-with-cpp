//method -1 O(nlogk)
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     multiset<int, greater<int>> ms;
//     vector<int> array = {-10, 9, 7, 1, 7, 3, 4, 0, 1};
//     vector<int> MaxSlidingWindowAns;
//     int k = 4;
//     for (int i = 0; i < k; i++)
//     {
//         ms.insert(array[i]);
//     }
//     MaxSlidingWindowAns.push_back(*ms.begin());
//     for (int i = k; i < array.size(); i++)//n-k times loop chalega fir erase aur insert me lagega O(logbase2k) time=O(n-k(logbase2k))=O(nlogbase2k)=O(nlogk)
//     {   //as loop continues we have to check max in next k elements so we'll delete arr[i-k](only) not all occ..
//         ms.erase(ms.lower_bound(array[i - k]));//lower_bound(val) will return address of first occ of val in multiset
//         ms.insert(array[i]);
//         MaxSlidingWindowAns.push_back(*ms.begin());
//     }
//     for (auto i : MaxSlidingWindowAns) 
//     {
//         cout << i << endl;
//     }
//     return 0;
// }
//method-2 O(nk)
// #include<bits/stdc++.h>
// using namespace std;
// void printkmax(vector <int> &arr,int n,int k)
// {
//     for (int i = 0; i <= n-k; i++)
//     {
//         int maxi=arr[i];
//         for (int j = i; j < i+k; j++)
//         {
//             maxi=max(maxi,arr[j]);
//         }
//         cout<<maxi<<" ";
//     }    
// }
// int main()
// {
//     vector <int> arr={1,2,3,4,5,6,7,8,9,10};
//     int n = arr.size();
//     int k=3;
//     printkmax(arr,n,k);
//     return 0;
// }
// method-3 O(n) (optimal approach)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    deque <int> dq(k);
    for (int i = 0; i < n; i++)
    {
        if (!dq.empty() && dq.front()==i-k)
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()]<=arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        if (i>=k-1)
            cout<<arr[dq.front()]<<" ";
    }
    return 0;
}