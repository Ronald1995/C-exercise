#include<iostream>
#include<set>
#include<string>
using namespace std;
int main()
{
	string str;
	set<char> st;
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		st.insert(str[i]);
	}
	cout<<st.size();
	return 0;
}
