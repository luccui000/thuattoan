#pragma once
#define MAX 100


class Queue
{
public:
	explicit Queue();
	void push(int);
	/*int pop();*/
	void dequeue() ;
	void enqueue() ;
	bool isEmpty() const;
	bool isFull() const;

	void insertAtFront(int value);
	void insertAtIndex(int value, int pos);

	void printQueue() const;
	~Queue();
private:
	int* m_arr;
	int m_size;
};

