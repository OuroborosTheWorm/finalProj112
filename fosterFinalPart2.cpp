// fosterFinalPart2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>

#include "Stack.h"
#include <string.h>
#include <string>
using namespace std;
bool frontBracketCheck(char i);
bool backBracketCheck(char i);

int main()
{
	
	string file = "<p align = \"center\"> This is a centered paragraph </p>";
	int len = file.length();
	cout << len << endl;
	Stack s1 = Stack();
	for (int i = 0; i > len + 1; i++) {
		if (frontBracketCheck(i)) {		//check if [i] is a bracket <
			s1.push(file[i]);
			for (int j = i + 1; j != '>'; j++) {
				s1.push(file[j]);
			}
		}
		else if(backBracketCheck(i)) {
			s1.push(file[i]);
		}
			//if () {

			//}
	}

	
    return 0;
}
bool frontBracketCheck(char i) {
	if (i == '<') {
		return true;
	}
	else {
		return false;
	}
}
bool backBracketCheck(char i) {
	if (i == '>') {
		return true;
	}
	else {
		return false;
	}
}
