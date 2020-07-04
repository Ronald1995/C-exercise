#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	int count=0;
	getline(cin,str1);
	getline(cin,str2);
	for(int i=0;i<str1.length()-1;i++)
	{
		if(str1[i]==str2[0])
			count++;
	}
	cout<<"含有该字符的个数是"<<count<<endl;
	return 0;
}
