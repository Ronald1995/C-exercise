#include<iostream>

#define N 20

using namespace std;
 
int dp[N];
int fun(int n)
{
	if(n==1||n==2)
	{
		return n;
	}
	dp[n-1]=fun(n-1);
	dp[n-2]=fun(n-2);
	dp[n]=dp[n-1]+dp[n-2];
	return dp[n];
}
int main()
{
	fun(N);
	cout<<dp[15]<<endl;

	return 0;
}
