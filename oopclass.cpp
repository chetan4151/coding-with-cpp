// #include<iostream>
// using namespace std;
// int main()
// {
//     int number=10,ans=0;
//     try
//     {
//         ans=number/0;
//     }
//     catch(int i)
//     {
//         cout<<"Denominator not be zero";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,result;
    cout<<"Enter 1st number :";
    cin>>n1;
    cout<<"Enter 2nd number :";
    cin>>n2;
    try
    {
        if(n2==0)
            throw n2;//statement 1
        else{
            result=n1/n2;
            cout<<"\nThe result is :"<<result;
        }
    }
    catch(int x)
    {
        cout<<"\ncan't divide by:"<<x;
    }
    cout<<"\nEnd of program";
    return 0;

}