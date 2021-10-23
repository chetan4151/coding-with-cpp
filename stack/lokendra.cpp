#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
} 
int main()
{
    int n;
    cin >> n;

    int A[n];
    for(int i=0 ; i<n ; i++)
        cin >> A[i];

    stack<int> Stk;
    int B[n];
    for(int i=n-1 ; i>=0 ; i--){
        while(Stk.size()!=0){
            if(Stk.top() > A[i]){
                B[i] = Stk.top();
                Stk.push(A[i]);
                break;
            }
            else
                Stk.pop();
        }
        if(Stk.size()==0){
            Stk.push(A[i]);
            B[i]=-1;
        }
    }
    reverseArray(B,0,n-1);
    for(int i=0 ; i<n ; i++)
        cout<<B[i]<<endl;
}