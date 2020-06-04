#include<iostream>
using namespace std;
int k;
int BinarySearch(int* a,int x,int low,int high)//a表示需要二分的有序数组（升序），xb表示需要查找的数字，low,high表示m每次递归时的高低位
{
	if(low>high)
	{
		return -1;//没有找到

	}
	int mid=(low+high)/2;
	if(x==a[mid])
	{
		k=mid;
		return k;
	}
	else if(x>a[mid])
	{
		BinarySearch(a,x,mid+1,high);//x在h后半部分
	}
	else
	{
		BinarySearch(a,x,low,mid-1);
	}

}
int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"请输入需要查找的正数"<<endl;
	int x;
	cin>>x;
	
	int r=BinarySearch(a,x,0,9);
	if(r==-1)
	{
		cout<<"没有查到"<<endl;

	}
	else
	cout<<"查找到了,位置是 "<<r<<endl;
	return 0;

}
