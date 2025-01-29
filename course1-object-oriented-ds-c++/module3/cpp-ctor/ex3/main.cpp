#include <iostream>
#include "Cube.h"
using namespace std;
using namespace uiuc;

int main() {
	// Cube c; error!! compiler will not provide default constructor
	Cube c(3);
	cout << c.getVolume() << endl;
}