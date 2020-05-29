#include <iostream>


int main() {
	int n, i = 2;
	std::cout << "Nhap N: "; std::cin >> n;
	while(n > 1) {
		int m = 0;
		while(n % i == 0) {
			m = m + 1;
			n = n / i;
		}
		if(m > 0)
			std::cout << n << "^" << m << "	";
	i++;
	}
	std::cout << std::endl;

	std::cin.get();
}
