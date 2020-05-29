#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int n;
	vector<string> vec;
	string temp;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			cin>>temp;
		vec.push_back(temp);

		}
			
		sort(vec.begin(),vec.end());
	}

	for(auto it=vec.begin();it!=vec.end();it++)
		cout<<*it<<endl;
	return 0;
}
