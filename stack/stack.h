#ifndef _STACK_H
#define _STACK_H
#include <string>
#define MAX 100

template<typename T>
class Stack {
public:
	// default constructor
	Stack();
	~Stack();	
	// Them phan tu vao trong stack
	void push(T value);
	// Lay phan tu cuoi cung trong stack ra
	T pop();
	// xem coi phan tu dau tien la cai gi
	T peek();
	int size() const;
	// xem xem stack co rong hay khong
	bool isEmpty() const;
	bool isFull() const;
	void printString();
private:
	T *m_arr { nullptr };
	int m_size;	
};

#endif
