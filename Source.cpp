#include <iostream>
#include "Queue.h"

int main() {
	Queue que;
	que.push(1);
	que.push(2);
	que.push(3);
	que.push(4);
	que.push(5);
	que.push(6);
	que.push(7);


	std::cout << "Queue: ";
	que.printQueue();

	std::cout << "Insert at Front: ";
	que.insertAtFront(0);
	que.printQueue();

	std::cout << "Insert at Index 3: ";
	que.insertAtIndex(13, 3);
	que.printQueue();

	std::cout << "Insert at Index 7 ";
	que.insertAtIndex(43, 7);
	que.printQueue();

	que.dequeue();
	std::cout << "Dequeue: ";
	que.printQueue();
	que.enqueue();
	std::cout << "Enqueue: ";
	que.printQueue();

	

	std::cin.get();
}