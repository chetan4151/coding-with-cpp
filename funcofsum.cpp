#include<iostream>
using namespace std;
int func_sum(int n)
{
    int sum;
    sum=(n*(n+1))/2;
    return sum;
}
int main()
{
    int sum,num;
    cout<<"Enter the number upto which sum you want: ";
    cin>>num;
    cout<<"Sum of first "<<num<<" natural numbers is :"<<func_sum(num);
    return 0;
}