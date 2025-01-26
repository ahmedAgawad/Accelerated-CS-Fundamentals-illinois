#include "Cube.h"
#include <iostream>
using uiuc::Cube;

Cube *CreateUnitCube()
{
	Cube cube;
	cube.setLength(15);
	return &cube;
}

double someOtherFunction()
{
	Cube cubes[100];
	double totalVolume = 0;

	for (int i = 0; i < 100; i++)
	{
		cubes[i].setLength(i);
		totalVolume += cubes[i].getVolume();
	}

	return totalVolume;
}

int main()
{
	Cube *c = CreateUnitCube();
	someOtherFunction();
	double a = c->getSurfaceArea();
	std::cout << "Surface Area: " << a << std::endl;
	double v = c->getVolume();
	std::cout << "Volume: " << v << std::endl;
	return 0;
}
