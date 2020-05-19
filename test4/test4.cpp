#include<iostream>
#include<set>
using namespace std;
int main()
{
	int N;
	int n;
	set<int> myset;
	cout<<"please input number"<<endl;
	cin>>N;
	myset.clear();
	while(N--)
	{
		cin>>n;
		myset.insert(n);
	}
	for(set<int>::iterator it=myset.begin();it!=myset.end();it++)
		cout<<*it<<endl;
	return 0;
}
