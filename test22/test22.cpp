#include<iostream>
#include<set>
using namespace std;
int main()
{
	int N;
	cin>>N;
	int* a=new int[N];
	int* dp=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
	}
	dp[0]=a[0];
	int max_addition=dp[0];
	for(int i=1;i<N;i++)
	{
		if(dp[i-1]>0)
		{
			dp[i]=dp[i-1]+a[i];
		}
		else
		{
			dp[i]=a[i];
		}
		max_addition=max(dp[i],max_addition);
	}
	cout<<"最大的连续子数组和是："<<max_addition<<endl;
	delete[] a;
	delete[] dp;

	return 0;
}
