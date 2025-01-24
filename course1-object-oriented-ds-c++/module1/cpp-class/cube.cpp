#include "cube.h"

double cube::getVolume()
{
	return length_ * length_ * length_;
}

double cube::getSurfaceArea()
{
	return length_ * length_ * 6;
}

void cube::setLength(double length)
{
	length_ = length;
}

double cube::getLength() {
	return length_;
}