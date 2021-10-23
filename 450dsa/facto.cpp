#include<bits/stdc++.h>
using namespace std;
vector<int> factorial(int N,vector<int> &a)
{
    int fact = 1;
    while (N > 0)
    {
        fact *= N;
        N--;
    }
    int temp = fact;
    while (fact > 0)
    {
        temp = fact % 10;
        a.push_back(temp);
        fact /= 10;
    }
    reverse(a.begin(), a.end());
    return a;
}
int main()
{
    int N;
    cin>>N;
    vector<int> a;
    factorial(N,a);
    for (auto i:a)
        cout<<i<<" ";
    return 0;
}
