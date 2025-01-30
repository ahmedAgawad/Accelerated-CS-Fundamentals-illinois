#pragma once 

class Shape {
	public :
		Shape();
		Shape(double width);
		double getWidth() const;

	private:
		double width_;
};