#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int T;//表示接下来输入几行
	cin>>T;
	while(T)
	{
	
		int n;//输入正整数n
		cin>>n;
		vector<int> vec;
		int count=0;
		if(n<0)
		{
			cout<<"输入了负数，请输入正整数"<<endl;
			break;
		}
		else
		{
			
				int temp=n;
			do
			{
				int remainder=temp%10;
				temp=temp/10;
				vec.push_back(remainder);
			}while(temp>0);
			for(int i=0;i<vec.size()-1;i++)
			{
				if(n%vec[i]==0)
					count++;


			}
			if(count==vec.size())
				cout<<"G"<<endl;
			else if(count==0)
				cout<<"S"<<endl;
			else
				cout<<"H"<<endl;
					
				
		}
		T--;

	}
	return 0;
}
