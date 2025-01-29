#pragma once

namespace uiuc
{
	class Cube
	{
	public:
		// No default constructor
		Cube(double length); // One argument constructor

		double getVolume();
		double getSurfaceArea();
		void setLength(double length);

	private:
		double length_;
	};
}