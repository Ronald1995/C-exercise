#include"calculator.h"

//judge whether the character is a operator or not
bool IsOperator(char x)
{
	if(x=='+'||x=='-'||x=='*'||x=='/')
		return true;
	else
		return false;
}

//compare the priority of operator
int GetPriority(char x)
{
	if(x=='+'||x=='-')
		return 1;
	if(x=='*'||x=='/')
		return 2;
}

//calculate the expression and return the outcome
int DoOperate(int d1,int d2,char t)
{
	if(t=='+')
		return(d1+d2);
	if(t=='-')
		return(d1-d2);
	if(t=='*')
		return(d1*d2);
	if(t=='/')
		return(d1/d2);
		
}
