#include<iostream>
using namespace std;
int main()
{
	long number;
	cin>>number;
	while(number>=1)
	{
		for(int i=2;i<=number;i++)
		{
			if(number%i==0)
			{
		
				cout<<i<<endl;
				number/=i;
				i=1;
			}
		}
	}

	return 0;
}
