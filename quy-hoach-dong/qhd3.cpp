#include <iostream>

int qhd(int n, int k);

int main() {
	int n = 100;
	int k = 5;
	std::cout << "Gia tri: " << qhd(n, k) << std::endl;
	std::cin.get();
}

int qhd(int n, int k) {
	if(n == 1)
		return 1;
	else {
		return ((qhd(n - 1, k) + k - 1) % k + 1);
		std::cout << qhd(n - 1, k) << std::endl;
	}
}

