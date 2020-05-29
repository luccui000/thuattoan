#include <iostream>
#define MAX 100

void out(int *a, int n){
	for(int i = 0; i < n; i++)
		std::cout << a[i] << "\t";
	std::cout << std::endl;
}
void merge(int *a, int l, int m, int h) {
	int i, j, k = l;
	// 0 ... 7 
	// 3 + l + 1
	int n1 = m - l + 1;
	int n2 = h - m;
	int *lNode = new int[n1];
	int *rNode = new int[n2];
	for(i = 0; i < n1; i++)
		lNode[i] = a[l+i];
	std::cout << "\nlNode: ";
	out(lNode, n1);
	
	for(int j = 0; j < n2; j++)
		rNode[j] = a[m + 1 + j];
	std::cout << "\nrNode: ";
	out(rNode, n2);
	i = 0; j = 0;
	while(i < n1 && j < n2){
		a[k++] = (lNode[i] <= rNode[j]) ? lNode[i++] : rNode[j++];
	}
	while(i < n1) {
		a[k++] = lNode[i++];
	}
	while(j < n2) {
		a[k++] = rNode[j++];
	}
	delete lNode;
	delete rNode;
}
void merge_sort(int *a, int l, int h) {
	if(l < h) {
		int m = l + (h - l) / 2;
		merge_sort(a, l, m);
		merge_sort(a, m + 1, h);
		merge(a, l, m, h);
	}
}

int main() {
	int a[] = { 2, 43, 32, 42, 1, 46, 66, 35, 90, 73, 19 };
	int n = sizeof(a) / sizeof(int);
	out(a, n);
	merge_sort(a, 0, n - 1);
	out(a, n);
	std::cin.get();

}
