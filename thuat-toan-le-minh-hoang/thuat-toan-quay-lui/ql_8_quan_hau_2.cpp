#include <iostream>
#define N 8

int a[N][N];

void init();
bool cheo_trai(int i, int j);
bool cheo_phai(int i, int j);
bool kiem_tra_cot(int i, int j);
void quay_lui(int n);

int main() {
	init();
	quay_lui(1);
	std::cin.get();
}
void init() {
	for(int i = 1; i <= 8; i++)
		for(int j = 1; j <= 8; j++)
			a[i][j] = 0;
}
bool cheo_trai(int i, int j) {
	int k = 1;
	while(i > k && j > k) {
		if(a[i-k][j-k] == 1)
			return false;
		k++;
	}
	return true;
}
bool cheo_phai(int i, int j) {
	int k = 1;
	while(i > k && (j + k <= 8)) {
		if(a[i-k][j+k] == 1)
			return false;
		k++;
	}
	return true;
}
bool kiem_tra_cot(int i, int j) {
	int k;
	for(k = 1; k < i; k++) {
		if(a[k][j] == 1) return false;
	}
	return true;
}
void quay_lui(int n) {
	if(n == 9) {
		for(int i = 1; i <= 8; i++) {
			for(int j = 1; j <= 8; j++) {
				if(a[i][j] == 1)
					std::cout << a[i][j] << "   ";
				else 
					std::cout << "." << "   ";
			}
			std::cout << std::endl;
		}
		std::cin.get();
	} else {
		int k;
		for(k = 1; k <= 8; k++) {
			if(kiem_tra_cot(n, k) && cheo_trai(n, k) && cheo_phai(n, k)) {
				a[n][k] = 1;
				quay_lui(n+1);
				a[n][k] = 0;
			}
		}
	}
}

