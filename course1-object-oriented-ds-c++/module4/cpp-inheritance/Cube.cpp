#include "Cube.h"
#include "Shape.h"

namespace uiuc
{
	Cube::Cube(double width, uiuc::HSLAPixel color) : Shape(width)
	{
		color_ = color;
	}

	double Cube::getVolume() const
	{
		// width is private cannot be accessed with :: operator directly
		return getWidth() * getWidth() * getWidth();
	}
}