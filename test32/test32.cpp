#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int count=0;
	int length=str.length();
	for(int i=length-1;i>=0;i--)
	{
		if(str[i]!=' ')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	cout<<"最后一个单词的长度是"<<count<<endl;
	return 0;
}
