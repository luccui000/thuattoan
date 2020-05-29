#include <iostream>
#include <string.h>
#define MAX_DIGITS 100
#define PLUS 1
#define MINUS -1


struct big_num {
	char NUMBER[MAX_DIGITS];
	int signbit;
	int lastdigit;
};

void scan_bignum(big_num &number);
void print_bignum(big_num number);
int kiemtra(char s[]);

int main() {
	big_num a;
	std::cout << "Nhap A: ";
	scan_bignum(a);
	print_bignum(a);
	std::cin.get();
}

void scan_bignum(big_num &number) {  	// Nhap so lon tu ban phim
	char tmp[256];
	std::cin.getline(tmp, 256);
	if(!kiemtra(tmp)){
		number.NUMBER[0] = 0;
		number.signbit = PLUS;
		number.lastdigit = 0;
	} else {
		if(tmp[0] != '-'){
			number.signbit = PLUS;
			number.lastdigit = strlen(tmp) - 1;
			for(int i = 0;i <= number.lastdigit; i++) {
				number.NUMBER[i] = tmp[number.lastdigit-i] - 48;
			}
		} else {
			number.signbit = MINUS;
			number.lastdigit = strlen(tmp) - 2;
			for(int i = 0; i <= number.lastdigit; i++) {
				number.NUMBER[i] = tmp[number.lastdigit-i] - 48;
			}
		}

	}
}	
	
void print_bignum(big_num number) {
	if(number.signbit == MINUS)
		 std::cout << "-";
	for(int i = number.lastdigit; i >= 0; i--)
		std::cout << (int)number.NUMBER[i];
}
int kiemtra(char s[]) {
	if(s[0] != '-' && !isdigit(s[0]))
		return 0;
	int len = strlen(s);
	for(int i = 1; i < len; i++) { 
		if(!isdigit(s[i]))
			 return 0;
	}
	return 1;
}

