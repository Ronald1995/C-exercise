#include<iostream>
#include<string>
using namespace std;
bool CheckCharacter(string str)
{
	int i0=0,i1=0,i2=0,i3=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>'a'&&str[i]<'z')
			i0=1;
		else if(str[i]>'A'&&str[i]<'Z')
			i1=1;
		else if(str[i]>'0'&&str[i]<'9')
			i2=1;
		else 
			i3=1;
	}
	if(i0+i1+i2+i3>=3)
		return true;
	else 
		return false;
}
bool CheckLength(string str)
{
	if(str.size()>8)
		return true;
	else 
		return false;
}
bool CheckRepeat(string str)
{
	int length=str.size();
	for(int i=0;i<length-3;i++)
	{
		string temp=str.substr(i,3);
		if(str.find(temp,i+3)!=str.npos)
			return false;

	}
	return true;
}
int main()
{

	string str;
	while(cin>>str)
	{
		if(CheckCharacter(str)&&CheckLength(str)&&CheckRepeat(str))
			cout<<"OK"<<endl;
		else
			cout<<"NG"<<endl;
	}
	return 0;
}
