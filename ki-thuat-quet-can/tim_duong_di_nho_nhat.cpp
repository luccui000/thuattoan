#include <iostream>
#define MAX 100

int a[MAX][MAX];
int duong_di[MAX][MAX];
int soDuongMuonDi;

void init();
int timMin(int a, int b);
int min(int a, int b, int c, int d);
void quet_can(int posDong, pos Cot);
int cheotrai(int i, int j);
int cheophai(int i, int j);
int doc(int i, int j);
int ngang(int i, int j);


int main() {
	
}
void init(){
	for(int i = 0; i < soDuongMuonDi; i++)
		duong_di[i] = 0;
}
int timMin(int a, int b) {
	return (a > b ? a : b);
}
int min(int a, int b, int c, int d) {
	int res1 = (a > b) ? a : b;
	int res2 = (c > d) ? c : d;
	return (res1 > res2 ? res1 : res2);
}
int cheotrai(int i, int j) {
	return timMin(a[i-1][j-1], a[i+1][j+1]);
}	
int cheophai(int i, int j){
	return timMin(a[i-1][j+1], a[i+1][j-1];
}
int doc(int i, int j) {
	return timMin(a[i-1][j], a[i+1][j];
}
int ngang(int i, int j) {
	return timMin(a[i][j+1], a[i][j-1];
}
void quet_can(int posDong, pos Cot) {
	int i, j;
	for(i = 1; i <= soDuongMuonDi; i++){
		int 
			if(duong_di[i] == 0 && min(cheotrai(i, sodDuongMuonDi),
												cheophai(i, sodDuongMuonDi),
												doc(i, sodDuongMuonDi),
												ngang(i, sodDuongMuonDi)))
		}
	}

}
