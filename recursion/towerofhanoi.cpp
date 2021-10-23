#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char source,char helper,char destination)
{
    if (n==0)
    {
        return;
    }
    TowerOfHanoi(n-1,source,destination,helper);
    cout<<"Shift disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    TowerOfHanoi(n-1,helper,source,destination);
}
int main()
{
    int n;
    cout<<"Enter number of disks:";
    cin>>n;
    cout<<"follow these steps:"<<endl;
    TowerOfHanoi(n,'A','B','C');
    return 0;
}