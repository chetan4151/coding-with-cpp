#include<bits/stdc++.h>
using namespace std;
int kthnum(int k){
    int i=1;
    int temp;
    int num;
    while (k)
    {
        bool flag=false;
        if (i%7==0){
            i+=1;
           continue;
        }
     
        else{
            temp=i;
            num=temp;
            while(num>0){
                temp=num%10;
                if (temp==7){
                    i+=1;
                    flag=true;
                    break;
                }
                num/=10;
            }
            if(flag)
                continue;
        }
        i++;
        k--;
    }
    return i-1;
}
int main()
{
    int k;
    cin>>k;
    cout<<kthnum(k);
    return 0;
}