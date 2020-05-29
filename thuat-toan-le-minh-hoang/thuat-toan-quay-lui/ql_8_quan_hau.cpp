#include <iostream>
#define N 8

int doc[N], cheo_trai[2*N-1], cheo_phai[2*N-1], duong_di[N], count = 0;

void init();
void printResult();
void xep_hau(int i);


int main() {
	init();
	xep_hau(0);
	std::cin.get();
}
void init() {
	for(int i = 0; i <= N - 1; i++)
		doc[i] = 1;					 // Chua di dau nghen, khoi tao thoi
	// Khoi tao duong cheo mac dinh la chua di con nao het
	for(int i = 0; i <= 2*N-2; i++) {
		cheo_trai[i] = 1;
		cheo_phai[i] = 1;
	}
}
void printResult() {
	count++;
	std::cout << "\nCach di thu " << count << ": ";
	for(int i = 0; i < N; i++) {
		if(i == (N - 1))
			std::cout << duong_di[i];
		else 
			std::cout << duong_di[i] << " --> ";
	}
	std::cout << std::endl;
}
void xep_hau(int i) {
	int j;
	for(j = 0; j <= N - 1; j++){
		if(doc[j] && cheo_trai[i-j+N-1] && cheo_phai[i+j]) {
			duong_di[i] = j;
			doc[j] = cheo_trai[i-j+N-1] = cheo_phai[i+j] = 0;
			if(i == (N-1)) 
				printResult();
			else 
				xep_hau(i+1);
			doc[j] = 1;
			cheo_trai[i-j+N-1] = cheo_phai[i+j] = 1;
		}
	}
}
