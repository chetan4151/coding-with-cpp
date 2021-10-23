// #include<iostream>
// using namespace std;
// int firstocc(int arr[],int n,int i,int k)
// {
//     if (i==n)
//     {
//         return -1;
//     }
//     if (arr[i]==k)
//     {
//         return i;
//     }
//     return firstocc(arr,n,i+1,k);    
// }
// int lastocc(int arr[],int n,int i,int k)
// {
//     if (i==n)
//     {
//         return -1;
//     }
    
//     int restArray=lastocc(arr,n,i+1,k);
//     if (restArray!=-1)
//     {
//         return restArray;
//     }
//     if (arr[i]==k)
//     {
//         return i;
//     }
//     return -1;
// }
// int main()
// {
//     int arr[]={1,1,3,2,5,2,9};
//     cout<<lastocc(arr,7,0,2)<<endl;
//     cout<<firstocc(arr,7,0,2);
//     return 0;
// }
#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int k)
{
    if (i==n)
        return -1;
    if (arr[i]==k)
        return i;
    return firstocc(arr,n,i+1,k);    
}
int lastocc(int arr[],int i,int key)
{
  if(i==0)
    return -1;
  if(arr[i]==key)
    return i;
  return lastocc(arr,i-1,key);
}
int main()
{
    int arr[]={1,1,3,2,5,2,9};
    cout<<lastocc(arr,6,2)<<endl;
    cout<<firstocc(arr,7,0,2);
    
    return 0;
}