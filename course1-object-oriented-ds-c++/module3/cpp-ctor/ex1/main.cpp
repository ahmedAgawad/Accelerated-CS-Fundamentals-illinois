#include <iostream>
#include "Cube.h"
using namespace std;
using namespace uiuc;

int main()
{
	Cube a; // custom default constructor 
	cout << "Volume of cube a is " << a.getVolume() << endl;

	return 0;
}