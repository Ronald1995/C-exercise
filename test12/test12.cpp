#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str=to_string(n);
	for(int i=str.size()-1;i>=0;i--)
		cout<<str[i]<<"";
	return 0;
}
