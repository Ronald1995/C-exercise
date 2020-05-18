#include<cstring>
#include"calculator.h"
#include<string>
using namespace std;
int main()
{
	stack<int> s_operand;//stack which stores operand
	stack<char> s_operator;//stack which stores operator
	string input_string;//string that are input by keyboard
	char t;
	cin>> input_string;
	for(int i=0;i< input_string.size();i++)
	{

	
		char temp=input_string[i];
		string s_temp;
		s_temp.append(1,temp);
		//whether the character is a operand
		if(temp>=48&&temp<=57)
		{

			int opnum=stoi(s_temp);//convert char to int
			s_operand.push(opnum);//put the operand into stack

		}
		if(IsOperator(temp))
		
		{
			if(s_operator.empty())
		
			{
				s_operator.push(temp);
			
			}

			else
			
			{
				if(GetPriority(temp)>GetPriority(s_operator.top()));
				
				{

				s_operator.push(temp);

				}
				else
				{
					d2=s_operand.top();
					s_operand.pop();
					d1=s_operand.top();
					s_operand.pop();
					t=s_operator.top();
					s_operator.pop();
					s_operand.push(DoOperate(d1,d2,t));
					s_operator.push(temp);

				}

		
			}
		}

	
	}
       cout<<s_operand.top();	
}	
