#include<iostream>
#include<string>
using namespace std;
int main()
{
	string my_string;
	getline(cin,my_string);
	int length=my_string.length();
	int count=0;
	for(int i=length-1;i>=0;i--)
	{
		if(my_string[i]!=' ')
			count++;
		else 
			break;
	}
	cout<<"the length of last word is"<<count<<endl;
	return 0;

}
