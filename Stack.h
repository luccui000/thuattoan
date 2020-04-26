#ifndef _STACK_H
#define _STACK_H

class Stack {
public:
	Stack();
	void push(int value);
	int pop();
	int peek();
	int size() const;

	bool isEmpty() const;
	bool isFull() const;

	void printStack() const;
	~Stack();
private:
	int* m_arr = nullptr;
	int m_size{ 0 };
};

#endif