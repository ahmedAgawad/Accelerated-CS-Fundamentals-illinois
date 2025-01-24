#include <iostream>
#include "cube.h"
using namespace std;

int main()
{
	cube c;
	cout << c.getLength() << endl;
	c.setLength(3.2);

	cout << c.getSurfaceArea() << " " << c.getVolume();
	return 0;
}