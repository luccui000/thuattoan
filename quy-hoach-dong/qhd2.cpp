#include <iostream>


const int a[] = {19, 39, 34, 12, 6, 19, 349, 48, 199, 38, 46};
int f[100][100];


void dq(int n, int m) {
	for(int i = 0; i < m; i++)
		f[0][i] = 0;
	for(int i = 0; i < n; i++)
		f[i][0] = 0;
	for(int i = 1; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(a[i] > j) 
				f[i][j] = f[i-1][j];
			else 
 				f[i][j] = std::max(f[i-1][j-a[i]]+a[i], f[i-1][j]);
		}
	}
}

int main() {
	int n = 10;
	int m = 250;
	dq(n, m);
	std::cout << f[n][m] << std::endl;
	std::cin.get();
}
