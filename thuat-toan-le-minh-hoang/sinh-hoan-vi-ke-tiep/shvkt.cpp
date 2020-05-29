#include <iostream>


int a[100];

void init(int *a, int n);
void sinh_hoan_vi_ke_tiep(int *a, int n, bool &oke);

int main() {
	int n; 
	std::cout << "Nhap N: "; std::cin >> n;
	init(a, n);
	bool oke = true;
	while(oke) {
		sinh_hoan_vi_ke_tiep(a, n, oke);
		std::cout << "_________\n";
		for(int i = 1; i <= n; i++)
			std::cout << a[i];
		std::cout << "\n_________";
		std::cout << std::endl;
	}
	
	std::cin.get();
}
void init(int *a, int n) {
	for(int i = 1; i <= n; i++) 
		a[i] = i;
	
}

void sinh_hoan_vi_ke_tiep(int *a, int n, bool &oke) {
	int i = n;
	while(i > 0 && a[i] > a[i+1]) {
		std::cout << "a[i]: " << a[i] << "\ta[i+1]: " << a[i+1] << std::endl;
		i--;
	}
	if(i > 0) {
		int k = n;
		std::cout << "i: " << i << "\tk: " << k << std::endl;
		while(a[i] > a[k]) {
			std::cout << "a[i]: " << a[i] << "\ta[k]: " << a[k] << std::endl;
			k--;
		}
		std::cout << "Truoc Swap a[i], a[k] " << a[i] << ", " << a[k] << std::endl;
		int t = a[i];
		a[i] = a[k];
		a[k] = t;
		std::cout << "Sau Swap a[i], a[k] " << a[i] << ", " << a[k] << std::endl;
		int r = i + 1, s = n;
		std::cout << "r: " << r << "\ts: " << s << std::endl;
		while(r <= s) {
			int tmp = a[r];
			a[r] = a[s];
			a[s]  = tmp;
			r++; s--;
		}
	} else 
		oke = false;
}

