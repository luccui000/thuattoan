#include <iostream>

int a[100], t[100];

void printResult(int *arr, int n);
void quay_lui_phan_tich_tong(int arr, int n, int i);


int main() {
	int n;
	std::cout << "Nhap N: "; std::cin >> n;
	quay_lui_phan_tich_tong(arr, n, 0);
	std::cin.get();
}
void printResult(int *arr, int n) {
	for(int i = 0; i < n; i++) 
		std::cout << arr[i];
	std::cout << std::endl;
}
void quay_lui_phan_tich_tong(int arr, int n, int i) {
	int j;
	for(j = arr[i-1]; j <= (n - f[i - 1])/ 2; j++){
		arr[i] = j;
		t[i] = t[i-1] + j;
		if(arr[i] == n - t[i-1];
				printResult(arr, n);
		else 
			quay_lui_phan_tich_tong(arr, n, i+1);
	}
}
