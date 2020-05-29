#include <iostream>
#include <math.h>

int f[100];
void decToBin(int decimalNumber);

int main() {
	int n ;
	std::cout << "Nhap vao gia tri N: ";
	std::cin >> n;
	for(int i = 0; i <= n; i++) 
		decToBin(i);
	std::cin.get();
}

void decToBin(int decimalNumber) {
	int binaryNumber = 0;
	int count = 0;
	while(decimalNumber > 0) {
		binaryNumber = (decimalNumber % 2);
		f[count++] = binaryNumber;
		decimalNumber /= 2;
	}
	for(int i = count - 1; i >= 0; i--) {
		std::cout << f[i] << " ";
	}
	std::cout << std::endl;
}

