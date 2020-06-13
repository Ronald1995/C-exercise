#include<iostream>
using namespace std;
int main()
{
	int T;//表示有T行字符串；
	cin>>T;
	while(T--)
	{
		string s;
		cin>>s;
		int length=s.size();
		int position=-1;//将于删除的字符位置
		for(int i=0;i<length/2;i++)
		{	
			if(s[i]!=s[length-1-i])
			{
				if(s[i+1]==s[length-1-i])
				{
				
					position=i;//删除i位置的字符使字符串成为回文x字符串
				}
				else if(s[i]==s[length-2-i])
				{
					position=length-1-i;//删除与i位置对称处的字符
				}


				break;
			}
		}
		cout<<position<<endl;
	}
	return 0;
}
