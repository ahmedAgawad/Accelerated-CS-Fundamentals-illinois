#include <iostream>

int main()
{
	int *numPtr = new int;

	std::cout << "*numPtr: " << *numPtr << std::endl;
	std::cout << " numPtr: " << numPtr << std::endl;
	std::cout << "&numPtr: " << &numPtr << std::endl;

	*numPtr = 42;
	std::cout << "*numPtr assigned 42." << std::endl;

	std::cout << "*numPtr: " << *numPtr << std::endl;
	std::cout << " numPtr: " << numPtr << std::endl;
	std::cout << "&numPtr: " << &numPtr << std::endl;

	return 0;
}