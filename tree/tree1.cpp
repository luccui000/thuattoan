#include <iostream>
#include <stdio.h>
#define n 100

struct PriQueue { int e[n+1]; int last; };
struct PriQueue h;

void insert(int value);
int deleteMin();
void printTree();
void printMenu();

int main() {
	printMenu();
	std::cin.get();
}

void printMenu() {
	int choose;
	int k = 0;
	std::cout << "Ban co muon mo tep tu file khong ?" << std::endl;
	std::cin >> k;
	FILE* f;
	if(k == 1){
		f =fopen("data.txt", "r");
		fscanf(f, "%d", &h.last);
		for(int i = 0; i < h.last; i++)
			fscanf(f, "%d", &h.e[i]);
		printTree();
		fclose(f);
	} else {
		for(int i = 0; i < n; i++){
			h.last = 0;
			h.e[i] = 0;
		}
		printTree();
	}		
	while(true) {
		std::cout << "1.Insert\t2.DeleteMin\t0.Thoat\n";
		std::cout << "Nhap vao lua chon: "; std::cin >> choose;
	switch(choose) {
	case 1:
		int value;
		std::cout << "Nhap vao gia tri can them: "; std::cin >> value;
		insert(value);
		printTree();
		std::cout << std::endl;
		break;
	case 2:
		deleteMin();
		printTree();
		std::cout << std::endl;
		break;
	case 0:
		return;
		break;
	}
	}
}
	
void insert(int x) {
	int i, t;
	if(h.last > n - 1)
		std::cout << "Queue day" << std::endl;
	else {
		h.e[++h.last] = x;
		i = h.last;
		while(i > 1 && h.e[i] < h.e[i/2]){
			t = h.e[i];
			h.e[i] = h.e[i/2];
			h.e[i/2] = t;
			i /= 2;
		}
	}

}

int deleteMin() {
	int i, j, t, x, condition;
	if(h.last == 0) {
		std::cout << "Queue is empty" << std::endl;
		return 0;
	} else {
		x = h.e[1];
		h.e[1] = h.e[h.last];
		--h.last;
		i = 1;
		condition = 0;
		while(i < h.e[i/2] && !condition){
			if(2 * i < h.last / 2)
				j = 2 * i;
			else 
				j = (h.e[2*i] <= h.e[2*i+1]) ? (2 * i) : (2 * i + 1);
			if(h.e[i] > h.e[j]) {
				t = h.e[i];
				h.e[i] = h.e[j];
				h.e[j] = t;
				i = j;
			}
			else 
				condition = 1;
		}
	}
	return x;
}
void printTree() {  
	if(h.last == 0)
		std::cout << "Queue is Empty" << std::endl;
	else {
		for(int i = 0; i < h.last; i++) {
			std::cout << " - " << h.e[i];
		}
	}
}































