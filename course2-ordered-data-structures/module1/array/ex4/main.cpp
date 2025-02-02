#include <iostream>
#include <vector>
#include "../Cube.h"

using uiuc::Cube;

int main()
{
	std::vector<Cube> cubes = {Cube(2), Cube(5), Cube(7)};
	std::cout << "Intial Size: " << cubes.size() << std::endl;
	std::cout << "Initial Capacity: " << cubes.capacity() << std::endl;
	cubes.push_back(Cube(10));
	std::cout << "Size after adding: " << cubes.size() << std::endl;
	std::cout << "Capacity after adding : " << cubes.capacity() << std::endl;

	int offset = (long)&(cubes[2]) - (long)&(cubes[0]);
	std::cout << "Memory offset between 2 and 0 " << offset;

	return 0;
}