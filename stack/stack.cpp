#include "stack.h"
#include <iostream>

template<typename T>
Stack<T>::Stack() 
	: m_arr(new int[MAX])
	, m_size(0)
{
}
template<typename T>
void Stack<T>::push(T value) {
	if(isFull())
		std::cout << "Stack is Full...";
	else 
		m_arr[++m_size] = value;
}
template<typename T>
T Stack<T>::pop() {
	if(isEmpty())
		std::cout << "Stack is Empty..." << std::endl;
	else 
		return m_arr[--m_size];
}
template<typename T>
T Stack<T>::peek() {
	if(isEmpty()) 
		std::cout << "Stack is Empty...\n";	
	else 
		return m_arr[m_size];
}

template<typename T>
int Stack<T>::size() const {
	return m_size;
}
template<typename T>
bool Stack<T>::isEmpty() const {
	return (m_size == 0 || m_arr = nullptr);
}
template<typename T>
bool Stack<T>::isFull() const {
	return m_size == MAX;
}

template<typename T>
Stack<T>::~Stack() {
	delete[] m_arr;
}


