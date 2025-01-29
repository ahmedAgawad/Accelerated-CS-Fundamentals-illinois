#include "../Cube.h"
#include <iostream>

using uiuc::Cube;

bool sendCube(Cube * c) {

	return true;
}

int main() {
	Cube c(10);
	sendCube(&c);
	return 0;
}