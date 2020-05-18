#ifndef _CALCULATOR_H
#define _CALCULATOR_H
#include <iostream>
#include <stack>
using namespace std;

//judge whether the character is a operator or not
bool IsOperator(char x);

//compare the priority of operator
int GetPriority(char x);

//calculate the expression and return the outcome
int DoOperate(int d1,int d2,char t);
#endif
