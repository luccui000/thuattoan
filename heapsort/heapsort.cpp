#include <iostream>

void heapsort(int *a, int n) {
	int tmp = 0;
	for(int i = n/2; i >= 1; i--){
		int j = i;
		int oke = 0;
		while( j <= n/2 && !oke) {
			if(j == n/2 && 2 * j == n)
				tmp  = 2 * j;
			else 
				tmp = (a[2*j] < a[2*j+1]) ? 2*j : 2*j+1;
			if(a[j] > a[tmp]) {
				std::swap(a[j], a[tmp]);
				j = tmp;
			} else
				oke = 1;
		}
	}
	for(int  i = 0; i < n; i++) 
		std::cout << a[i] << "\t";
	std::cout << std::endl;
	std::cout << "_______________________" << std::endl;
	int j = 0;	
	for(int k = n; k >=2; k--) {
		std::swap(a[k], a[1]);
		std::cout << "Hoan doi vi tri " << a[1] <<" va xoa phan tu cuoi cung " << k - 1 << std::endl;
		for(int i = 0; i < n; i++) 
			std::cout << a[i] << "\t";
		std::cout << std::endl;
		int i = 1, ok = 0;
		while(i < (k-1)/2 && !ok) {
			if(i == (k-1)/2 && 2*i == k-1)
				j = 2 * i;
			else
				j = (a[2*i] < a[2*i+1]) ? 2*i : 2*i+1;
			if(a[i] > a[j]) {
				std::swap(a[i], a[j]);
				i = j;
			}
			else 
				ok = 1;
		}
	}	
			
}
int main() {
	int n = 10;
	int a[] = {10, 34, 64, 12, 63, 53, 35, 74, 15, 100 };
	
	for(int i = 0; i < n; i++)
		std::cout << a[i] << "\t";
	std::cout << std::endl;
	heapsort(a, n);
	std::cin.get();
}
	
				
