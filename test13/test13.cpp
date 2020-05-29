#include<iostream>
#include<stack>
using namespace std;
int main()
{
	string str;
	stack<string> s;
	while(cin>>str)
	{
		s.push(str);
	
	}
	cin.clear();
	cin.ignore();
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
		if(!s.empty())
			cout<<" ";
	}
	return 0;
}
