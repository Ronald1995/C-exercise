#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,count=0;
	cin>>n;
	vector<int> a;//存储数组A
	vector<int> b;//存储数组B
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		a.push_back(temp);
	}
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		b.push_back(temp);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				count++;
				b[j]=0;
				break;
			}
		}
	}
	cout<<((count==n)?count-1:count+1)<<endl;
	return 0;
}
