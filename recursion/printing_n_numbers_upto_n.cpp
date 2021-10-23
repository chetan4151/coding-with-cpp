#include<iostream>
using namespace std;
void dec_print(int n)
{
    if (n==0)
    {
        return ;
    }
    cout<<n<<endl;
    dec_print(n-1);
}
void inc_print(int n)
{
    if (n==1)
    {
        cout<<"1"<<endl;
        return ;
    }
    inc_print(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    dec_print(n);
    inc_print(n);
    return 0;
}