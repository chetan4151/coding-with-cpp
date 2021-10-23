#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0,maxlen=0,currlen=0;
    while(true)
    {
        if (arr[i]==' ' || arr[i]=='\0')
        {
            if(currlen>maxlen)
            {
                maxlen=currlen;
            }
            currlen=0;
        }
        else
        currlen++;
        if (arr[i]=='\0')
        {
            break;
        }
        i++;
    }
    cout<<maxlen;
    


    return 0;

}