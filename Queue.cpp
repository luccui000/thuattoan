#include "Queue.h"
#include <iostream>


Queue::Queue() 
	: m_arr(new int[MAX])
	, m_size(0)
{

}
void Queue::push(int value)
{
	if (isFull()) {
		std::cout << "Queue is Full ...\n";
		return;
	}
	else
		m_arr[m_size++] = value;
}

//int Queue::pop()
//{
//	if (isEmpty())
//		std::cout << "Queue is Empty...\n";
//	else
//		
//}

void Queue::dequeue() 
{
	if(isEmpty()) {
		std::cout << "Queue is Empty...\n";
		return;
	}
	else {
		for (int i = 1; i < m_size; i++) {
			m_arr[i - 1] = m_arr[i];
		}
		--m_size;
	}
}

void Queue::enqueue() 
{
	if (isEmpty()) {
		std::cout << "Queue is Empty...\n";
		return;
	}
	else
		--m_size;
}

bool Queue::isEmpty() const
{
	return (m_size == 0 || m_arr == nullptr);
}

bool Queue::isFull() const
{
	return m_size == MAX;
}

void Queue::insertAtFront(int value)
{
	if (isFull()) {
		std::cout << "Queue is Full ...\n";
		return;
	}
	else {
		for (int i = m_size ; i > 0 ; i--) {	
				m_arr[i] = m_arr[i - 1];
		}
		m_arr[0] = value;
		++m_size;
	}
}

void Queue::insertAtIndex(int value, int pos)
{
	if (isFull()) {
		std::cout << "Queue is Full ...\n";
		return;
	}
	else {
		for (int i = m_size; i > pos; i--) {
			m_arr[i] = m_arr[i - 1];
		}
		m_arr[pos] = value;
		++m_size;
	}
}

void Queue::printQueue() const
{
	if (isEmpty()) {
		std::cout << "Stack is Empty...\n";
	}
	else{
		for(int i = 0; i < m_size; i++) {
			std::cout << m_arr[i] << "\t";
		}
		std::cout << "\n";
	}
}

Queue::~Queue()
{
	delete[] m_arr;
}
