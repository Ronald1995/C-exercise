#include<iostream>
using namespace std;
int main()
{
	int x,y,n;//小虾的位置和boss数量
	cin>>x>>y>>n;
	int dp[30][30]={0};
	for(int i=0;i<n;i++)
	{
		int x_boss,y_boss;//boss的位置
		cin>>x_boss>>y_boss;
		dp[x_boss][y_boss]=-1;//boss位置不能通过，所以d走法为0
		
	}
	for(int i=0;i<=x;i++)
	{
		dp[i][0]=1;
	}
	for(int j=0;j<y;j++)
	{
		dp[0][j]=1;
	}
	for(int i=1;i<=x;i++)
	{
		for(int j=1;j<=y;j++)
		{
			if(dp[i][j]==-1)
				dp[i][j]=0;
			else
			
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
				
		}
	}
	cout<<dp[x][y]<<endl;
	return 0;
}
