#pragma once

#include "Shape.h"
#include "HSLAPixel.h"

namespace uiuc
{
	class Cube : public Shape
	{
	public:
		Cube(double width, uiuc::HSLAPixel color);
		double getVolume() const;

	private:
		uiuc::HSLAPixel color_;
	};
}