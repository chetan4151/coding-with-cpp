// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,arr[100];
//     bool check=false;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
       
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==1)
//         {
//             check=true;
//             cout<<"HARD";
//             break;
//         }
//         else
//             continue;
//     }
//     if (check==false)
//     {
//         cout<<"EASY";
//     }    
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    while(n>0)
    {
        cin>>i;
        if (i==1)
        {
            cout<<"HARD";
            return 0;
        }
        else
            n--;
    }
    cout<<"EASY";
    return 0;
}