// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> merge(vector<vector<int>> &intervals)
// {
//     vector<int>::iterator it;
//     for (int i = 0; i < intervals.size() - 1; i++)
//     {
//         if (intervals[i][1] >= intervals[i + 1][0])
//         {
//             intervals[i][1] = max(intervals[i][1],intervals[i + 1][1]);
//             it = intervals.begin()+i+1;
//             intervals.erase(it);
//             // while (i < intervals.size() - 2)
//             // {
//             //     intervals[i + 1] = intervals[i + 2];
//             // }
//         }
//     }
//     return intervals;
// }
// int main()
// {
//     vector <vector<int>> range= {{1,3},{2,6},{8,10},{15,20}};
//     vector <vector<int>> ans = merge(range);
//     for(int i=0;i<ans.size();i++)
//         cout<<"["<<ans[i][0]<<","<<ans[i][1]<<"]"<<"  ";

//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char str[s.length()];
    int start = 0, end = s.length()-1;
    for(int i= 0; i<=(s.length()/2)-1; i++){
        str[end] = s[start];
        str[start] = s[end];
        start++;
        end--;
    }
    if(s.length()%2 != 0){
        str[s.length()/2] = s[s.length()/2];
    }
    for(int i=0; i< s.length(); i++){
        cout<<str[i];
    }
    return 0;
}
