#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n;
	map<int,int> mp;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		pair<int,int> p;
		cin>>p.first;
		cin>>p.second;
		if(mp.find(p.first)!=mp.end())
		{
			mp[p.first]+=p.second;
		}
		else
		{
			mp[p.first]=p.second;
		}
	}
	for(auto it=mp.begin();it!=mp.end();it++)
		cout<<it->first<<" "<<it->second<<endl;
	return 0;
}
