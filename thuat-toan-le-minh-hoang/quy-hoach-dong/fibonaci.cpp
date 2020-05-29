#include <iostream>
#define MAX 1000


long int x[MAX];

void init();
unsigned long long fiboQHD(int n);

int main() {
	init();
	std::cout << fiboQHD(1000) << std::endl;
	std::cin.get();
}
void init() {
	for(int i = 0; i < MAX; i++)
		x[i] = -1;
}
unsigned long long fiboQHD(int n) {
	if(x[n] == -1) {
		if(n <= 1)
			return -1;
		else 
			x[n] = fiboQHD(n-1) + fiboQHD(n-2);
	}
	return x[n];
}
