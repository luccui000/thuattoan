#include <iostream>
#define INPUT "data.txt"
#define OUTPUT "output.txt"


int a[100];
void init(int *a, int n);
void sinh_hoan_vi(int *a, int n, bool &oke);
void xuatmang(int *a, int n);

int main() {
	// int n;
	std::cout << "Nhap vao N: "; std::cin >> n;
	bool oke = true;
	init(a, n);
	while(oke) {
		sinh_hoan_vi(a, n, oke);
		xuatmang(a, n);
	}

	std::cin.get();
}
void init(int *a, int n) {
	for(int i = 1; i <= n; i++)
		a[i] = i;
	for(int i = 1; i <= n; i++)
		std::cout << a[i];
	std::cout << std::endl;
}
void sinh_hoan_vi(int *a, int n, bool &oke) {
	int i = n - 1;					// Cho i la so tu cuoi day
	while(i > 0 && a[i] > a[i+1]) i--;
	if(i > 0) {
		int k = n;
		while(a[i] > a[k]) k--;
		std::swap(a[i], a[k]);
		int r = i + 1, s = n;
		while(r <= s) {
			std::swap(a[r], a[s]);
			r++;
			s--;
		}
	} else
		oke = false;
}

void xuatmang(int *a, int n) {
	for(int i = 1; i <= n; i++)
		std::cout << a[i];
	std::cout << std::endl;
}
