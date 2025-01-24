#pragma once

class cube
{
public:
	double getVolume();
	double getSurfaceArea();
	void setLength(double length);
	double getLength();

private:
	double length_ = 0;
};