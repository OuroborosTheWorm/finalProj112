#include "stdafx.h"
#include "Stack.h"

// default constructor
Stack::Stack()
{
	this->length = 0;
	this->s = new int[MAX];
}

// insert value on top of stack
void Stack::push(int val)
{
	this->s[length++] = val;
}

// remove and return value on top of stack
int Stack::pop()
{
	return s[--length];
}

// return value on top of stack without removing it
int Stack::top()
{
	return s[length - 1];
}

// return the number of values in the stack
int Stack::size()
{
	return this->length;
}

// determines if stack is empty
bool Stack::isEmpty()
{
	return this->length == 0;
}
