#include <iostream>
#include <math.h>

int a[100];
int f[100];

int decToBinary(int decimalNumber);
void sinh_day_nhi_phan(int n);
void genaration(int f[], int n);

int main() {
	// sinh_day_nhi_phan(10);
	int n;
	std::cout << "Nhap vao gia tri N: " ;
	std::cin >> n;

	genaration(f, n);

	std::cin.get();
}
void sinh_day_nhi_phan(int n) {
	int i = n;
	while(i > 0 && a[i] == 1) {
		decToBinary(i);
		std::cout << i << std::endl;
		i -= 1;
		if(i > 0) {
			a[i] = 1;
			for(int j = i + 1; j < n; j++)
				a[j] = 0;
		}
		for(int i = 0; i < n; i++)
			std::cout << a[i] << std::endl;
	}

}
int decToBinary(int decimalNumber) {
	int binaryNumber = 0;
	int coso = 0;
	while(decimalNumber > 0) {
		binaryNumber += (decimalNumber % 2) + pow(10, coso);
		++coso;
		decimalNumber /= 2;
	}
	return binaryNumber;
}
void genaration(int f[], int n) {
	int i = n - 1;
	while(i > 0 ) {
		if(f[i] == 1)
			i--;
		if(f[i] == 0) {
			f[i] = 1;
			for(int j = i + 1; j < n; j++)
				f[j] = 0;
			for(int k = 0; k < n; k++)  
				std::cout << f[k];
			std::cout << std::endl;
			i = n - 1;
		}
	}
}


