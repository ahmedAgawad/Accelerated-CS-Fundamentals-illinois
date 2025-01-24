#include "Cube.h"

namespace uiuc {
	double Cube::getVolume() {
		return length_ * length_ * length_;
	}

	double Cube::getSurfaceArea() {
		return length_ * length_ * 6;
	}

	void Cube::setLength(double length) {
		length_ = length;
	}
}