#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
        {
            if (i%2!=0)
            {
                cout<<"I hate ";
                if (i<n)
                    cout<<"that ";
                else
                {
                    cout<<"it";
                    break;
                }
            }
            else 
            {
                cout<<"I love ";
                if (i<n)
                    cout<<"that ";
                else
                {
                    cout<<"it";
                    break;
                }
                
            }
        }
    return 0;
}