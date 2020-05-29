#include <iostream>
#define MAX 100


int a[] = { 23, 2, 49, 38, 77, 48, 29, 87, 42, 18};

int f[100][100];
void radix_sort(int *a, int n);
void printArr(int *a, int n);

int main() {
	int n = 10;
	std::cout << "Truoc khi sort: ";
	printArr(a, n);
	radix_sort(a, n);
	std::cout << "\nSau khi sort: ";
	printArr(a, n);
	std::cin.get();
}
void radix_sort(int *a, int n) {
	int b[MAX], m = 0, exp = 1;
	for(int i = 0; i < n; i++) {
		if(a[i] > m)
			m = a[i];
	}
	while(m / exp > 0) {
		int tmp[10] = { 0 };
		for(int i = 0; i < n; i++)
			tmp[(a[i] / exp) % 10]++;
		for(int i = 0; i < 10; i++) 
			tmp[i] += tmp[i-1];
		for(int i = n -1; i >= 0; i--) {
			b[tmp[a[i]/exp % 10] - 1] = a[i];
			tmp[a[i]/exp % 10]--;
		}	
		for(int i = 0; i < n; i++)
			a[i] = b[i];
		exp *= 10;
	}
}
void printArr(int *a, int n) {
	for(int i = 0; i < n; i++)
		printf("%d\t", a[i]);
}

