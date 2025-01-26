#include <iostream>

int main() {
	int num = 7;
	int *ptr = new int(10);
	std::cout << "Value : " << num << std::endl;
	std::cout << "Address In Stack : " << &num << std::endl;
}