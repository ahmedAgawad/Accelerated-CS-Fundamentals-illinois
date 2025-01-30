#include <iostream>

#include "Cube.h"
#include "HSLAPixel.h"

int main()
{
	uiuc::Cube c(4, uiuc::HSLAPixel::PURPLE);
	std::cout << "Created a Purple cube!" << std::endl;
	std::cout << c.getVolume() << " " << c.getWidth();
	return 0;
}