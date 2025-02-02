#include <iostream>
#include <string.h>
#include <sstream>

int stringToInt(const std::string& str);
bool quay_lui_tinh_tong(std::string str, int number);

int main() {
	std::cout << quay_lui_tinh_tong("1234", 46) << std::endl;
	std::cin.get();
}
int stringToInt(const std::string& str) {
	std::stringstream ss(str);
	int x = 0;
	ss >> x;
	return x;
}
bool quay_lui_tinh_tong(std::string str, int number) {
	bool flag = false;
	std::string& s = str;
	if(std::atoi(str.c_str()) < number) return false;
	else if (std::atoi(str.c_str()) == number) return true;
	else {
		int i = 1;
		while(std::atoi(str.assign(s.c_str(), 1)) < number && flag == false) {
			quay_lui_tinh_tong(std::atoi(str.assign(s.c_str(), i+1, s.length() - i)), number - std::atoi(str.c_str().assign(s.c_str(), 1)));
			i++;
		}
		return flag;
	}
}
