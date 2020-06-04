#include<iostream>
using namespace std;
int dp[9]={};
int main()
{
	int arr[9]={2,1,5,3,6,4,8,9,7};
	dp[0]=1;
	for(int i=1;i<9;i++)
	{
		if(arr[i]>arr[i-1])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=dp[i-1];

			
	}
	cout<<dp[8]<<endl;
	return 0;
}
