#include <iostream>

void printResult(int *arr, int n);
void quay_lui(int i, int n, int *arr);

int main() {
	int n;
	std::cout << "Nhap N: ";
	std::cin >> n;
	int arr[n];
	quay_lui(0, n, arr);
	std::cin.get();
}
void quay_lui(int i, int n, int *arr) {
	int val; 									// Value co the la 0 hoac la 1
	for(val = 0; val < 2; val++) {
		arr[i] = val;
		if(i == (n - 1)) {
			printResult(arr, n);
		} else {
			quay_lui(i+1, n, arr);
		}
	}
}
void printResult(int *arr, int n) {
	for(int i = 0; i < n; i++)
		std::cout << arr[i] ;
	std::cout << std::endl;
}
