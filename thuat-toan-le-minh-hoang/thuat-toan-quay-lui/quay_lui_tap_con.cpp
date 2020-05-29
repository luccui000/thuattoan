#include <iostream>

int arr[100];

void printResult(int *arr, int n);
void quay_lui_tap_con(int n, int k, int *arr, int i, int j);
void quay_lui_tap_con_2(int n, int k, int *arr, int i);

int main() {
	int n, k;
	std::cout << "Nhap N: "; std::cin >> n;
	std::cout << "Nhap K: "; std::cin >> k;

	// quay_lui_tap_con(n, k, arr, 0, 0);
	std::cout << "_______________________\n";
	quay_lui_tap_con_2(n, k, arr, 0);
	
	std::cin.get();
}
void printResult(int *arr, int n) {
	for(int i = 0; i < n; i++)
		std::cout << arr[i];
	std::cout << std::endl;
}
void quay_lui_tap_con(int n, int k, int *arr, int i, int j) {
	for(j; j < n - k + i; j++) {
		arr[i] = j + 1;
		if(i == (k - 1))
			printResult(arr, n);
		else 
			quay_lui_tap_con(n, k, arr, i + 1, j + 1);
	}
}
void quay_lui_tap_con_2(int n, int k, int *arr, int i) {
	int j;
	for(j = arr[i - 1] + 1; j <= n - k + i; j++) {
		arr[i] = j;
		if(i == k) 
			printResult(arr, n);
		else
			quay_lui_tap_con_2(n, k, arr, i + 1);
	}
}
