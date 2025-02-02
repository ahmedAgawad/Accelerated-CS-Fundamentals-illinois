#include <iostream>
#include "../Cube.h"
using uiuc::Cube;
using namespace std;

int main()
{
	Cube cubes[3] = { Cube(11),  Cube(42), Cube(400)};
	cout << "Size of each Cube " << sizeof(Cube) << endl;

	int offset = (long long)&(cubes[2]) - (long long)&(cubes[0]);
	cout << offset;
	return 0;
}