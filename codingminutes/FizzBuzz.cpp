#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> fizzbuzz(int n){
    vector<string> answer;
    for (int i=1;i<=n;i++){
        if(i%3==0 && i%5==0)
            answer.push_back("FizzBuzz");
        else if(i%3==0)
            answer.push_back("Fizz");
        else if(i%5==0)
            answer.push_back("Buzz");
        else
            answer.push_back(to_string(i));
    }
    return answer;
}
int main()
{
    int n;
    cin>>n;
    vector<string> ans = fizzbuzz(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<",";
    }
    return 0;
}