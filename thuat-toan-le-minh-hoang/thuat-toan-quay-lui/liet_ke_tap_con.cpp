#include <iostream>


int arr[100];
int n, k;

void printResult(int *a, int n);
void try(int number);

int main() {
	int n, k;
	std::cout << "Nhap N: ";
	std::cin >> n;
	std::cout << "Nhap K: ";
	std::cin >> k;
	try(5);
	std::cin.get();
}
void printResult(int *a, int n) {
	for(int i = 0; i < n; i++) 
		std::cout << arr[i];
	std::cout << std::endl;
}
void try(int number) {
	int j;
	for(j = arr[number - 1] + 1; j < n - k + number; j++) {
		x[number] = j;
		if(number == k)
			printResult(arr, n);
		else
			try(number + 1);
	}
}
