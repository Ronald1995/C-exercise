#include<iostream>
#include<string>
using namespace std;
void Process(string str)
{
	if(str.size()<=8)
	{
		int judge= 8-str.size();
		string temp1(judge,'0');
		str=str+temp1;
		cout<<str<<endl;
	}
	else 
	{
		string temp2(str,0,8);
		cout<<temp2<<endl;
		str.erase(str.begin(),str.begin()+8);
		Process(str);
	}
}
int main()
{
	string str1;
	string str2;
	getline(cin,str1);
	getline(cin,str2);
	Process(str1);
	Process(str2);
	return 0;
}
