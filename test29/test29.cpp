#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;//记录数
	cin>>n;
	int time;//时间值
	cin>>time;
	vector<int> num(n),in_time(n),out_time(n),res;
	for(int i=0;i<n;i++)
	{
		cin>>num[i]>>in_time[i]>>out_time[i];
		if(time>=in_time[i]&&time<=out_time[i])
		{
			res.push_back(num[i]);
		}
	}
	if(res.size()==0)
		cout<<"null"<<endl;
	else
	{
		sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		{
			cout<<res[i]<<endl;
		}
	}
	return 0;
}
