#include <iostream>
#include "Stack.h"


int main() {
	Stack stack;
	stack.push(19);
	stack.push(34);
	stack.push(52);
	stack.push(63);
	stack.push(13);
	stack.push(10);

	std::cout << "Gia tri top cua Stack: " << stack.peek() << std::endl;
	stack.printStack();
	std::cout << "Lan pop thu 1: \n";
	stack.pop();
	stack.printStack();
	std::cout << "Kich thuoc Stack: " << stack.size() << std::endl;
	std::cout << "_______________________\n";
	std::cout << "Lan pop thu 2: \n";
	stack.pop();
	stack.printStack();
	std::cout << "Kich thuoc Stack: " << stack.size() << std::endl;
	std::cout << "_______________________\n";
	std::cout << "Lan pop thu 3: \n";
	stack.pop();
	stack.printStack();
	std::cout << "Kich thuoc Stack: " << stack.size() << std::endl;
	std::cout << "_______________________\n";
	std::cout << "Lan pop thu 4: \n";
	stack.pop();
	stack.printStack();
	std::cout << "Kich thuoc Stack: " << stack.size() << std::endl;
	std::cout << "_______________________\n";
	std::cout << "Lan pop thu 5: \n";
	stack.pop();
	stack.printStack();
	std::cout << "Kich thuoc Stack: " << stack.size() << std::endl;
	std::cout << "_______________________\n";
	std::cout << "Lan pop thu 6: \n";
	stack.pop();
	stack.printStack();
	std::cout << "Kich thuoc Stack: " << stack.size() << std::endl;
	std::cout << "_______________________\n";
	stack.pop();
	std::cout << "Kich thuoc Stack: " << stack.size() << std::endl;
	std::cout << "_______________________\n";
	std::cin.get();
}