#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	if(str2.size()>1)
		exit(-1);
	int count=0;
	for(int i=0;i<str1.size()-1;i++)
	{
		if(str1[i]==str2[0])
			count++;

	}
	cout<<"the number of character you input in the string is "<<count<<endl;
	return 0;
}
