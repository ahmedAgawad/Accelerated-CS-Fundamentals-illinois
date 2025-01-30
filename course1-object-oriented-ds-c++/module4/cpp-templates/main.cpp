#include <iostream>
#include <string>
using std::cout;
using std::endl;

#include "Cube.h"
using uiuc::Cube;

template <typename T>
T my_max(T a, T b)
{
	if (a > b)
	{
		return a;
	}
	return b;
}

int main()
{
	cout << "my_max(3, 5): " << my_max(3, 5) << endl;
	cout << "my_max('a', 'd'): " << my_max('a', 'd') << endl;

	
	cout << "my_max(std::string(\"Hello\"), std::string(\"World\")): "
		  << my_max(std::string("Hello"), std::string("World")) << endl;

	

	return 0;
}