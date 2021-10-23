#include<iostream>
using namespace std;
int main()
{
    //palindrome
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=1;
    int i=0;
    while(arr[i]!='\0')
    {
        if (arr[i]!=arr[n-1-i])
        {
            check=0;
            break;
        }
        else
            i++;
    }
    if (check==1)
    {
        cout<<arr<<" is a palindrome word.";
    }
    else
        cout<<arr<<" is not a palindrome word.";
    return 0;
}