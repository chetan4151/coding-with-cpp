// #include<iostream>
// using namespace std;
// int main()
// {
//     int t,a,b,ans=0;
//     cin>>t;
//     for (int i = 1; i <= t; i++)
//     {
//         cin>>a>>b;   
//         while(a%b!=0)
//         {
//             a++;
//             ans++;
//         }
//         cout<<ans<<endl;      
//         ans=0;
//     }
//     return 0;
// }
// // #include<iostream>
// // using namespace std;
// // void answer(int t,int a[],int b[])
// // {
// //     int ans=0;
// //     for (int i = 1; i <= t; i++)
// //     {
// //         while(a[i]%b[i]!=0)
// //         {
// //             a[i]++;
// //             ans++;
// //         }
// //         cout<<ans<<endl;      
// //         ans=0;
// //     }
// // }
// // int main()
// // {
// //     int t,a[10000],b[10000];
// //     cin>>t;
// //     for (int i = 1; i <= t; i++)
// //     {
// //         cin>>a[i]>>b[i];
// //     }
// //     answer(t,a,b);
// //     return 0;
// // }
// #include<iostream>
// using namespace std;

// int main()
// {
//     int t,a,b,ans=0;
//     cin>>t;
//     while (t--)
//     {
//         ans=0;
//         cin>>a>>b;
//         while(a%b)
//         {
//             a++;
//             ans++;
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
// 
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long t, ans;
    double a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        ans = ceil(a/b)*b;
        cout<<long(ans-a)<<endl;
    }
    return 0;
}