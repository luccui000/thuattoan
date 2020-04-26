#include "Stack.h"
#include <iostream>
#define MAX 100

Stack::Stack()
{
	m_arr = new int[MAX];
	m_size = 0;
}
void Stack::push(int value) {
	if (isFull())
		return;
	else {
		m_arr[m_size++] = value;
	}
}
int Stack::pop() {
	if (isEmpty()) {
		std::cout << "Stack is empty !!!" << std::endl;
		return -1;
	}
	else {
		--m_size;
		return m_arr[m_size];
	}
}
int Stack::peek() {
	if (isEmpty()) {
		std::cout << "Stack is empty !!!" << std::endl;
		return -1;
	}
	else
		return m_arr[m_size - 1];
}
int Stack::size() const {
	return m_size;
}
bool Stack::isEmpty() const {
	return m_size == 0;
}
bool Stack::isFull() const {
	return m_size == MAX;
}

void Stack::printStack() const {
	if (isEmpty()) {
		std::cout << "Stack is empty !!!" << std::endl;
	}
	else {
		for (int i = 0; i < m_size; i++) {
			std::cout << m_arr[i] << "\t";
		}
	}
	std::cout << "\n";
}

Stack::~Stack() {
	delete[] m_arr;
}