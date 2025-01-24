#include <iostream>
#include "Cube.h"
using namespace std;

int main() {
	uiuc::Cube c;
	c.setLength(3.2);

	cout << c.getVolume() << " " << c.getSurfaceArea();
}