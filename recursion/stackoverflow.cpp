#include<iostream>
using namespace std;
void printpattern(int n)
{
    if (n==0)
        return;
    printpattern(n+1);
    cout<<"#";


}
int main()
{
    int n;
    cin>>n;
    printpattern(n);
    return 0;
}