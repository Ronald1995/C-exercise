#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

struct file
{
	string str;
	int row;
	int quantity;
};

vector<file> fp;

void GetString()
{
	string str;
	int row;
	file temp;
	while(cin>>str>>row)
	{
		temp.str=str;
		temp.row=row;
		temp.quantity=1;
		fp.push_back(temp);
		temp.str.clear();
	}
}
void ChangeString(vector<file>& fp)
{

	int size=fp.size();
	for(int i=0;i<size;i++)
	{
		int strsize=fp[i].str.size();
		for(int j=strsize-1;j>=0;j--)
		{
			if(fp[i].str[j]=='\\'||strsize-1-j>=16)
			{
				fp[i].str=fp[i].substr(j+1,strsize-1);
				break;
			}
		}
	}
}
void Merge(vector<file>& fp)
{
	for(int i=0;i<(int)fp.size();i++)
	{
		for(int j=i+1;j<(int)fp.size();)
		
		{
			if(fp[i].str==fp[j].str&&fp[i].row==fp[j].row)
			{
				fp[i].quantity++;
				fp.erase(fp.begin()+j);
			}
			else
				j++;
		}
	}
}
int main()
{
	GetString();
	ChangeString(fp);
	Merge(fp);
	int size=fp.size();
	if(size>8)
	{
		for(int i=size-8;i<size-1;i++)
		{
			cout<<fp[i].str<<' '<<fp[i].row<<' '<<fp[i].quantity<<endl;
		}
	}
	else 
	{
		for(int i=0;i<size;i++)
		{
			cout<<fp[i].str<<' '<<fp[i].row<<' '<<fp[i].quantity<<endl;
		}
	}
	return 0;
}
