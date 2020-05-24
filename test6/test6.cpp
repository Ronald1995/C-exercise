#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	string str;
	int decimal_number=0;
	cin>>str;
	string temp(str,2,str.size()-2);
	for(int i=0;i<temp.size();i++)
	{
		if(temp[i]>='A'&&temp[i]<='F')
			temp[i]=10+temp[i]-'A';
		else if(temp[i]>='0'&&temp[i]<='9')
			temp[i]=temp[i]-'0';
		else
		{
			cout<<"input is wrong,please input again"<<endl;
			exit(-1);
		}
		decimal_number+=pow(16,temp.size()-1-i)*temp[i];

	}
	cout<<decimal_number<<endl;
	return 0;

}
