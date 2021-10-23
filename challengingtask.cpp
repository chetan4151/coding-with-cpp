#include<iostream>
using namespace std;
// 0: real coins, 1: fake heavy coins, -1: fake light coins
char lefts[3][7],rights[3][7],result[3][7];
int res[12]={0}; // 12 coins are assumed to be true
bool fun(){
	for(int i=0;i<3;i++){
		int l_sum=0 , r_sum=0;//Weight on both sides
		for(int j=0;j<6 && lefts[i][j] != NULL;j++){
			l_sum += res[lefts[i][j] - 'A'];
			r_sum += res[rights[i][j] - 'A'];
		}
		if(l_sum > r_sum && result[i][0] != 'u')//Assume that the left side is heavier than the right side and the right side is not "up"
			return false;                       // Then if the assumption is not true, return false
		if(l_sum == r_sum && result[i][0] != 'e')//Ibid
			return false;
		if(l_sum < r_sum && result[i][0] != 'd')//Ibid
			return false;
	}
	return true;

}

int main()
{	
	int n;
	cin>>n;
	while(n--){
		for(int i=0;i<3;i++)
			cin>>lefts[i]>>rights[i]>>result[i];
		int j;
		for(j=0;j<12;j++){
			res[j]=1; //Assumed to be heavy
			if(fun())
				break;
			res[j]=-1; //Assumed to be light
			if(fun())
				break;
			res[j]=0; //For real currency
			
		}
		if(res[j]>0)
			cout<<char(j+'A')<<" is the counterfeit coin and it is heavy."<<endl;
		else
			cout<<char(j+'A')<<" is the counterfeit coin and it is light."<<endl;
	}
	return 0;
}