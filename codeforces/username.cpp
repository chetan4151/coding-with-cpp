#include<iostream>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0];
    for (int i = 1; i <n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j]>max)
            {
                max=arr[j];
            }
        }
        if (arr[i]>max)
        {
            ans++;
        }  
    }
    int min = arr[0];
    for (int i = 1; i <n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j]<min)
            {
                min=arr[j];
            }
        }
        if (arr[i]<min)
        {
            ans++;
        }  
    }
    cout<<ans;
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,arr[n],ans=0;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         int j=1;
//         for (int j = 1; j < i; j++)
//         {
//             if (arr[i]<arr[j])
//             {
//                 break;
//             }
//         }
//         if (j==i)
//         {
//             ans++;
//         }
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         int j=1;
//         for (int j = 1; j < i; j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 break;
//             }
//         }
//         if (j==i)
//         {
//             ans++;
//         }
//     }
//     cout<<ans;
//     return 0;
// }