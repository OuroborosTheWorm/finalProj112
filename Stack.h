#ifndef STACK_H
#define STACK_H


// create Stack class that will be implemented using a singly linked list
class Stack
{
private:
	const int MAX = 10;
	int length;
	int* s;	// singly linked list to store the values on the stack
public:
	Stack();
	void push(int val);	// insert value on top of stack
	int pop();			// remove and return value on top of stack
	int top();			// return value on top of stack without removing it
	int size();			// return the number of values in the stack
	bool isEmpty();		// determines if stack is empty (true if empty)
};


#endif // !STACK_H

