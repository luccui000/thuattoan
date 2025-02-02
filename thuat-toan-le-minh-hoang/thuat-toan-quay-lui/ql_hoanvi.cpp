#include <iostream>
#define MAX 100

int x[MAX], b[MAX];
int n, m, count;

void menu();
void init();
void printResult(int *x, int n);
void quay_lui_hoan_vi(int k);
void quay_lui_chinh_hop(int k);

int main() {
	menu();
	std::cin.get();
}
void menu() {	
	int choose;
	std::cout << "1. Hoan vi \n2. Chinh hop\n";
	std::cin >> choose;
	if(choose == 1) {
		std::cout << "Nhap N: "; std::cin >> n;
		init();
		quay_lui_hoan_vi(0);
		std::cout << "Co " << count << " hoan vi\n";
	} else if(choose == 2) {
		std::cout << "Nhap N: "; std::cin >> n;
		std::cout << "Nhap M: "; std::cin >> m;
		init();
		quay_lui_chinh_hop(0);
		std::cout << "Co " << count << " chinh hop\n";
	} else {
		return;
	}
}
void init() {
	// Danh dau la da di qua	
		for(int i = 1; i <= n; i++)
			b[i] = 1;
}
void printResult(int *x, int n) {
	for(int i = 0; i < n; i++)
		std::cout << x[i];
	std::cout << std::endl;
}
void quay_lui_hoan_vi(int k) {
	int j;
	for(j = 1; j <= n; j++){
		if(b[j]) {
			x[k] = j;
			b[j] = 0;
			if(k == (n - 1)) {
				++count;
				printResult(x, n);
			}
			else 
				quay_lui_hoan_vi(k+1);
			b[j] = 1;
		}
	}
}
void quay_lui_chinh_hop(int k) {
	int j;
	for(j = 1; j <= n; j++){
		if(b[j]) {
			x[k] = j;
			b[j] = 0;
			if(k == (m - 1)) {
				++count;
				printResult(x, m);
			}
			else
				quay_lui_chinh_hop(k+1);
			b[j] = 1;
		}
	}
}
