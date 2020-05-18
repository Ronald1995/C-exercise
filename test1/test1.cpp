#include<iostream>
using namespace std;
int Count(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
return Count(n-2)+1;
	
}
int main()
{
	cout<<"please input the number of bottle"<<endl;
	int bottle_number;
	cin>>bottle_number;
	cout<<"the number of cola that you can exchange is"<<Count(bottle_number)<<endl;
	return 0;
}
