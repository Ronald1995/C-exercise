#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	vector<int> vec;
	int remainder,quotient;
	cin>>n;
	do
	{
		remainder=n%10;
		quotient=n/10;
		vec.push_back(remainder);
		n=quotient;
	}while(n>0);
	for(auto it=vec.begin();it<vec.end();it++)
	
	
	{

		auto it1=find(vec.begin(),it,*it);
		if( it1==it)
		cout<<*it1;
		else
		continue;
	}
	return 0;


}
