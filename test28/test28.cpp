#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;//表示有几个国家
	cin>>n;
	int* price=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>price[i];//输入每个国家神秘石的价格
	}
	int** dp=new int*[n];
	for(int i=0;i<n;i++)
	{
		dp[i]=new int[2];
	}
	dp[0][0]=0;//dp[0][0]表示在第一个国家没有神秘石时的收益
	dp[0][1]=-price[0];//dp[0][1]表示在第一个国家有神秘石时的收益
	for(int i=1;i<n;i++)
	{
		dp[i][0]=max(dp[i-1][0],dp[i-1][1]+price[i]);
		dp[i][1]=max(dp[i-1][1],dp[i-1][0]-price[i]);
	}
	int income=max(dp[n-1][0],dp[n-1][1]);
	cout<<"最大的收益是"<<income<<endl;

	delete[] price;
	for(int i=0;i<n;i++)
		delete[] dp[i];
	delete[] dp;
	return 0;

}
