#include<iostream>
using namespace std;
int main()
{
	long long t,time=3;
	cin>>t;
	while(t>time)
	{
		t-=time;
		time*=2;
	}
	cout<<time+1-t<<endl;
	return 0;
}

