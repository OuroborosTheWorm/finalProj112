// fosterLab11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<string>
#include "Stack.h"
using namespace std;

string pn = "73-65+*4/";
bool opCheck(string eq, int i);
int convertPN(string eq);
int opTrue(Stack &nStack, string eq, int i);

int main()
{
	cout << convertPN(pn) << endl;
	//convetPN(pn);
    return 0;
}
int convertPN(string eq) {
	Stack nStack;
	bool c;
	int i=0;
	//iterate while i is less than string length
		while (i < eq.length()) {
			//check if index is an operator
			if (opCheck(eq, i) == false) {
				int a = eq[i] - '0';
				nStack.push(a);
			}
			else {
				opTrue(nStack, eq, i);
			}
			i++;
		}
		return nStack.top();
}
	bool opCheck(string eq, int i) {
		if (eq[i] == '+' || eq[i] == '-' || eq[i] == '*' || eq[i] == '/')
		{
			return true;
		}
		else
			return false;
	}
	int opTrue(Stack &nStack, string eq, int i) {
		int ans1, val1, val2;
		val2 = nStack.pop();
		val1 = nStack.pop();
		switch (eq[i]) {
		case '+':
			ans1 = val1 + val2;
			nStack.push(ans1);
			return 0;
			break;
		case '-':
			ans1 = val1 - val2;
			nStack.push(ans1);
			return 0;
			break;
		case '*':
			ans1 = val1*val2;
			nStack.push(ans1);
			return 0;
			break;
		case '/':
			ans1 = val1/val2;
			nStack.push(ans1);
			return 0;
			break;
		default:
			cout << "unknown operator type used" << endl;
			return 1;
		}
	}